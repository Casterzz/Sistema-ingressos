#include "windows.h"
#include "ui_autenticacao.h"
#include "ui_mainwindow.h"
#include "ui_telausuario.h"
#include "ui_telaeventos.h"
#include "ui_telavendas.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->labelPrincipal->setStyleSheet("QLabel { color : red; }");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_autenticar_clicked()
{
    if (ui->autenticar->text().toStdString() == "Logar") {
        ui->labelPrincipal->setText("Autenticando...");
        ui->labelPrincipal->setStyleSheet("QLabel { color : black; }");
        emit clicou_autenticar();
    } else {
        ui->autenticar->setText("Logar");
        ui->labelPrincipal->setText("Status: Não Logado");
        ui->labelPrincipal->setStyleSheet("QLabel { color : red; }");
        emit clicou_deslogar();
    }
}

void MainWindow::on_conta_clicked()
{
    emit clicou_conta();
}

void MainWindow::on_eventos_clicked()
{
    emit clicou_eventos();
}

void MainWindow::on_status_alterado(bool logado)
{
    if (logado) {
        ui->labelPrincipal->setText("Status: Logado");
        ui->autenticar->setText("Deslogar");
        ui->labelPrincipal->setStyleSheet("QLabel { color : green; }");
    } else {
        ui->labelPrincipal->setText("Status: Não Logado");
        ui->labelPrincipal->setStyleSheet("QLabel { color : red; }");
    }
}

//-------------

Autenticacao::Autenticacao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autenticacao)
{
    ui->setupUi(this);
}

Autenticacao::~Autenticacao()
{
    delete ui;
}

void Autenticacao::on_logar_clicked()
{
    emit clicou_logar(ui->campoCPF->text(), ui->campoSenha->text());
}

void Autenticacao::on_notificar_situacao(int situacao){
    if (situacao == 0) ui->status->append("CPF ou Senha incorretos!");
    else if (situacao == 1) ui->status->setText("Conectando ao banco de dados...");
    else if (situacao == 2) ui->status->append("Conta Inexistente!");
    else if (situacao == 3) {
        ui->status->append("Logado com sucesso!");
        close();
    }
}

//------------------------------


TelaUsuario::TelaUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaUsuario)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

TelaUsuario::~TelaUsuario()
{
    delete ui;
}

void TelaUsuario::on_Cadastrar_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void TelaUsuario::on_voltar_cadastrar_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void TelaUsuario::on_ir_cadastrar_clicked()
{
    EstruturaUsuario Usuario;
    EstruturaCartaoCredito Cartao;
    Usuario.cpf = ui->campoCPF_cadastrar->text().toStdString();
    Usuario.senha = ui->campoSenha_cadastrar->text().toStdString();
    Cartao.numero = ui->campoCartao_cadastrar->text().toStdString();
    Cartao.codigo = ui->campoCodigo_cadastrar->text().toStdString();
    Cartao.data = ui->campoData_cadastrar->text().toStdString();
    emit clicou_ir_cadastrar(Usuario, Cartao);
}

