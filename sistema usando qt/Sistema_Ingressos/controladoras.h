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
    //void executarDadosContaGUI();
    //void executarMinhasComprasGUI();
    //void executarMeusEventosGUI();

  signals:
    void notifique_situacao(int);
    void inicia_exclusao_conta();

};

void inline CntrIAUsuario::setCntrISUsuario(ISUsuario *cntrISUsuario) {
    this->cntrISUsuario = cntrISUsuario;
}

#endif // CONTROLADORAS_H
