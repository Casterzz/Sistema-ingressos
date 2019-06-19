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
    this->cpf = cpf.toStdString();
    this->senha = senha.toStdString();

    CPF cpfInput;
    Senha senhaInput;

    try {
        cpfInput.setCPF(this->cpf);
        senhaInput.setSenha(this->senha);
        emit (notifique_situacao(1));
    } catch (const invalid_argument &exp) {
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

CPF CntrIAAutenticacao::fornecer_cpf() throw(runtime_error){
    CPF cpf;
    cpf.setCPF(this->cpf);
    return cpf;
}

bool CntrIAUsuario::executar_autenticado(CPF cpf) throw(runtime_error) {
    TelaUsuario Tela;
    Tela.setModal(true);
    logado = true;
    this->cpf = cpf;

    // Início conexões ------------------------------------------------------------------------------------------

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
    QObject::connect(&Tela, SIGNAL (clicou_minhas_compras(int)), this, SLOT(executarMinhasComprasGUI()));
    QObject::connect(this, SIGNAL (inicia_mostrar_ingressos(list<Ingresso>, list<Apresentacao>, list<Evento>)),
                     &Tela, SLOT(on_mostre_ingressos(list<Ingresso>, list<Apresentacao>, list<Evento>)));
    QObject::connect(&Tela, SIGNAL (clicou_meus_eventos(int)), this, SLOT(executarMeusEventosGUI()));
    QObject::connect(this, SIGNAL (inicia_mostrar_meus_eventos(list<Evento>)),
                     &Tela, SLOT (on_mostre_meus_eventos(list<Evento>)));
    QObject::connect(&Tela, SIGNAL(clicou_tabela_meus_eventos(int, int)), this, SLOT (processarMeusEventosGUI(int, int)));
    QObject::connect(this, SIGNAL(inicia_vendas_efetuadas(string, list<Apresentacao>)),
                     &Tela, SLOT (on_vendas_efetuadas(string, list<Apresentacao>)));
    QObject::connect(this, SIGNAL(inicia_editar_evento(EstruturaEvento, list<Apresentacao>)),
                     &Tela, SLOT (on_editar_evento(EstruturaEvento, list<Apresentacao>)));
    QObject::connect(this, SIGNAL(status_exclusao_evento(bool)), &Tela, SLOT (on_status_exclusao_evento(bool)));
    QObject::connect(&Tela, SIGNAL(clicou_tabela_vendas_efetuadas(int, int, CodigoApresentacao)),
                     this, SLOT (processarCompradoresGUI(int, int, CodigoApresentacao)));
    QObject::connect(this, SIGNAL(inicia_mostrar_compradores(list<CPF>, CodigoApresentacao)),
                     &Tela, SLOT (on_mostre_compradores(list<CPF>, CodigoApresentacao)));
    QObject::connect(&Tela, SIGNAL(clicou_alterar_nome_evento(string, string)), this, SLOT (alterarNomeEventoGUI(string, string)));
    QObject::connect(&Tela, SIGNAL(clicou_alterar_classe_evento(string, string)), this, SLOT (alterarClasseEventoGUI(string, string)));
    QObject::connect(&Tela, SIGNAL(clicou_alterar_faixa_evento(string, string)), this, SLOT (alterarFaixaEventoGUI(string, string)));
    QObject::connect(&Tela, SIGNAL(clicou_alterar_estado_evento(string, string)), this, SLOT (alterarEstadoEventoGUI(string, string)));
    QObject::connect(&Tela, SIGNAL(clicou_alterar_cidade_evento(string, string)), this, SLOT (alterarCidadeEventoGUI(string, string)));
    QObject::connect(&Tela, SIGNAL(clicou_confirmar_editar_evento(string)), &Tela, SLOT (inicia_mostrar_apresentacoes_evento(string)));
    QObject::connect(&Tela, SIGNAL(clicou_alterar_dataApresentacao(string, string)), this, SLOT(alterarDataApresentacaoGUI(string, string)));
    QObject::connect(&Tela, SIGNAL(clicou_alterar_horarioApresentacao(string, string)), this, SLOT(alterarHorarioApresentacaoGUI(string, string)));
    QObject::connect(&Tela, SIGNAL(clicou_alterar_precoApresentacao(string, string)), this, SLOT(alterarPrecoApresentacaoGUI(string, string)));
    QObject::connect(&Tela, SIGNAL(clicou_alterar_salaApresentacao(string, string)), this, SLOT(alterarSalaApresentacaoGUI(string, string)));
    QObject::connect(&Tela, SIGNAL(clicou_excluir_apresentacao(string)), this, SLOT(excluirApresentacaoGUI(string)));
    QObject::connect(&Tela, SIGNAL(clicou_concluir_nova_apresent(EstruturaApresentacao)),
                     this, SLOT(addApresentacaoGUI(EstruturaApresentacao)));
    QObject::connect(&Tela, SIGNAL(clicou_finalizar_criar_evento(EstruturaEvento)),
                     this, SLOT(addEventoGUI(EstruturaEvento)));

    QObject::connect(this, SIGNAL (notifique_situacao(int)), &Tela, SLOT(on_notificar_situacao(int)));

    // Fim conexões ---------------------------------------------------------------------------------------

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
    } else emit (notifique_situacao(7));
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

void CntrIAUsuario::executarMinhasComprasGUI() {
    list<Ingresso> lista_ingressos =  cntrISUsuario->obter_ingressos_usuario(this->cpf);
    list<Apresentacao> lista_apresentacao = cntrISUsuario->obter_apresentacoes_ingresso(lista_ingressos);
    list<Evento> lista_eventos = cntrISUsuario->obter_evento_apresentacao(lista_apresentacao);
    emit (inicia_mostrar_ingressos(lista_ingressos, lista_apresentacao, lista_eventos));
}

void CntrIAUsuario::executarMeusEventosGUI() {
    list<Evento> lista_eventos;
    lista_eventos = cntrISUsuario->obter_eventos_criados(this->cpf);
    emit (inicia_mostrar_meus_eventos(lista_eventos));
}

void CntrIAUsuario::processarMeusEventosGUI(int linha, int coluna) {
    // obtem eventos do usuario
    list<Evento> lista_eventos = cntrISUsuario->obter_eventos_criados(this->cpf);

    // pega evento selecionado pelo numero da linha
    for (int i = 0; i < linha; i++) {
        lista_eventos.pop_front();
    }

    // criacao do objeto da classe CodigoEvento
    EstruturaEvento estrutura_evento;
    lista_eventos.front().getEvento(&estrutura_evento);
    CodigoEvento codigo;
    codigo.setCodigo(estrutura_evento.codigo);

    // pega lista de apresentacoes do evento selecionado
    list<Apresentacao> lista_apresentacao = cntrISUsuario->obter_apresentacoes(codigo);

    switch (coluna) {
    case 2:
        emit inicia_vendas_efetuadas(estrutura_evento.nome, lista_apresentacao);
        break;

    case 3:
        emit inicia_editar_evento(estrutura_evento, lista_apresentacao);
        break;

    case 4:
        emit status_exclusao_evento(cntrISUsuario->excluir_evento(codigo));
        break;

    default:
        break;
    }
}

void CntrIAUsuario::processarCompradoresGUI(int linha, int coluna, CodigoApresentacao codigo) {
    list<CPF> lista_cpf = cntrISUsuario->obter_compradores(codigo);

    emit(inicia_mostrar_compradores(lista_cpf, codigo));
}

void CntrIAUsuario::alterarNomeEventoGUI(string novoNome, string codigo_evento) {
    CodigoEvento codigo;
    codigo.setCodigo(codigo_evento);

    NomeEvento nome;
    try {
        nome.setNome(novoNome);
        emit (notifique_situacao(16));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(18));
        return;
    }

    Evento evento = cntrISUsuario->mostrar_evento(codigo);
    EstruturaEvento estrutura_evento;
    evento.getEvento(&estrutura_evento);

    estrutura_evento.nome = novoNome;
    evento.setEvento(estrutura_evento);

    if(!cntrISUsuario->alterar_evento(evento)) {
        emit (notifique_situacao(19));
    } else {
        emit (notifique_situacao(17));

    }
}