void TelaUsuario::on_notificar_situacao(int situacao){
    switch (situacao) {
    case 0: ui->infobox->append("Dados inválidos!"); break;
    case 1: ui->infobox->setText("Conectando ao banco de dados..."); break;
    case 2: ui->infobox->append("Este CPF já está em uso!"); break;
    case 3:
        ui->infobox->append("Conta criada com sucesso!");
        QMessageBox::information(this, "","Conta criada com sucesso, favor se autenticar!");
        close();
        break;
    case 4: ui->infobox_usuario->append("Você precisa estar autenticado para executar esta ação!"); break;
    case 5:
        ui->infobox_excluir->append("Conta excluída com sucesso!");
        QMessageBox::information(this, "","Conta excluída com sucesso! Você será redirecionado à tela inicial.");
        close();
        break;
    case 6: ui->infobox_excluir->append("Erro ao excluir conta: Não foi possível conectar à base de dados."); break;
    case 7: ui->infobox_excluir->append("Erro ao excluir conta: Sua conta possui ingressos vendidos."); break;
    case 8: ui->caixa_conta->append("CPF inválido!"); break;
    case 9: ui->caixa_conta->append("Senha inválida!"); break;
    case 10: ui->caixa_conta->append("Número de cartão inválido!"); break;
    case 11: ui->caixa_conta->append("Código de cartão inválido!"); break;
    case 12: ui->caixa_conta->append("Data inválida!"); break;
    case 13: ui->caixa_conta->setText("Informação alterada com sucesso!"); break;
    case 14: ui->caixa_conta->setText("Alterando Informação..."); break;
    case 15: ui->caixa_conta->setText("Erro ao acessar banco de dados!"); break;
    case 16: ui->status_editar_evento->setText("Alterando Informação..."); break;
    case 17: ui->status_editar_evento->append("Informação alterada com sucesso!"); break;
    case 18: ui->status_editar_evento->append("Formato inválido."); break;
    case 19:
        ui->status_editar_evento->setText("Erro ao acessar banco de dados!");
        QMessageBox::critical(this, "","Eventos e apresentações com ingressos já vendidos não podem ser alterados ou excluídos!");
        break;
    case 21: ui->status_edit_apresent->setText("Informação alterada com sucesso!"); break;
    case 22: ui->status_edit_apresent->setText("Erro ao acessar banco de dados!"); break;
    case 23: ui->status_edit_apresent->setText("Alterando Informação..."); break;
    case 24: ui->status_edit_apresent->append("Formato inválido."); break;
    case 25:
        QMessageBox::critical(this, "","Eventos e apresentações com ingressos já vendidos não podem ser alterados ou excluídos!");
        ui->status_edit_apresent->append("Erro ao acedssar banco de dados!");
        break;
    case 26:
        QMessageBox::information(this, "", "Apresentação excluída com sucesso! Você será redirecionado à tela 'Usuário'.");
        ui->stackedWidget->setCurrentIndex(0);
        break;
    case 27: ui->status_nova_apresent->setText("Adicionando apresentação..."); break;
    case 28: ui->status_nova_apresent->append("Formato inválido."); break;
    case 29: ui->status_nova_apresent->setText("Erro ao acessar banco de dados!"); break;
    case 30:
        ui->status_nova_apresent->append("Apresentação adicionada com sucesso!");
        QMessageBox::information(this, "", "Apresentação adicionada com sucesso! Você será redirecionado à tela 'Criar evento'.");
        ui->stackedWidget->setCurrentIndex(11);
        break;
    case 31: ui->status_criar_evento->setText("Conectando à base de dados..."); break;
    case 32: ui->status_criar_evento->append("Formato inválido."); break;
    case 33: ui->status_criar_evento->setText("Erro ao acessar banco de dados!"); break;
    case 34:
        ui->status_criar_evento->append("Evento criado com sucesso!");
        QMessageBox::information(this, "", "Evento criado com sucesso! Você será redirecionado à tela 'Usuário'.");
        ui->stackedWidget->setCurrentIndex(0);
    }
}

void TelaUsuario::on_Excluir_clicked()
{
    emit clicou_excluir_usuario(4);
}

void TelaUsuario::on_Dados_clicked()
{
    emit clicou_dados_conta(4);
}

void TelaUsuario::on_Compras_clicked()
{
    emit clicou_minhas_compras(4);
}

void TelaUsuario::on_Eventos_clicked()
{
    emit clicou_meus_eventos(4);
}

void TelaUsuario::on_Excluir_clicked_logado(string cpf, string cartao) {
    ui->campoCPF_exclusao->setText(QString::fromStdString(cpf));
    ui->campoCartao_exclusao->setText(QString::fromStdString(cartao));
    ui->stackedWidget->setCurrentIndex(2);
}

void TelaUsuario::on_cancelar_exclusao_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void TelaUsuario::on_confirmar_exclusao_clicked()
{
    emit (clicou_confirmar_excluir());
}

void TelaUsuario::on_mostre_dados_conta(EstruturaUsuario estrutura_usuario,
                                        EstruturaCartaoCredito estrutura_cartao)
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->campo_cpf_conta->setText(QString::fromStdString(estrutura_usuario.cpf));
    ui->campo_senha_conta->setText(QString::fromStdString(estrutura_usuario.senha));
    ui->campo_cartao_conta->setText(QString::fromStdString(estrutura_cartao.numero));
    ui->campo_codigo_conta->setText(QString::fromStdString(estrutura_cartao.codigo));
    ui->campo_data_conta->setText(QString::fromStdString(estrutura_cartao.data));
}

void TelaUsuario::on_alterar_cpf_clicked()
{
    emit (clicou_alterar_cpf(ui->campo_cpf_conta->text().toStdString()));
}

void TelaUsuario::on_alterar_senha_clicked()
{
    emit (clicou_alterar_senha(ui->campo_senha_conta->text().toStdString()));
}

void TelaUsuario::on_alterar_cartao_clicked()
{
    emit (clicou_alterar_cartao(ui->campo_cartao_conta->text().toStdString()));
}

void TelaUsuario::on_alterar_codigo_clicked()
{
    emit (clicou_alterar_codigoCartao(ui->campo_codigo_conta->text().toStdString()));
}

