#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "controladoras.h"
#include <QMainWindow>
#include <QDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

signals:
    void clicou_autenticar();
    void clicou_conta();
    void clicou_eventos();
    void clicou_deslogar();

private slots:
    void on_conta_clicked();
    void on_autenticar_clicked();
    void on_eventos_clicked();

public slots:
    void on_status_alterado(bool);
};

// -----------------------------------


namespace Ui {
class Autenticacao;
}

class Autenticacao : public QDialog
{
    Q_OBJECT

public:
    explicit Autenticacao(QWidget *parent = nullptr);
    ~Autenticacao();

signals:
    void clicou_logar(QString, QString);

private slots:
    void on_logar_clicked();

public slots:
    void on_notificar_situacao(int);

private:
    Ui::Autenticacao *ui;
};

//--------------------------

namespace Ui {
class TelaUsuario;
}

class TelaUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit TelaUsuario(QWidget *parent = nullptr);
    ~TelaUsuario();

private slots:
    void on_Cadastrar_clicked();

    void on_voltar_cadastrar_clicked();

    void on_ir_cadastrar_clicked();

    void on_Excluir_clicked();
    void on_Excluir_clicked_logado(string, string);
    void on_Dados_clicked();

    void on_Compras_clicked();

    void on_Eventos_clicked();

    void on_cancelar_exclusao_clicked();

    void on_confirmar_exclusao_clicked();

    void on_alterar_cpf_clicked();

    void on_alterar_senha_clicked();

    void on_alterar_cartao_clicked();

    void on_alterar_codigo_clicked();

    void on_alterar_data_clicked();

    void on_voltar_conta_clicked();

private:
    Ui::TelaUsuario *ui;

public slots:
    void on_notificar_situacao(int);
    void on_mostre_dados_conta(EstruturaUsuario, EstruturaCartaoCredito);

signals:
    void clicou_ir_cadastrar(EstruturaUsuario, EstruturaCartaoCredito);
    void clicou_excluir_usuario(int);
    void clicou_confirmar_excluir();
    void clicou_dados_conta(int);
    void clicou_minhas_compras(int);
    void clicou_meus_eventos(int);
    void clicou_alterar_cpf(string);
    void clicou_alterar_senha(string);
    void clicou_alterar_cartao(string);
    void clicou_alterar_codigoCartao(string);
    void clicou_alterar_dataCartao(string);
};

#endif // MAINWINDOW_H