void CntrIAUsuario::alterarClasseEventoGUI(string novaClasse, string codigo_evento) {
    CodigoEvento codigo;
    codigo.setCodigo(codigo_evento);

    ClasseEvento classe;

    try {
        classe.setClasseEvento(novaClasse);
        emit (notifique_situacao(16));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(18));
        return;
    }

    Evento evento = cntrISUsuario->mostrar_evento(codigo);
    EstruturaEvento estrutura_evento;
    evento.getEvento(&estrutura_evento);

    estrutura_evento.classe = novaClasse;
    evento.setEvento(estrutura_evento);

    if(!cntrISUsuario->alterar_evento(evento)) {
        emit (notifique_situacao(19));
    } else {
        emit (notifique_situacao(17));
    }
}

void CntrIAUsuario::alterarFaixaEventoGUI(string novaFaixa, string codigo_evento) {
    CodigoEvento codigo;
    codigo.setCodigo(codigo_evento);

    FaixaEtaria faixa;

    try {
        faixa.setFaixa(novaFaixa);
        emit (notifique_situacao(16));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(18));
        return;
    }

    Evento evento = cntrISUsuario->mostrar_evento(codigo);
    EstruturaEvento estrutura_evento;
    evento.getEvento(&estrutura_evento);

    estrutura_evento.faixa = novaFaixa;
    evento.setEvento(estrutura_evento);

    if(!cntrISUsuario->alterar_evento(evento)) {
        emit (notifique_situacao(19));
    } else {
        emit (notifique_situacao(17));
    }
}