void TelaUsuario::on_alterar_data_clicked()
{
    emit (clicou_alterar_dataCartao(ui->campo_data_conta->text().toStdString()));
}

void TelaUsuario::on_voltar_conta_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void TelaUsuario::on_voltar_compras_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void TelaUsuario::on_mostre_ingressos(list<Ingresso> lista_ingressos, list<Apresentacao> lista_apresentacoes, list<Evento> lista_eventos) {

    ui->tabelaCompras->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabelaCompras->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tabelaCompras->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->stackedWidget->setCurrentIndex(4);


    ui->tabelaCompras->setRowCount(int(lista_ingressos.size()));
    EstruturaIngresso estrutura_ingresso;
    EstruturaApresentacao estrutura_apresentacao;
    EstruturaEvento estrutura_evento;

    string eventoString;
    string apresentacaoString;

    for (int i = 0; i < int(lista_ingressos.size()); i++) {
        lista_ingressos.front().getIngresso(&estrutura_ingresso);
        lista_eventos.front().getEvento(&estrutura_evento);
        lista_apresentacoes.front().getApresentacao(&estrutura_apresentacao);

        eventoString = ("Nome: " + estrutura_evento.nome + "\n" +
                        "Classe: " + estrutura_evento.classe + "\n" +
                        "Faixa: " + estrutura_evento.faixa + "\n" +
                        "Local: " + estrutura_evento.cidade + "/" + estrutura_evento.estado);

        apresentacaoString = ("Código: " + estrutura_apresentacao.codigo + "\n" +
                              "Data: " + estrutura_apresentacao.data + "\n" +
                              "Horário: " + estrutura_apresentacao.horario + "\n" +
                              "Sala: " + estrutura_apresentacao.sala);

        ui->tabelaCompras->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(estrutura_ingresso.codigo)));
        ui->tabelaCompras->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(eventoString)));
        ui->tabelaCompras->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(apresentacaoString)));

        lista_ingressos.pop_front();
        lista_eventos.pop_front();
        lista_apresentacoes.pop_front();
    }
    ui->tabelaCompras->resizeRowsToContents();
    ui->tabelaCompras->resizeColumnsToContents();
}

void TelaUsuario::on_mostre_meus_eventos(list<Evento> lista_eventos) {
    ui->tabelaMeusEventos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->stackedWidget->setCurrentIndex(5);

    ui->tabelaMeusEventos->setRowCount(int(lista_eventos.size()));
    EstruturaEvento estrutura_evento;

    string eventoString;
    QFont font;
    font.setBold(true);
    font.setUnderline(true);

    for (int i = 0; i < int(lista_eventos.size()); i++) {
        lista_eventos.front().getEvento(&estrutura_evento);

        eventoString = ("Nome: " + estrutura_evento.nome + "\n" +
                        "Classe: " + estrutura_evento.classe + "\n" +
                        "Faixa: " + estrutura_evento.faixa + "\n" +
                        "Local: " + estrutura_evento.cidade + "/" + estrutura_evento.estado);

        ui->tabelaMeusEventos->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(estrutura_evento.codigo)));
        ui->tabelaMeusEventos->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(eventoString)));
        ui->tabelaMeusEventos->setItem(i, 2, new QTableWidgetItem("Vendas efetuadas"));
        ui->tabelaMeusEventos->setItem(i, 3, new QTableWidgetItem("Editar"));
        ui->tabelaMeusEventos->setItem(i, 4, new QTableWidgetItem("Excluir"));

        ui->tabelaMeusEventos->item(i, 2)->setFont(font);
        ui->tabelaMeusEventos->item(i, 3)->setFont(font);
        ui->tabelaMeusEventos->item(i, 4)->setFont(font);
        lista_eventos.pop_front();
    }
    ui->tabelaMeusEventos->resizeRowsToContents();
    ui->tabelaMeusEventos->resizeColumnsToContents();

}


void TelaUsuario::on_voltar_meus_eventos_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void TelaUsuario::on_tabelaMeusEventos_cellDoubleClicked(int row, int column)
{
    emit(clicou_tabela_meus_eventos(row, column));
}

