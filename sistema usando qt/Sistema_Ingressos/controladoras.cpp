#include "controladoras.h"
#include "windows.h"


bool CntrIAAutenticacao::executar_autenticacao(CPF &cpf) throw(runtime_error) {
    Autenticacao autenticacao;
    autenticacao.setModal(true);

    this->logado = false;
    QObject::connect(&autenticacao, SIGNAL (clicou_logar(QString, QString)), this, SLOT(logarGUI(QString, QString)));
    QObject::connect(this, SIGNAL (notifique_situacao(int)), &autenticacao, SLOT(on_notificar_situacao(int)));

    autenticacao.exec();

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
    qDebug() << "Logado:" << this->logado;
}

bool CntrIAUsuario::executar_autenticado(CPF cpf) throw(runtime_error) {
    TelaUsuario Tela;
    Tela.setModal(true);
    logado = true;
    this->cpf = cpf;

    QObject::connect(&Tela, SIGNAL (clicou_ir_cadastrar(EstruturaUsuario, EstruturaCartaoCredito)),
                     this, SLOT(executarCadastrarGUI(EstruturaUsuario, EstruturaCartaoCredito)));

    QObject::connect(&Tela, SIGNAL (clicou_excluir_usuario(int)), this, SLOT(executarExcluirUsuarioGUI()));
    QObject::connect(this, SIGNAL (inicia_exclusao_conta(string, string)),
                     &Tela, SLOT(on_Excluir_clicked_logado(string, string)));
    QObject::connect(&Tela, SIGNAL (clicou_confirmar_excluir()), this, SLOT(excluirUsuarioGUI()));
    QObject::connect(&Tela, SIGNAL (clicou_dados_conta(int)), this, SLOT(executarDadosContaGUI()));
    QObject::connect(this, SIGNAL (mostre_dados_conta(EstruturaUsuario, EstruturaCartaoCredito)),
                     &Tela, SLOT(on_mostre_dados_conta(EstruturaUsuario, EstruturaCartaoCredito)));
    QObject::connect(&Tela, SIGNAL (clicou_alterar_cpf(string)), this, SLOT(alterarCPFGUI(string)));
    QObject::connect(&Tela, SIGNAL (clicou_alterar_senha(string)), this, SLOT(alterarSenhaGUI(string)));
    QObject::connect(&Tela, SIGNAL (clicou_alterar_cartao(string)), this, SLOT(alterarCartaoGUI(string)));
    QObject::connect(&Tela, SIGNAL (clicou_alterar_codigoCartao(string)), this, SLOT(alterarCartaoCodigoGUI(string)));
    QObject::connect(&Tela, SIGNAL (clicou_alterar_dataCartao(string)), this, SLOT(alterarCartaoDataGUI(string)));

    //QObject::connect(&Tela, SIGNAL (clicou_minhas_compras(int)), this, SLOT(executarMinhasComprasGUI()));
    //QObject::connect(&Tela, SIGNAL (clicou_meus_eventos(int)), this, SLOT(executarMeusEventosGUI()));

    QObject::connect(this, SIGNAL (notifique_situacao(int)), &Tela, SLOT(on_notificar_situacao(int)));

    Tela.exec();

    return logado;
}


void CntrIAUsuario::executar_novo() throw(runtime_error) {
    TelaUsuario Tela;
    Tela.setModal(true);
    logado = false;

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

void CntrIAUsuario::executarExcluirUsuarioGUI() {
    Usuario usuario;
    CartaoCredito cartao;
    EstruturaUsuario estruturaUsuario;
    EstruturaCartaoCredito estruturaCartao;
    cntrISUsuario->mostrar_dados(usuario, cartao);
    usuario.getUsuario(&estruturaUsuario);
    cartao.getCartaoCredito(&estruturaCartao);
    emit (inicia_exclusao_conta(estruturaUsuario.cpf, estruturaCartao.numero));
}

void CntrIAUsuario::excluirUsuarioGUI() {
    bool excluiu = cntrISUsuario->excluir(this->cpf);
    if (excluiu) {
        this->logado = false;
        emit (notifique_situacao(5));
    }else emit (notifique_situacao(6));
}

void CntrIAUsuario::executarDadosContaGUI() {
    Usuario usuario;
    CartaoCredito cartao;
    EstruturaUsuario estruturaUsuario;
    EstruturaCartaoCredito estruturaCartao;
    cntrISUsuario->mostrar_dados(usuario, cartao);
    usuario.getUsuario(&estruturaUsuario);
    cartao.getCartaoCredito(&estruturaCartao);
    emit (mostre_dados_conta(estruturaUsuario, estruturaCartao));
}

void CntrIAUsuario::alterarCPFGUI(string cpfNovo) {
    CPF cpf;
    try {
        cpf.setCPF(cpfNovo);
        emit (notifique_situacao(14));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(8));
        return;
    }
    if(!cntrISUsuario->alterar_cpf(cpf)) {
        emit (notifique_situacao(15));
    } else {
        emit (notifique_situacao(13));
    }
}

void CntrIAUsuario::alterarSenhaGUI(string senhaNovo) {
    Senha senha;
    try {
        senha.setSenha(senhaNovo);
        emit (notifique_situacao(14));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(9));
        return;
    }
    if(!cntrISUsuario->alterar_senha(senha)) {
        emit (notifique_situacao(15));
    } else {
        emit (notifique_situacao(13));
    }
}

void CntrIAUsuario::alterarCartaoGUI(string cartaoNovo) {
    Usuario usuario;
    CartaoCredito cartao;
    EstruturaCartaoCredito estruturaCartao;
    cntrISUsuario->mostrar_dados(usuario, cartao);
    cartao.getCartaoCredito(&estruturaCartao);
    estruturaCartao.numero = cartaoNovo;
    try {
        cartao.setCartaoCredito(estruturaCartao);
        emit (notifique_situacao(14));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(10));
        return;
    }
    if(!cntrISUsuario->alterar_cartao(cartao)) {
        emit (notifique_situacao(15));
    } else {
        emit (notifique_situacao(13));
    }
}

void CntrIAUsuario::alterarCartaoCodigoGUI(string cartaoCodigoNovo) {
    qDebug() << "Entrou alterar cartao codigo";
    Usuario usuario;
    CartaoCredito cartao;
    EstruturaCartaoCredito estruturaCartao;
    cntrISUsuario->mostrar_dados(usuario, cartao);
    cartao.getCartaoCredito(&estruturaCartao);
    estruturaCartao.codigo = cartaoCodigoNovo;
    try {
        cartao.setCartaoCredito(estruturaCartao);
        emit (notifique_situacao(14));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(11));
        return;
    }
    if(!cntrISUsuario->alterar_cartao(cartao)) {
        emit (notifique_situacao(15));
    } else {
        emit (notifique_situacao(13));
    }
}

void CntrIAUsuario::alterarCartaoDataGUI(string cartaoDataNovo) {
    qDebug() << "Entrou alterar cartao data";
    Usuario usuario;
    CartaoCredito cartao;
    EstruturaCartaoCredito estruturaCartao;
    cntrISUsuario->mostrar_dados(usuario, cartao);
    cartao.getCartaoCredito(&estruturaCartao);
    estruturaCartao.data = cartaoDataNovo;
    try {
        cartao.setCartaoCredito(estruturaCartao);
        emit (notifique_situacao(14));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(12));
        return;
    }
    if(!cntrISUsuario->alterar_cartao(cartao)) {
        emit (notifique_situacao(15));
    } else {
        emit (notifique_situacao(13));
    }
}