void CntrIAUsuario::alterarCidadeEventoGUI(string novaCidade, string codigo_evento) {
    CodigoEvento codigo;
    codigo.setCodigo(codigo_evento);

    Cidade cidade;

    try {
        cidade.setCidade(novaCidade);
        emit (notifique_situacao(16));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(18));
        return;
    }

    Evento evento = cntrISUsuario->mostrar_evento(codigo);
    EstruturaEvento estrutura_evento;
    evento.getEvento(&estrutura_evento);

    estrutura_evento.cidade = novaCidade;
    evento.setEvento(estrutura_evento);

    if(!cntrISUsuario->alterar_evento(evento)) {
        emit (notifique_situacao(19));
    } else {
        emit (notifique_situacao(17));
    }
}

void CntrIAUsuario::alterarEstadoEventoGUI(string novoEstado, string codigo_evento) {
    CodigoEvento codigo;
    codigo.setCodigo(codigo_evento);

    Estado estado;

    try {
        estado.setEstado(novoEstado);
        emit (notifique_situacao(16));
    } catch (const invalid_argument &exp) {
        emit (notifique_situacao(18));
        return;
    }

    Evento evento = cntrISUsuario->mostrar_evento(codigo);
    EstruturaEvento estrutura_evento;
    evento.getEvento(&estrutura_evento);

    estrutura_evento.estado = novoEstado;
    evento.setEvento(estrutura_evento);

    if(!cntrISUsuario->alterar_evento(evento)) {
        emit (notifique_situacao(19));
    } else {
        emit (notifique_situacao(17));
    }
}

void CntrIAUsuario::alterarDataApresentacaoGUI(string nova_data, string codigo_apresentacao) {
    CodigoApresentacao codigo;
    codigo.setCodigo(codigo_apresentacao);

    Data data;

    try {
        data.setData(nova_data);
        emit notifique_situacao(23);
    } catch (const invalid_argument &exp) {
        emit notifique_situacao(24);
        return;
    }

    Apresentacao apresentacao = cntrISUsuario->mostrar_apresentacao(codigo);
    EstruturaApresentacao estrutura_apresentacao;
    apresentacao.getApresentacao(&estrutura_apresentacao);

    estrutura_apresentacao.data = nova_data;

    if(!cntrISUsuario->alterar_apresentacao(apresentacao)) {
        emit (notifique_situacao(21));
    } else {
        emit (notifique_situacao(22));
    }
}

void CntrIAUsuario::alterarHorarioApresentacaoGUI(string novo_horario, string codigo_apresentacao) {
    CodigoApresentacao codigo;
    codigo.setCodigo(codigo_apresentacao);

    Horario horario;

    try {
        horario.setHorario(novo_horario);
        emit notifique_situacao(23);
    } catch (const invalid_argument &exp) {
        emit notifique_situacao(24);
        return;
    }

    Apresentacao apresentacao = cntrISUsuario->mostrar_apresentacao(codigo);
    EstruturaApresentacao estrutura_apresentacao;
    apresentacao.getApresentacao(&estrutura_apresentacao);

    estrutura_apresentacao.horario = novo_horario;

    if(!cntrISUsuario->alterar_apresentacao(apresentacao)) {
        emit (notifique_situacao(21));
    } else {
        emit (notifique_situacao(22));
    }
}