void TelaUsuario::on_vendas_efetuadas(string nome_evento, list<Apresentacao> lista_apresentacao) {
    ui->stackedWidget->setCurrentIndex(6);
    ui->tabelaVendasEfetuadas->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabelaVendasEfetuadas->setRowCount(int(lista_apresentacao.size()));
    ui->label_evento_vendas_efetuadas->setText(QString::fromStdString("Evento: " + nome_evento));

    EstruturaApresentacao estrutura_apresentacao;

    string apresentacaoString;
    string disponibilidadeString;
    QFont font;
    font.setBold(true);
    font.setUnderline(true);

    for (int i = 0; i < int(lista_apresentacao.size()); i++) {
        lista_apresentacao.front().getApresentacao(&estrutura_apresentacao);

        apresentacaoString = ("Código: " + estrutura_apresentacao.codigo + "\n" +
                              "Data: " + estrutura_apresentacao.data + "\n" +
                              "Horário: " + estrutura_apresentacao.horario + "\n" +
                              "Sala: " + estrutura_apresentacao.sala);

        disponibilidadeString = (estrutura_apresentacao.disponibilidade + "/250");

        ui->tabelaVendasEfetuadas->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(apresentacaoString)));
        ui->tabelaVendasEfetuadas->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(disponibilidadeString)));
        ui->tabelaVendasEfetuadas->setItem(i, 2, new QTableWidgetItem("Mostrar compradores"));

        ui->tabelaVendasEfetuadas->item(i, 2)->setFont(font);
        lista_apresentacao.pop_front();
    }
    ui->tabelaVendasEfetuadas->resizeRowsToContents();
    ui->tabelaVendasEfetuadas->resizeColumnsToContents();
}

void TelaUsuario::on_editar_evento(EstruturaEvento evento, list<Apresentacao> lista_apresentacao) {
    ui->stackedWidget->setCurrentIndex(8);
    ui->caixa_nome_evento->setText(QString::fromStdString(evento.nome));
    ui->caixa_faixa_evento->setText(QString::fromStdString(evento.faixa));
    ui->caixa_cidade_evento->setText(QString::fromStdString(evento.cidade));
    ui->caixa_classe_evento->setText(QString::fromStdString(evento.classe));
    ui->caixa_estado_evento->setText(QString::fromStdString(evento.estado));
    ui->codigo_evento_editar->setText(QString::fromStdString(evento.codigo));

    // carrega tabela de seleção de apresentações para edição
    ui->tabelaEditApresent->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabelaEditApresent->setRowCount(int(lista_apresentacao.size()));
    ui->tabelaEditApresent->verticalHeader()->setVisible(false);

    EstruturaApresentacao estrutura_apresentacao;
    string apresentacaoString;
    QFont font;
    font.setBold(true);
    font.setUnderline(true);
    for (int i = 0; i < int(lista_apresentacao.size()); i++) {
        lista_apresentacao.front().getApresentacao(&estrutura_apresentacao);

        apresentacaoString = ("Data: " + estrutura_apresentacao.data + "\n" +
                              "Horário: " + estrutura_apresentacao.horario + "\n" +
                              "Sala: " + estrutura_apresentacao.sala + "\n" +
                              "Preço: " + estrutura_apresentacao.preco);

        ui->tabelaEditApresent->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(estrutura_apresentacao.codigo)));
        ui->tabelaEditApresent->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(apresentacaoString)));
        ui->tabelaEditApresent->setItem(i, 2, new QTableWidgetItem("Editar"));
        ui->tabelaEditApresent->setItem(i, 3, new QTableWidgetItem("Excluir"));

        ui->tabelaEditApresent->item(i, 2)->setFont(font);
        ui->tabelaEditApresent->item(i, 3)->setFont(font);
        lista_apresentacao.pop_front();
    }

    ui->tabelaEditApresent->resizeRowsToContents();
    ui->tabelaEditApresent->resizeColumnsToContents();
}

void TelaUsuario::on_status_exclusao_evento(bool status) {
    if (status == true) {
        QMessageBox::information(this, "", "Evento excluído com sucesso!");
    } else {
        QMessageBox::warning(this, "", "Evento não pôde ser excluído!\nHá ingressos vendidos.");
    }
}

void TelaUsuario::on_voltar_vendas_efetuadas_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void TelaUsuario::on_tabelaVendasEfetuadas_cellDoubleClicked(int row, int column)
{
    if (column != 2) return;
    CodigoApresentacao codigo;
    string item = ui->tabelaVendasEfetuadas->item(row, 0)->text().toStdString();
    int pos = int(item.find("Código: ") + 9);
    string codigo_apr = item.substr(size_t(pos), 4);
    codigo.setCodigo(codigo_apr);
    emit(clicou_tabela_vendas_efetuadas(row, column, codigo));
}

