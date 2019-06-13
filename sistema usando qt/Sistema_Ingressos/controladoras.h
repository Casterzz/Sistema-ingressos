#ifndef CONTROLADORAS_H
#define CONTROLADORAS_H

#include "interfaces.h"
#include "dominios.h"
//#include "windows.h"
#include <QApplication>
#include <QDebug>
#include <string>

#include <stdexcept>

using namespace std;

class CntrGeral : public QObject{

    Q_OBJECT

  private:
    IAAutenticacao *cntrIAAutenticacao;
    IAUsuario *cntrIAUsuario;
    IAEventos *cntrIAEventos;
    CPF cpf;
    bool logado = false;

  public:
    void setCntrIAAutenticacao(IAAutenticacao *);
    void setCntrIAUsuario(IAUsuario *);
    void setCntrIAEventos(IAEventos *);

  public slots:
    void executarAutGUI();
    void executarUsuGUI();
    void executarEveGUI();
    void executarDeslogarGUI();

  signals:
    void altere_statusGUI(bool);

};

void inline CntrGeral::setCntrIAAutenticacao(IAAutenticacao *cntrIAAutenticacao) {
    this->cntrIAAutenticacao = cntrIAAutenticacao;
}

void inline CntrGeral::setCntrIAEventos(IAEventos *cntrIAEventos) {
    this->cntrIAEventos = cntrIAEventos;
}

void inline CntrGeral::setCntrIAUsuario(IAUsuario *cntrIAUsuario) {
    this->cntrIAUsuario = cntrIAUsuario;
}

void inline CntrGeral::executarAutGUI() {
    logado = cntrIAAutenticacao->executar_autenticacao(cpf);
    emit altere_statusGUI(logado);
    qDebug() << "Autenticacao";
}

void inline CntrGeral::executarUsuGUI() {
    if (logado) {
        this->logado = cntrIAUsuario->executar_autenticado(this->cpf);
    } else {
        cntrIAUsuario->executar_novo();
    }
    qDebug() << "Usuario";
}

void inline CntrGeral::executarEveGUI() {
//    cntrIAAutenticacao->executar_autenticacao(CPF&);
    qDebug() << "Eventos";
}

void inline CntrGeral::executarDeslogarGUI() {
    qDebug() << "deslogou";
    logado = false;
}

class CntrIAAutenticacao : public QObject, public IAAutenticacao{

    Q_OBJECT

  private:
    ISAutenticacao *cntrISAutenticacao;
    bool logado = false;
    string cpf;
    string senha;

  public:
    void setCntrISAutenticacao(ISAutenticacao *);
    bool executar_autenticacao(CPF&) throw(runtime_error);

  public slots:
    void logarGUI(QString, QString);
    //void executarEveGUI();

  signals:
    void notifique_situacao(int);
};

void inline CntrIAAutenticacao::setCntrISAutenticacao(ISAutenticacao *cntrISAutenticacao) {
    this->cntrISAutenticacao = cntrISAutenticacao;
}

class CntrIAUsuario : public QObject, public IAUsuario{

    Q_OBJECT

  private:
    ISUsuario *cntrISUsuario;
    CPF cpf;
    bool logado = false;

  public:
    void setCntrISUsuario(ISUsuario *);
    bool executar_autenticado(CPF) throw(runtime_error);
    void executar_novo() throw(runtime_error);

  public slots:
    void executarCadastrarGUI(EstruturaUsuario, EstruturaCartaoCredito);
    void executarExcluirUsuarioGUI();
    void excluirUsuarioGUI();
    void executarDadosContaGUI();
    void executarMinhasComprasGUI();
    void executarMeusEventosGUI();
    void processarMeusEventosGUI(int, int);
    void processarCompradoresGUI(int, int, CodigoApresentacao);

    void alterarCPFGUI(string);
    void alterarSenhaGUI(string);
    void alterarCartaoGUI(string);
    void alterarCartaoCodigoGUI(string);
    void alterarCartaoDataGUI(string);

    void alterarNomeEventoGUI(string, string);
    void alterarClasseEventoGUI(string, string);
    void alterarFaixaEventoGUI(string, string);
    void alterarCidadeEventoGUI(string, string);
    void alterarEstadoEventoGUI(string, string);

  signals:
    void notifique_situacao(int);
    void inicia_exclusao_conta(string, string);
    void mostre_dados_conta(EstruturaUsuario, EstruturaCartaoCredito);
    void inicia_mostrar_ingressos(list<Ingresso>, list<Apresentacao>, list<Evento>);
    void inicia_mostrar_meus_eventos(list<Evento>);
    void inicia_vendas_efetuadas(string, list<Apresentacao>);
    void inicia_editar_evento(EstruturaEvento, list<Apresentacao>);
    void status_exclusao_evento(bool);
    void inicia_mostrar_compradores(list<CPF>, CodigoApresentacao);
};

void inline CntrIAUsuario::setCntrISUsuario(ISUsuario *cntrISUsuario) {
    this->cntrISUsuario = cntrISUsuario;
}

#endif // CONTROLADORAS_H
