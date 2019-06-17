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
    void on_voltar_compras_clicked();
    void on_voltar_meus_eventos_clicked();
    void on_tabelaMeusEventos_cellDoubleClicked(int row, int column);
    void on_voltar_vendas_efetuadas_clicked();
    void on_tabelaVendasEfetuadas_cellDoubleClicked(int row, int column);
    void on_voltar_compradores_clicked();
    void on_criarNovoEvento_clicked();
    void on_cancelar_editar_evento_clicked();
    void on_confirmar_editar_evento_clicked();
    void on_alterar_nome_evento_clicked();
    void on_alterar_classe_evento_clicked();
    void on_alterar_faixa_evento_clicked();
    void on_alterar_cidade_evento_clicked();
    void on_alterar_estado_evento_clicked();
    void on_voltar_edit_apresent_clicked();
    void on_tabelaEditApresent_cellDoubleClicked(int row, int column);
    void on_voltar_edit_apresent_unica_clicked();
    void on_alterar_data_apresent_clicked();
    void on_alterar_horario_apresent_clicked();
    void on_alterar_preco_apresent_clicked();
    void on_alterar_sala_apresent_clicked();

    void on_confirmar_edit_apresent_clicked();

    void on_pushButton_3_clicked();

    void on_cancelar_criar_evento_clicked();

    void on_cancelar_nova_apresent_clicked();

    void on_concluir_nova_apresent_clicked();

    void on_add_edit_apresent_clicked();

    void on_finalizar_criar_evento_clicked();

    void on_add_apresent_criar_evento_clicked();

private:
    Ui::TelaUsuario *ui;

public slots:
    void on_notificar_situacao(int);
    void on_mostre_dados_conta(EstruturaUsuario, EstruturaCartaoCredito);
    void on_mostre_ingressos(list<Ingresso>, list<Apresentacao>, list<Evento>);
    void on_mostre_meus_eventos(list<Evento>);
    void on_vendas_efetuadas(string, list<Apresentacao>);
    void on_editar_evento(EstruturaEvento, list<Apresentacao>);
    void on_status_exclusao_evento(bool);
    void on_mostre_compradores(list<CPF>, CodigoApresentacao);

signals:
    void clicou_ir_cadastrar(EstruturaUsuario, EstruturaCartaoCredito);
    void clicou_excluir_usuario(int);
    void excluiu_usuario();
    void clicou_confirmar_excluir();
    void clicou_dados_conta(int);
    void clicou_minhas_compras(int);
    void clicou_meus_eventos(int);
    void clicou_alterar_cpf(string);
    void clicou_alterar_senha(string);
    void clicou_alterar_cartao(string);
    void clicou_alterar_codigoCartao(string);
    void clicou_alterar_dataCartao(string);
    void clicou_tabela_meus_eventos(int, int);
    void clicou_tabela_vendas_efetuadas(int, int, CodigoApresentacao);
    void clicou_alterar_nome_evento(string, string);
    void clicou_alterar_classe_evento(string, string);
    void clicou_alterar_faixa_evento(string, string);
    void clicou_alterar_cidade_evento(string, string);
    void clicou_alterar_estado_evento(string, string);
    void clicou_confirmar_editar_evento(string);
    void clicou_excluir_apresentacao(string);
    void clicou_alterar_dataApresentacao(string, string);
    void clicou_alterar_horarioApresentacao(string, string);
    void clicou_alterar_precoApresentacao(string, string);
    void clicou_alterar_salaApresentacao(string, string);
    void clicou_concluir_nova_apresent(EstruturaApresentacao);
    void clicou_finalizar_criar_evento(EstruturaEvento);
};

#endif // MAINWINDOW_H