void TelaUsuario::on_mostre_compradores(list<CPF> lista, CodigoApresentacao codigo) {
    ui->stackedWidget->setCurrentIndex(7);
    ui->tabelaCompradores->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabelaCompradores->setRowCount(int(lista.size()));
    ui->label_evento_compradores->setText(ui->label_evento_vendas_efetuadas->text());
    ui->label_apresentacao_compradores->setText(QString::fromStdString("Apresentação: " + codigo.getCodigo()));

    string stringCPF;

    for (int i = 0; i < int(lista.size()); i++) {
        stringCPF = lista.front().getCPF();

        ui->tabelaCompradores->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(stringCPF)));

        lista.pop_front();
    }
    ui->tabelaCompradores->resizeRowsToContents();
    ui->tabelaCompradores->resizeColumnsToContents();
}

void TelaUsuario::on_voltar_compradores_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void TelaUsuario::on_criarNovoEvento_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void TelaUsuario::on_cancelar_editar_evento_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void TelaUsuario::on_confirmar_editar_evento_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
    string codigo = ui->codigo_evento_editar->text().toStdString();
    emit(clicou_confirmar_editar_evento(codigo));
}

void TelaUsuario::on_alterar_nome_evento_clicked()
{
    string novo_nome = ui->caixa_nome_evento->text().toStdString();
    string codigo_evento = ui->codigo_evento_editar->text().toStdString();
    emit (clicou_alterar_nome_evento(novo_nome, codigo_evento));
}

void TelaUsuario::on_alterar_classe_evento_clicked()
{
    string nova_classe = ui->caixa_classe_evento->text().toStdString();
    string codigo_evento = ui->codigo_evento_editar->text().toStdString();
    emit (clicou_alterar_classe_evento(nova_classe, codigo_evento));
}

void TelaUsuario::on_alterar_faixa_evento_clicked()
{
    string nova_faixa = ui->caixa_faixa_evento->text().toStdString();
    string codigo_evento = ui->codigo_evento_editar->text().toStdString();
    emit (clicou_alterar_faixa_evento(nova_faixa, codigo_evento));
}

void TelaUsuario::on_alterar_cidade_evento_clicked()
{
    string nova_cidade = ui->caixa_cidade_evento->text().toStdString();
    string codigo_evento = ui->codigo_evento_editar->text().toStdString();
    emit (clicou_alterar_cidade_evento(nova_cidade, codigo_evento));
}

void TelaUsuario::on_alterar_estado_evento_clicked()
{
    string novo_estado = ui->caixa_estado_evento->text().toStdString();
    string codigo_evento = ui->codigo_evento_editar->text().toStdString();
    emit (clicou_alterar_estado_evento(novo_estado, codigo_evento));
}

void TelaUsuario::on_voltar_edit_apresent_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void TelaUsuario::on_tabelaEditApresent_cellDoubleClicked(int row, int column)
{
    string codigo_apresentacao = ui->tabelaEditApresent->item(row, 0)->text().toStdString();
    string dados = ui->tabelaEditApresent->item(row, 1)->text().toStdString();

    int pos_data = int(dados.find("Data: ") + 6);
    int pos_horario = int(dados.find("Horário: ") + 10);
    int pos_preco = int(dados.find("Preço: ") + 8);
    int pos_sala = int(dados.find("Sala: ") + 5);

    string data = dados.substr(size_t(pos_data), 8);
    string horario = dados.substr(size_t(pos_horario), 5);
    string sala;
    string preco;

    qDebug() << "sala " << dados[size_t(pos_sala)] << " preco " << dados[size_t(pos_preco)];

    if (dados[size_t(pos_sala+1) == '0']) {
        sala = dados.substr(size_t(pos_sala), 2);
    } else {
        sala = dados.substr(size_t(pos_sala), 1);
    }

    if (dados[size_t(pos_preco+1)] == ',') {
        preco = dados.substr(size_t(pos_preco), 4);
    } else if (dados[size_t(pos_preco+2)] == ',') {
        preco = dados.substr(size_t(pos_preco), 5);
    } else {
        preco = dados.substr(size_t(pos_preco), 6);
    }

    if (column == 3) {
        // rotina de exclusão
        emit clicou_excluir_apresentacao(codigo_apresentacao);
    } else if (column == 2) {
        // rotina de edição
        ui->stackedWidget->setCurrentIndex(10);
        ui->label_codigo_apresent_edit->setText(ui->tabelaEditApresent->item(row, 0)->text());
        ui->caixa_data_apresent->setText(QString::fromStdString(data));
        ui->caixa_horario_apresent->setText(QString::fromStdString(horario));
        ui->caixa_preco_apresent->setText(QString::fromStdString(preco));
        ui->caixa_sala_apresent->setText(QString::fromStdString(sala));
    }
}

void TelaUsuario::on_voltar_edit_apresent_unica_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void TelaUsuario::on_alterar_data_apresent_clicked()
{
    // alterar data apresentação
    string novaData = ui->caixa_data_apresent->text().toStdString();
    string codigo = ui->label_codigo_apresent_edit->text().toStdString();
    emit clicou_alterar_dataApresentacao(novaData, codigo);
}