void CntrIAUsuario::alterarPrecoApresentacaoGUI(string novo_preco, string codigo_apresentacao) {
    CodigoApresentacao codigo;
    codigo.setCodigo(codigo_apresentacao);

    Preco preco;

    try {
        preco.setPreco(novo_preco);
        emit notifique_situacao(23);
    } catch (const invalid_argument &exp) {
        emit notifique_situacao(24);
        return;
    }

    Apresentacao apresentacao = cntrISUsuario->mostrar_apresentacao(codigo);
    EstruturaApresentacao estrutura_apresentacao;
    apresentacao.getApresentacao(&estrutura_apresentacao);

    estrutura_apresentacao.preco = novo_preco;

    if(!cntrISUsuario->alterar_apresentacao(apresentacao)) {
        emit (notifique_situacao(21));
    } else {
        emit (notifique_situacao(22));
    }
}

void CntrIAUsuario::alterarSalaApresentacaoGUI(string nova_sala, string codigo_apresentacao) {
    CodigoApresentacao codigo;
    codigo.setCodigo(codigo_apresentacao);

    NumeroSala sala;

    try {
        sala.setSala(nova_sala);
        emit notifique_situacao(23);
    } catch (const invalid_argument &exp) {
        emit notifique_situacao(24);
        return;
    }

    Apresentacao apresentacao = cntrISUsuario->mostrar_apresentacao(codigo);
    EstruturaApresentacao estrutura_apresentacao;
    apresentacao.getApresentacao(&estrutura_apresentacao);

    estrutura_apresentacao.sala = nova_sala;

    if(!cntrISUsuario->alterar_apresentacao(apresentacao)) {
        emit (notifique_situacao(21));
    } else {
        emit (notifique_situacao(22));
    }
}

void CntrIAUsuario::excluirApresentacaoGUI(string codigo) {
    CodigoApresentacao codigo_apr;
    codigo_apr.setCodigo(codigo);

    if (!cntrISUsuario->excluir_apresentacao(codigo_apr)) {
        emit(notifique_situacao(25));
    } else {
        emit(notifique_situacao(26));
    }
}

void CntrIAUsuario::addApresentacaoGUI(EstruturaApresentacao estrutura_apresentacao) {
    estrutura_apresentacao.codigo = cntrISUsuario->gera_codigo_apresentacao();
    Apresentacao nova_apresent;
    try {
        nova_apresent.setApresentacao(estrutura_apresentacao);
        emit(notifique_situacao(27)); // sinal de adicionando
    } catch (const invalid_argument(&exp)) {
        emit(notifique_situacao(28)); // sinal de formato invalido
        return;
    }

    if (!cntrISUsuario->add_apresentacao(nova_apresent)) {
        emit(notifique_situacao(29)); // sinal de falha
    } else {
        emit(notifique_situacao(30)); // sinal de sucesso
    }
}

void CntrIAUsuario::addEventoGUI(EstruturaEvento estrutura_evento) {
    estrutura_evento.codigo = cntrISUsuario->gera_codigo_evento();
    Evento novo_evento;
    try {
        novo_evento.setEvento(estrutura_evento);
        emit(notifique_situacao(31)); // sinal de adicionando
    } catch (const invalid_argument(&exp)) {
        emit(notifique_situacao(32)); // sinal de formato invalido
        return;
    }

    if (!cntrISUsuario->criar_evento(novo_evento)) {
        emit(notifique_situacao(33)); // sinal de falha
    } else {
        emit(notifique_situacao(34)); // sinal de sucesso
    }
}


void CntrIAEventos::executar(CPF cpf, bool logado) throw(runtime_error) {
    this->logado = logado;
    this->cpf = cpf.getCPF();

    telaEventos Tela;
    Tela.setModal(true);

    QObject::connect(this, SIGNAL (notifique_situacao(int)),&Tela, SLOT(on_notificar_situacao(int)));
    QObject::connect(this, SIGNAL (mostre_todos_eventos(list<Evento>)),&Tela, SLOT(mostrar_todos_eventos(list<Evento>)));
    QObject::connect(this, SIGNAL (mostre_eventos(list<Evento>)),&Tela, SLOT(mostrar_eventos(list<Evento>)));
    QObject::connect(&Tela, SIGNAL (pesquisar_por_evento(string)),
                                    this, SLOT(executarMostrarEventosEspGUI(string)));
    QObject::connect(&Tela, SIGNAL (clicou_tabela_eventos_pesquisados(CodigoEvento)),
                                    this, SLOT(processarApresentacoesGUI(CodigoEvento)));
    QObject::connect(this, SIGNAL (inicia_apresentacoes_disponiveis(list<Apresentacao>)),
                                    &Tela, SLOT(mostre_apresentacoes(list<Apresentacao>)));
    QObject::connect(&Tela, SIGNAL (comprar(CodigoEvento, CodigoApresentacao)),
                                   this, SLOT(pre_compra(CodigoEvento, CodigoApresentacao)));

    executarMostrarEventosGUI();
    Tela.exec();
}

