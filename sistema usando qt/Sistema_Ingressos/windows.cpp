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