void TelaUsuario::on_alterar_horario_apresent_clicked()
{
    // alterar horario apresentação
    string novoHorario = ui->caixa_horario_apresent->text().toStdString();
    string codigo = ui->label_codigo_apresent_edit->text().toStdString();
    emit clicou_alterar_horarioApresentacao(novoHorario, codigo);
}

void TelaUsuario::on_alterar_preco_apresent_clicked()
{
    // alterar preço apresentação
    string novoPreco = ui->caixa_preco_apresent->text().toStdString();
    string codigo = ui->label_codigo_apresent_edit->text().toStdString();
    emit clicou_alterar_precoApresentacao(novoPreco, codigo);
}

void TelaUsuario::on_alterar_sala_apresent_clicked()
{
    // alterar sala apresentação
    string novaSala = ui->caixa_sala_apresent->text().toStdString();
    string codigo = ui->label_codigo_apresent_edit->text().toStdString();
    emit clicou_alterar_salaApresentacao(novaSala, codigo);
}

void TelaUsuario::on_confirmar_edit_apresent_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void TelaUsuario::on_cancelar_criar_evento_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void TelaUsuario::on_cancelar_nova_apresent_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void TelaUsuario::on_concluir_nova_apresent_clicked()
{
    EstruturaApresentacao estrutura_apresentacao;
    estrutura_apresentacao.data = ui->caixa_data_nova_apresent->text().toStdString();
    estrutura_apresentacao.horario = ui->caixa_horario_nova_apresent->text().toStdString();
    estrutura_apresentacao.preco = ui->caixa_preco_nova_apresent->text().toStdString();
    estrutura_apresentacao.sala = ui->caixa_sala_nova_apresent->text().toStdString();
    estrutura_apresentacao.disponibilidade = "250";

    emit clicou_concluir_nova_apresent(estrutura_apresentacao);
}

void TelaUsuario::on_add_edit_apresent_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

void TelaUsuario::on_finalizar_criar_evento_clicked()
{
    EstruturaEvento estrutura;
    estrutura.nome = ui->caixa_nome_novo_evento->text().toStdString();
    estrutura.faixa = ui->caixa_faixa_novo_evento->text().toStdString();
    estrutura.cidade = ui->caixa_cidade_novo_evento->text().toStdString();
    estrutura.estado = ui->caixa_estado_novo_evento->text().toStdString();
    estrutura.classe = ui->caixa_classe_novo_evento->text().toStdString();
    emit(clicou_finalizar_criar_evento(estrutura));
}

void TelaUsuario::on_add_apresent_criar_evento_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

//--------------------------------------


telaEventos::telaEventos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaEventos)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

telaEventos::~telaEventos()
{
    delete ui;
}

void telaEventos::on_PesquisarEventos_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void telaEventos::mostrar_todos_eventos(list<Evento> lista){

    ui->tabelaEventosDisp->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabelaEventosDisp->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tabelaEventosDisp->setRowCount(int(lista.size()));

    EstruturaEvento estrutura_evento;

    string eventoString;
    QFont font;
    font.setBold(true);
    font.setUnderline(true);

    for (int i = 0; i < int(lista.size()); i++) {
        lista.front().getEvento(&estrutura_evento);

        eventoString = ("Nome: " + estrutura_evento.nome + "\n" +
                        "Classe: " + estrutura_evento.classe + "\n" +
                        "Faixa: " + estrutura_evento.faixa + "\n" +
                        "Local: " + estrutura_evento.cidade + "/" + estrutura_evento.estado + "\n" +
                        "Código: " + estrutura_evento.codigo);

        ui->tabelaEventosDisp->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(eventoString)));
        ui->tabelaEventosDisp->setItem(i, 1, new QTableWidgetItem("Ver Apresentações"));

        ui->tabelaEventosDisp->item(i, 1)->setFont(font);

        lista.pop_front();
    }
    ui->tabelaEventosDisp->resizeRowsToContents();
    ui->tabelaEventosDisp->resizeColumnsToContents();
}

void telaEventos::on_voltarPesquisaEventos_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void telaEventos::on_irPesquisarEventos_clicked()
{
    pesquisar_por_evento(ui->caixaPesquisa->text().toStdString());
}

void telaEventos::on_notificar_situacao(int situacao){
    switch (situacao) {
    case 0: ui->statusPesquisarEventos->append("Dados inválidos!"); break;
    case 1: QMessageBox::critical(this, "","Faça login antes de executar esta ação!"); break;
    }
}