void CntrIAEventos::executarMostrarEventosGUI() {
    list<Evento> lista;
    lista = cntrISEventos->pesquisar_todos_eventos();
    emit mostre_todos_eventos(lista);
}

void CntrIAEventos::executarMostrarEventosEspGUI(string pesquisa) {
    list<Evento> lista;
    NomeEvento nome;
    ClasseEvento classe;
    FaixaEtaria faixa;
    Estado estado;
    int tipo = 0;

    try {
        nome.setNome(pesquisa);
        tipo = 1;
    } catch (const invalid_argument &exp) {
        try {
            classe.setClasseEvento(pesquisa);
            tipo = 2;
        } catch (const invalid_argument &exp) {
            try {
                faixa.setFaixa(pesquisa);
                tipo = 3;
            } catch (const invalid_argument &exp) {
                try {
                    estado.setEstado(pesquisa);
                    tipo = 4;
                } catch (const invalid_argument &exp) {
                    emit (notifique_situacao(0));
                    return;
                }
            }
        }
    }

    lista = cntrISEventos->pesquisar_eventos(pesquisa, tipo);
    emit mostre_eventos(lista);
}

void CntrIAEventos::processarApresentacoesGUI(CodigoEvento codigo) {

    list<Apresentacao> lista_apresentacao = cntrISEventos->obter_apresentacoes(codigo);
    emit inicia_apresentacoes_disponiveis(lista_apresentacao);
}

void CntrIAEventos::pre_compra(CodigoEvento codigoEvento, CodigoApresentacao codigoApresentacao) {
    if (logado == false) {
        emit (notifique_situacao(1));
    } else {
        CPF cpf;
        cpf.setCPF(this->cpf);
        cntrIAVendas->executar(cpf, codigoEvento, codigoApresentacao);
    }
}

//-----------------------------------------

void CntrIAVendas::executar(CPF cpf, CodigoEvento codigoEvento, CodigoApresentacao codigoApresentacao) throw(runtime_error) {
    telaVendas Tela;
    Tela.setModal(true);

    QObject::connect(this, SIGNAL (atualize_dados(CartaoCredito, Evento, Apresentacao)),
                                    &Tela, SLOT(atualizar_dados(CartaoCredito, Evento, Apresentacao)));
    QObject::connect(&Tela, SIGNAL (clicouConfirmarCompra(CodigoEvento, CodigoApresentacao)),
                                    this, SLOT(executarCompraGUI(CodigoEvento, CodigoApresentacao)));
    QObject::connect(this, SIGNAL (lista_ingressos_adquiridos(list<Ingresso>)),
                                    &Tela, SLOT(mostrar_lista_ingressos(list<Ingresso>)));

    executarMostrarDadosGUI(cpf, codigoEvento, codigoApresentacao);
    Tela.exec();
}

void CntrIAVendas::executarMostrarDadosGUI(CPF cpf, CodigoEvento codigoEvento, CodigoApresentacao codigoApresentacao) {
    CartaoCredito cartao;
    Evento evento;
    Apresentacao apresentacao;
    cartao = cntrISVendas->obterCartao(cpf);
    evento = cntrISVendas->obterEvento(codigoEvento);
    apresentacao = cntrISVendas->obterApresentacao(codigoApresentacao);
    emit atualize_dados(cartao, evento, apresentacao);
}

void CntrIAVendas::executarCompraGUI(CodigoEvento codigoEvento, CodigoApresentacao codigoApresentacao) {
    list<Ingresso> lista;
    lista = cntrISVendas->atualizar_apresentacao(codigoEvento, codigoApresentacao);
    emit lista_ingressos_adquiridos(lista);
}



