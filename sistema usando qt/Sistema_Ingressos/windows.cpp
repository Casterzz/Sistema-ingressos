#include "windows.h"
#include "ui_autenticacao.h"
#include "ui_mainwindow.h"
#include "ui_telausuario.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_autenticar_clicked()
{
    if (ui->autenticar->text().toStdString() == "Logar") {
         ui->status->setText("Autenticando...");
        emit clicou_autenticar();
    } else {
        ui->autenticar->setText("Logar");
        ui->status->setText("Status: Não Logado!");
        emit clicou_deslogar();
    }
}

void MainWindow::on_conta_clicked()
{
    ui->status->setText("Ver conta");
    emit clicou_conta();
}

void MainWindow::on_eventos_clicked()
{
    ui->status->setText("Ver eventos");
    emit clicou_eventos();
}

void MainWindow::on_status_alterado(bool logado)
{
    if (logado) {
        ui->status->setText("Status: Logado!");
        ui->autenticar->setText("Deslogar");
    } else {
        ui->status->setText("Status: Não Logado!");
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
    //ui->status->append("logando...");
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
    //ui->stackedWidget->setCurrentIndex(4);
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
    //emit (clicou_confirmar_excluir());
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
    qDebug() << "entrou mostre compras";

    //ui->tabelaCompras->verticalHeader()->setVisible(false);
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
    ui->label_evento_vendas_efetuadas->setText(QString::fromStdString("EVENTO: " + nome_evento));

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

void TelaUsuario::on_editar_evento(Evento evento, list<Apresentacao> lista_apresentacao) {

}

void TelaUsuario::on_status_exclusao_evento(bool status) {

}

void TelaUsuario::on_voltar_vendas_efetuadas_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void TelaUsuario::on_tabelaVendasEfetuadas_cellDoubleClicked(int row, int column)
{
    CodigoApresentacao codigo;
    string item = ui->tabelaVendasEfetuadas->item(row, 0)->text().toStdString();
    int pos = int(item.find("Código: ") + 9);
    string codigo_apr = item.substr(size_t(pos), 4);
    qDebug() << QString::fromStdString(codigo_apr);
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