void telaEventos::mostrar_eventos(list<Evento> lista){

    ui->tabelaEventosDisp->setRowCount(0);
    ui->stackedWidget->setCurrentIndex(0);

    if (lista.empty()) {
        QMessageBox::warning(this, "","Nenhum evento foi encontrado!");
        return;
    }

    ui->tabelaEventosDisp->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabelaEventosDisp->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tabelaEventosDisp->setRowCount(int(lista.size()));

    EstruturaEvento estrutura_evento;

    string eventoString;
    QFont font;
    font.setBold(true);
    font.setUnderline(true);

    for (int i = 0; i < int(lista.size()); i++) {
        lista.front().getEvento(&estrutura_evento);

        eventoString = ("Nome: " + estrutura_evento.nome + "\n" +
                        "Classe: " + estrutura_evento.classe + "\n" +
                        "Faixa: " + estrutura_evento.faixa + "\n" +
                        "Local: " + estrutura_evento.cidade + "/" + estrutura_evento.estado + "\n" +
                        "Código: " + estrutura_evento.codigo);

        ui->tabelaEventosDisp->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(eventoString)));
        ui->tabelaEventosDisp->setItem(i, 1, new QTableWidgetItem("Ver Apresentações"));

        ui->tabelaEventosDisp->item(i, 1)->setFont(font);
        lista.pop_front();
    }
    ui->tabelaEventosDisp->resizeRowsToContents();
    ui->tabelaEventosDisp->resizeColumnsToContents();
}

void telaEventos::on_tabelaEventosDisp_cellDoubleClicked(int row, int column)
{
    if (column != 1) return;
    CodigoEvento codigo;
    string item = ui->tabelaEventosDisp->item(row, 0)->text().toStdString();
    int pos = int(item.find("Código: ") + 9);
    string codigo_eve = item.substr(size_t(pos), 3);
    codigo.setCodigo(codigo_eve);
    ui->numEventos->setText(QString::fromStdString(to_string(row)));
    ui->codigoEvento->setText(QString::fromStdString(codigo_eve));
    ui->numEventos->setVisible(false);
    ui->codigoEvento->setVisible(false);
    emit(clicou_tabela_eventos_pesquisados(codigo));
}

void telaEventos::mostre_apresentacoes(list<Apresentacao> lista) {

    ui->stackedWidget->setCurrentIndex(2);
    ui->tabelaApresentacoes->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabelaApresentacoes->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tabelaApresentacoes->setRowCount(int(lista.size()));

    int row_evento_escolhida = stoi(ui->numEventos->text().toStdString());

    string item = ui->tabelaEventosDisp->item(row_evento_escolhida, 0)->text().toStdString();
    int pos = int(item.find("Nome: ") + 6);
    string nome_eve = item.substr(size_t(pos), 20);
    ui->campoEvento->setText(QString::fromStdString("Evento: " + nome_eve));

    pos = int(item.find("Local: ") + 7);
    string local_eve = item.substr(size_t(pos), 18);
    ui->campoLocal->setText(QString::fromStdString("Local: " + local_eve));

    pos = int(item.find("Classe: ") + 8);
    string classe_eve = item.substr(size_t(pos), 1);
    ui->campoClasse->setText(QString::fromStdString("Classe: " + classe_eve));

    pos = int(item.find("Faixa: ") + 8);
    string faixa_eve = item.substr(size_t(pos), 2);
    ui->campoFaixa->setText(QString::fromStdString("Faixa " + faixa_eve));

    EstruturaApresentacao estrutura_apresentacao;

    string apresentacaoString;
    string disponibilidadeString;
    QFont font;
    font.setBold(true);

    if (lista.empty()) {
        qDebug() << "Algo esta errado";
    }

    for (int i = 0; i < int(lista.size()); i++) {
        lista.front().getApresentacao(&estrutura_apresentacao);

        apresentacaoString = ("Código: " + estrutura_apresentacao.codigo + "\n" +
                              "Data: " + estrutura_apresentacao.data + "\n" +
                              "Horário: " + estrutura_apresentacao.horario + "\n" +
                              "Sala: " + estrutura_apresentacao.sala + "\n" +
                              "Preço: " + estrutura_apresentacao.preco);

        disponibilidadeString = (estrutura_apresentacao.disponibilidade + "/250");

        ui->tabelaApresentacoes->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(apresentacaoString)));
        ui->tabelaApresentacoes->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(disponibilidadeString)));

        if (stoi(estrutura_apresentacao.disponibilidade) == 0) {
            font.setItalic(true);
            ui->tabelaApresentacoes->setItem(i, 2, new QTableWidgetItem("Esgotado"));
        } else {
            font.setUnderline(true);
            ui->tabelaApresentacoes->setItem(i, 2, new QTableWidgetItem("Comprar"));
        }

        ui->tabelaApresentacoes->item(i, 2)->setFont(font);

        lista.pop_front();
    }
    ui->tabelaApresentacoes->resizeRowsToContents();
    ui->tabelaApresentacoes->resizeColumnsToContents();
}

