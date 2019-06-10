#include "controladoras.h"
#include "windows.h"


bool CntrIAAutenticacao::executar_autenticacao(CPF &cpf) throw(runtime_error) {
    Autenticacao autenticacao;
    autenticacao.setModal(true);

    QObject::connect(&autenticacao, SIGNAL (clicou_logar(QString, QString)), this, SLOT(logarGUI(QString, QString)));
    QObject::connect(this, SIGNAL (notifique_situacao(int)), &autenticacao, SLOT(on_notificar_situacao(int)));

    autenticacao.exec();

    //LOGICA DE AUTENTICACAO

    //return true;
    return this->logado;
}

void CntrIAAutenticacao::logarGUI(QString cpf, QString senha){
    qDebug() << "CPF: " << cpf;
    qDebug() << "Senha: " << senha;

    this->cpf = cpf.toStdString();
    this->senha = senha.toStdString();

    CPF cpfInput;
    Senha senhaInput;

    try {
        cpfInput.setCPF(this->cpf);
        senhaInput.setSenha(this->senha);
        emit (notifique_situacao(1));
    } catch (const invalid_argument &exp) {
        qDebug() << "Erro no formato";
        emit (notifique_situacao(0));
        this->logado = false;
        return;
    }

    EstruturaUsuario estrutura_usuario;
    Usuario usuario;
    estrutura_usuario.cpf = cpfInput.getCPF();
    estrutura_usuario.senha = senhaInput.getSenha();
    usuario.setUsuario(estrutura_usuario);
    this->logado = cntrISAutenticacao->autenticar(usuario);
    if (this->logado == true) emit (notifique_situacao(3));
    else emit (notifique_situacao(2));
}

bool CntrIAUsuario::executar_autenticado(CPF) throw(runtime_error) {

}


void CntrIAUsuario::executar_novo() throw(runtime_error) {
    TelaUsuario Tela;
    Tela.setModal(true);

    QObject::connect(&Tela, SIGNAL (clicou_ir_cadastrar(EstruturaUsuario, EstruturaCartaoCredito)),
                     this, SLOT(executarCadastrarGUI(EstruturaUsuario, EstruturaCartaoCredito)));
    QObject::connect(this, SIGNAL (notifique_situacao(int)), &Tela, SLOT(on_notificar_situacao(int)));
    QObject::connect(&Tela, SIGNAL (clicou_excluir_usuario(int)), &Tela, SLOT(on_notificar_situacao(int)));
    QObject::connect(&Tela, SIGNAL (clicou_dados_conta(int)), &Tela, SLOT(on_notificar_situacao(int)));
    QObject::connect(&Tela, SIGNAL (clicou_minhas_compras(int)), &Tela, SLOT(on_notificar_situacao(int)));
    QObject::connect(&Tela, SIGNAL (clicou_meus_eventos(int)), &Tela, SLOT(on_notificar_situacao(int)));

    Tela.exec();
}

void CntrIAUsuario::executarCadastrarGUI(EstruturaUsuario estrutura_usuario, EstruturaCartaoCredito estrutura_cartao) {
    Usuario usuario;
    CartaoCredito cartao;
    bool cadastrou;

    try {
        usuario.setUsuario(estrutura_usuario);
        cartao.setCartaoCredito(estrutura_cartao);
        emit (notifique_situacao(1));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(0));
        qDebug() << "Erro no formato";
        return;
    }

    usuario.setUsuario(estrutura_usuario);
    cartao.setCartaoCredito(estrutura_cartao);
    cadastrou = cntrISUsuario->cadastrar(usuario, cartao);
    if (cadastrou) emit (notifique_situacao(3));
    else emit (notifique_situacao(2));
}