void telaEventos::on_voltarEventoApresentacoes_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void telaEventos::on_tabelaApresentacoes_cellDoubleClicked(int row, int column)
{
    if (column != 2) return;
    if (ui->tabelaApresentacoes->item(row, column)->text() == "Comprar") {

        CodigoEvento codigoEvento;
        string codigo_eve = ui->codigoEvento->text().toStdString();
        codigoEvento.setCodigo(codigo_eve);

        CodigoApresentacao codigoApresentacao;
        string item = ui->tabelaApresentacoes->item(row, 0)->text().toStdString();
        int pos = int(item.find("Código: ") + 9);
        string codigo_apr = item.substr(size_t(pos), 4);
        codigoApresentacao.setCodigo(codigo_apr);

        emit comprar(codigoEvento, codigoApresentacao);
    } else {
        QMessageBox::critical(this, "","Os ingressos para esta apresentação estão esgotados!");
    }
}

//----------------------------------------------

telaVendas::telaVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaVendas)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

telaVendas::~telaVendas()
{
    delete ui;
}

void telaVendas::atualizar_dados(CartaoCredito cartao, Evento evento, Apresentacao apresentacao) {
    Estrutura_Cartao_Credito estrutura_cartao;
    Estrutura_Evento estrutura_evento;
    Estrutura_Apresentacao estrutura_apresentacao;

    cartao.getCartaoCredito(&estrutura_cartao);
    evento.getEvento(&estrutura_evento);
    apresentacao.getApresentacao(&estrutura_apresentacao);

    ui->labelEvento->setText("Evento: " + QString::fromStdString(estrutura_evento.nome));
    ui->labelFaixaEvento->setText("Faixa: " + QString::fromStdString(estrutura_evento.faixa));
    ui->labelClasseEvento->setText("Classe: " + QString::fromStdString(estrutura_evento.classe));
    ui->labelLocalEvento->setText("Local: " + QString::fromStdString(estrutura_evento.cidade + "/" + estrutura_evento.estado));

    ui->labelApresentacao->setText("Apresentacao: " + QString::fromStdString(estrutura_apresentacao.codigo));
    ui->labelData->setText("Data: " + QString::fromStdString(estrutura_apresentacao.data));
    ui->labelSala->setText("Sala: " + QString::fromStdString(estrutura_apresentacao.sala));
    ui->labelPreco->setText("Preço: " + QString::fromStdString(estrutura_apresentacao.preco));
    ui->labelHorario->setText("Horário: " + QString::fromStdString(estrutura_apresentacao.horario));

    ui->codigoApresentacao->setText(QString::fromStdString(estrutura_apresentacao.codigo));
    ui->codigoEvento->setText(QString::fromStdString(estrutura_evento.codigo));
    ui->codigoApresentacao->setVisible(false);
    ui->codigoEvento->setVisible(false);

    ui->labelCartao->setText("Cartao a ser utilizado: " + QString::fromStdString(estrutura_cartao.numero));
}

void telaVendas::on_confirmarCompra_clicked()
{
    CodigoEvento codigoEvento;
    CodigoApresentacao codigoApresentacao;
    ui->stackedWidget->setCurrentIndex(1);
    string codigoEvento_string = ui->codigoEvento->text().toStdString();
    string codigoApresentacao_string = ui->codigoApresentacao->text().toStdString();
    codigoEvento.setCodigo(codigoEvento_string);
    codigoApresentacao.setCodigo(codigoApresentacao_string);
    emit clicouConfirmarCompra(codigoEvento, codigoApresentacao);
}

void telaVendas::on_concluirIngressos_clicked()
{
    close();
}

void telaVendas::mostrar_lista_ingressos(list<Ingresso> lista) {
    ui->tabelaIngressos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabelaIngressos->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tabelaIngressos->setRowCount(int(lista.size()));

    EstruturaIngresso estrutura_ingresso;

    string ingressoString;

    for (int i = 0; i < int(lista.size()); i++) {
        lista.front().getIngresso(&estrutura_ingresso);

        ingressoString = ("Código: " + estrutura_ingresso.codigo);

        ui->tabelaIngressos->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(ingressoString)));

        lista.pop_front();
    }
    ui->tabelaIngressos->resizeRowsToContents();
    ui->tabelaIngressos->resizeColumnsToContents();
}
