/********************************************************************************
** Form generated from reading UI file 'telausuario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAUSUARIO_H
#define UI_TELAUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaUsuario
{
public:
    QStackedWidget *stackedWidget;
    QWidget *usuario;
    QLabel *label;
    QTextBrowser *infobox_usuario;
    QPushButton *Voltar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Cadastrar;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Excluir;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Dados;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Compras;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *Eventos;
    QSpacerItem *horizontalSpacer_8;
    QWidget *cadastrar;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *campoCPF_cadastrar;
    QLabel *label_4;
    QLineEdit *campoSenha_cadastrar;
    QLabel *label_5;
    QLineEdit *campoCartao_cadastrar;
    QLabel *label_6;
    QLineEdit *campoCodigo_cadastrar;
    QLabel *label_7;
    QLineEdit *campoData_cadastrar;
    QSpacerItem *verticalSpacer_7;
    QTextBrowser *infobox;
    QSpacerItem *verticalSpacer_6;
    QPushButton *ir_cadastrar;
    QPushButton *voltar_cadastrar;
    QWidget *exclusao;
    QLabel *label_14;
    QLabel *label_9;
    QLabel *label_8;
    QPushButton *confirmar_exclusao;
    QPushButton *cancelar_exclusao;
    QTextBrowser *infobox_excluir;
    QFrame *frame;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *campoCPF_exclusao;
    QLabel *campoCartao_exclusao;
    QLabel *label_11;
    QLabel *label_10;
    QWidget *dados;
    QLabel *label_12;
    QPushButton *voltar_conta;
    QTextBrowser *caixa_conta;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *alterar_cpf;
    QPushButton *alterar_senha;
    QPushButton *alterar_cartao;
    QPushButton *alterar_codigo;
    QPushButton *alterar_data;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *campo_cpf_conta;
    QLineEdit *campo_senha_conta;
    QLineEdit *campo_cartao_conta;
    QLineEdit *campo_codigo_conta;
    QLineEdit *campo_data_conta;
    QWidget *compras;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_13;
    QTableWidget *tabelaCompras;
    QPushButton *voltar_compras;
    QWidget *eventos;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_15;
    QTableWidget *tabelaMeusEventos;
    QPushButton *criarNovoEvento;
    QPushButton *voltar_meus_eventos;
    QWidget *vendas_efetuadas;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_16;
    QLabel *label_evento_vendas_efetuadas;
    QTableWidget *tabelaVendasEfetuadas;
    QPushButton *voltar_vendas_efetuadas;
    QWidget *compradores;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_17;
    QLabel *label_evento_compradores;
    QLabel *label_apresentacao_compradores;
    QTableWidget *tabelaCompradores;
    QPushButton *voltar_compradores;
    QWidget *editarEvento;
    QLabel *label_21;
    QPushButton *confirmar_editar_evento;
    QPushButton *cancelar_editar_evento;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *caixa_nome_evento;
    QLineEdit *caixa_classe_evento;
    QLineEdit *caixa_faixa_evento;
    QLineEdit *caixa_cidade_evento;
    QLineEdit *caixa_estado_evento;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_11;
    QPushButton *alterar_nome_evento;
    QPushButton *alterar_classe_evento;
    QPushButton *alterar_faixa_evento;
    QPushButton *alterar_cidade_evento;
    QPushButton *alterar_estado_evento;
    QTextBrowser *status_editar_evento;
    QLabel *label_18;
    QLabel *codigo_evento_editar;
    QWidget *apresentacoesEvento;
    QLabel *label_19;
    QTableWidget *tabelaEditApresent;
    QPushButton *add_edit_apresent;
    QPushButton *voltar_edit_apresent;
    QPushButton *confirmar_edit_apresent;
    QWidget *editarApresentacao;
    QLabel *label_20;
    QPushButton *voltar_edit_apresent_unica;
    QTextBrowser *status_edit_apresent;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *caixa_data_apresent;
    QLineEdit *caixa_horario_apresent;
    QLineEdit *caixa_preco_apresent;
    QLineEdit *caixa_sala_apresent;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_13;
    QPushButton *alterar_data_apresent;
    QPushButton *alterar_horario_apresent;
    QPushButton *alterar_preco_apresent;
    QPushButton *alterar_sala_apresent;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_22;
    QLabel *label_codigo_apresent_edit;
    QWidget *criarEvento;
    QLabel *label_23;
    QPushButton *add_apresent_criar_evento;
    QPushButton *finalizar_criar_evento;
    QPushButton *cancelar_criar_evento;
    QTextBrowser *status_criar_evento;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *caixa_nome_novo_evento;
    QLineEdit *caixa_classe_novo_evento;
    QLineEdit *caixa_faixa_novo_evento;
    QLineEdit *caixa_estado_novo_evento;
    QLineEdit *caixa_cidade_novo_evento;
    QWidget *addApresentacao;
    QLabel *label_29;
    QPushButton *concluir_nova_apresent;
    QPushButton *cancelar_nova_apresent;
    QTextBrowser *status_nova_apresent;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *caixa_data_nova_apresent;
    QLineEdit *caixa_horario_nova_apresent;
    QLineEdit *caixa_preco_nova_apresent;
    QLineEdit *caixa_sala_nova_apresent;

    void setupUi(QDialog *TelaUsuario)
    {
        if (TelaUsuario->objectName().isEmpty())
            TelaUsuario->setObjectName(QString::fromUtf8("TelaUsuario"));
        TelaUsuario->resize(600, 450);
        stackedWidget = new QStackedWidget(TelaUsuario);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 582, 431));
        usuario = new QWidget();
        usuario->setObjectName(QString::fromUtf8("usuario"));
        label = new QLabel(usuario);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 0, 61, 20));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        infobox_usuario = new QTextBrowser(usuario);
        infobox_usuario->setObjectName(QString::fromUtf8("infobox_usuario"));
        infobox_usuario->setGeometry(QRect(10, 320, 564, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(infobox_usuario->sizePolicy().hasHeightForWidth());
        infobox_usuario->setSizePolicy(sizePolicy1);
        Voltar = new QPushButton(usuario);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(210, 380, 161, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Voltar->sizePolicy().hasHeightForWidth());
        Voltar->setSizePolicy(sizePolicy2);
        Voltar->setBaseSize(QSize(500, 0));
        layoutWidget = new QWidget(usuario);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 561, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Cadastrar = new QPushButton(layoutWidget);
        Cadastrar->setObjectName(QString::fromUtf8("Cadastrar"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Cadastrar->sizePolicy().hasHeightForWidth());
        Cadastrar->setSizePolicy(sizePolicy3);
        Cadastrar->setBaseSize(QSize(500, 0));

        horizontalLayout->addWidget(Cadastrar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        Excluir = new QPushButton(layoutWidget);
        Excluir->setObjectName(QString::fromUtf8("Excluir"));
        sizePolicy3.setHeightForWidth(Excluir->sizePolicy().hasHeightForWidth());
        Excluir->setSizePolicy(sizePolicy3);
        Excluir->setBaseSize(QSize(500, 0));

        horizontalLayout_2->addWidget(Excluir);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        Dados = new QPushButton(layoutWidget);
        Dados->setObjectName(QString::fromUtf8("Dados"));
        sizePolicy3.setHeightForWidth(Dados->sizePolicy().hasHeightForWidth());
        Dados->setSizePolicy(sizePolicy3);
        Dados->setBaseSize(QSize(500, 0));

        horizontalLayout_3->addWidget(Dados);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        Compras = new QPushButton(layoutWidget);
        Compras->setObjectName(QString::fromUtf8("Compras"));
        sizePolicy3.setHeightForWidth(Compras->sizePolicy().hasHeightForWidth());
        Compras->setSizePolicy(sizePolicy3);
        Compras->setBaseSize(QSize(500, 0));

        horizontalLayout_4->addWidget(Compras);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        Eventos = new QPushButton(layoutWidget);
        Eventos->setObjectName(QString::fromUtf8("Eventos"));
        sizePolicy3.setHeightForWidth(Eventos->sizePolicy().hasHeightForWidth());
        Eventos->setSizePolicy(sizePolicy3);
        Eventos->setBaseSize(QSize(500, 0));

        horizontalLayout_5->addWidget(Eventos);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(usuario);
        cadastrar = new QWidget();
        cadastrar->setObjectName(QString::fromUtf8("cadastrar"));
        verticalLayout_3 = new QVBoxLayout(cadastrar);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(cadastrar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_2, 0, Qt::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(cadastrar);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        campoCPF_cadastrar = new QLineEdit(cadastrar);
        campoCPF_cadastrar->setObjectName(QString::fromUtf8("campoCPF_cadastrar"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, campoCPF_cadastrar);

        label_4 = new QLabel(cadastrar);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        campoSenha_cadastrar = new QLineEdit(cadastrar);
        campoSenha_cadastrar->setObjectName(QString::fromUtf8("campoSenha_cadastrar"));
        campoSenha_cadastrar->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, campoSenha_cadastrar);

        label_5 = new QLabel(cadastrar);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        campoCartao_cadastrar = new QLineEdit(cadastrar);
        campoCartao_cadastrar->setObjectName(QString::fromUtf8("campoCartao_cadastrar"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, campoCartao_cadastrar);

        label_6 = new QLabel(cadastrar);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_6);

        campoCodigo_cadastrar = new QLineEdit(cadastrar);
        campoCodigo_cadastrar->setObjectName(QString::fromUtf8("campoCodigo_cadastrar"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, campoCodigo_cadastrar);

        label_7 = new QLabel(cadastrar);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_7);

        campoData_cadastrar = new QLineEdit(cadastrar);
        campoData_cadastrar->setObjectName(QString::fromUtf8("campoData_cadastrar"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, campoData_cadastrar);


        verticalLayout_3->addLayout(formLayout_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_7);

        infobox = new QTextBrowser(cadastrar);
        infobox->setObjectName(QString::fromUtf8("infobox"));
        sizePolicy.setHeightForWidth(infobox->sizePolicy().hasHeightForWidth());
        infobox->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(infobox);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_6);

        ir_cadastrar = new QPushButton(cadastrar);
        ir_cadastrar->setObjectName(QString::fromUtf8("ir_cadastrar"));
        sizePolicy2.setHeightForWidth(ir_cadastrar->sizePolicy().hasHeightForWidth());
        ir_cadastrar->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(ir_cadastrar);

        voltar_cadastrar = new QPushButton(cadastrar);
        voltar_cadastrar->setObjectName(QString::fromUtf8("voltar_cadastrar"));
        sizePolicy2.setHeightForWidth(voltar_cadastrar->sizePolicy().hasHeightForWidth());
        voltar_cadastrar->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(voltar_cadastrar);

        stackedWidget->addWidget(cadastrar);
        exclusao = new QWidget();
        exclusao->setObjectName(QString::fromUtf8("exclusao"));
        label_14 = new QLabel(exclusao);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(229, 9, 341, 20));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_9 = new QLabel(exclusao);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 70, 149, 17));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_8 = new QLabel(exclusao);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(9, 344, 231, 17));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        confirmar_exclusao = new QPushButton(exclusao);
        confirmar_exclusao->setObjectName(QString::fromUtf8("confirmar_exclusao"));
        confirmar_exclusao->setGeometry(QRect(9, 367, 80, 25));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(confirmar_exclusao->sizePolicy().hasHeightForWidth());
        confirmar_exclusao->setSizePolicy(sizePolicy4);
        cancelar_exclusao = new QPushButton(exclusao);
        cancelar_exclusao->setObjectName(QString::fromUtf8("cancelar_exclusao"));
        cancelar_exclusao->setGeometry(QRect(9, 398, 80, 25));
        sizePolicy4.setHeightForWidth(cancelar_exclusao->sizePolicy().hasHeightForWidth());
        cancelar_exclusao->setSizePolicy(sizePolicy4);
        infobox_excluir = new QTextBrowser(exclusao);
        infobox_excluir->setObjectName(QString::fromUtf8("infobox_excluir"));
        infobox_excluir->setGeometry(QRect(9, 197, 564, 95));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(infobox_excluir->sizePolicy().hasHeightForWidth());
        infobox_excluir->setSizePolicy(sizePolicy5);
        frame = new QFrame(exclusao);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 90, 401, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(161, 10, 231, 42));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        campoCPF_exclusao = new QLabel(layoutWidget1);
        campoCPF_exclusao->setObjectName(QString::fromUtf8("campoCPF_exclusao"));

        gridLayout->addWidget(campoCPF_exclusao, 0, 0, 1, 1);

        campoCartao_exclusao = new QLabel(layoutWidget1);
        campoCartao_exclusao->setObjectName(QString::fromUtf8("campoCartao_exclusao"));

        gridLayout->addWidget(campoCartao_exclusao, 1, 0, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 33, 125, 17));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 10, 30, 17));
        stackedWidget->addWidget(exclusao);
        frame->raise();
        label_14->raise();
        label_9->raise();
        label_8->raise();
        confirmar_exclusao->raise();
        cancelar_exclusao->raise();
        infobox_excluir->raise();
        dados = new QWidget();
        dados->setObjectName(QString::fromUtf8("dados"));
        label_12 = new QLabel(dados);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(239, 9, 331, 20));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        voltar_conta = new QPushButton(dados);
        voltar_conta->setObjectName(QString::fromUtf8("voltar_conta"));
        voltar_conta->setGeometry(QRect(9, 398, 89, 25));
        caixa_conta = new QTextBrowser(dados);
        caixa_conta->setObjectName(QString::fromUtf8("caixa_conta"));
        caixa_conta->setGeometry(QRect(10, 280, 551, 71));
        layoutWidget2 = new QWidget(dados);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(350, 70, 211, 151));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        alterar_cpf = new QPushButton(layoutWidget2);
        alterar_cpf->setObjectName(QString::fromUtf8("alterar_cpf"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(alterar_cpf->sizePolicy().hasHeightForWidth());
        alterar_cpf->setSizePolicy(sizePolicy6);

        verticalLayout_5->addWidget(alterar_cpf);

        alterar_senha = new QPushButton(layoutWidget2);
        alterar_senha->setObjectName(QString::fromUtf8("alterar_senha"));
        sizePolicy6.setHeightForWidth(alterar_senha->sizePolicy().hasHeightForWidth());
        alterar_senha->setSizePolicy(sizePolicy6);

        verticalLayout_5->addWidget(alterar_senha);

        alterar_cartao = new QPushButton(layoutWidget2);
        alterar_cartao->setObjectName(QString::fromUtf8("alterar_cartao"));
        sizePolicy6.setHeightForWidth(alterar_cartao->sizePolicy().hasHeightForWidth());
        alterar_cartao->setSizePolicy(sizePolicy6);

        verticalLayout_5->addWidget(alterar_cartao);

        alterar_codigo = new QPushButton(layoutWidget2);
        alterar_codigo->setObjectName(QString::fromUtf8("alterar_codigo"));
        sizePolicy6.setHeightForWidth(alterar_codigo->sizePolicy().hasHeightForWidth());
        alterar_codigo->setSizePolicy(sizePolicy6);

        verticalLayout_5->addWidget(alterar_codigo);

        alterar_data = new QPushButton(layoutWidget2);
        alterar_data->setObjectName(QString::fromUtf8("alterar_data"));
        sizePolicy6.setHeightForWidth(alterar_data->sizePolicy().hasHeightForWidth());
        alterar_data->setSizePolicy(sizePolicy6);

        verticalLayout_5->addWidget(alterar_data);

        layoutWidget3 = new QWidget(dados);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 70, 331, 151));
        verticalLayout_6 = new QVBoxLayout(layoutWidget3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        campo_cpf_conta = new QLineEdit(layoutWidget3);
        campo_cpf_conta->setObjectName(QString::fromUtf8("campo_cpf_conta"));
        sizePolicy6.setHeightForWidth(campo_cpf_conta->sizePolicy().hasHeightForWidth());
        campo_cpf_conta->setSizePolicy(sizePolicy6);

        verticalLayout_6->addWidget(campo_cpf_conta);

        campo_senha_conta = new QLineEdit(layoutWidget3);
        campo_senha_conta->setObjectName(QString::fromUtf8("campo_senha_conta"));
        sizePolicy6.setHeightForWidth(campo_senha_conta->sizePolicy().hasHeightForWidth());
        campo_senha_conta->setSizePolicy(sizePolicy6);

        verticalLayout_6->addWidget(campo_senha_conta);

        campo_cartao_conta = new QLineEdit(layoutWidget3);
        campo_cartao_conta->setObjectName(QString::fromUtf8("campo_cartao_conta"));
        sizePolicy6.setHeightForWidth(campo_cartao_conta->sizePolicy().hasHeightForWidth());
        campo_cartao_conta->setSizePolicy(sizePolicy6);

        verticalLayout_6->addWidget(campo_cartao_conta);

        campo_codigo_conta = new QLineEdit(layoutWidget3);
        campo_codigo_conta->setObjectName(QString::fromUtf8("campo_codigo_conta"));
        sizePolicy6.setHeightForWidth(campo_codigo_conta->sizePolicy().hasHeightForWidth());
        campo_codigo_conta->setSizePolicy(sizePolicy6);

        verticalLayout_6->addWidget(campo_codigo_conta);

        campo_data_conta = new QLineEdit(layoutWidget3);
        campo_data_conta->setObjectName(QString::fromUtf8("campo_data_conta"));
        sizePolicy6.setHeightForWidth(campo_data_conta->sizePolicy().hasHeightForWidth());
        campo_data_conta->setSizePolicy(sizePolicy6);

        verticalLayout_6->addWidget(campo_data_conta);

        stackedWidget->addWidget(dados);
        compras = new QWidget();
        compras->setObjectName(QString::fromUtf8("compras"));
        verticalLayout_4 = new QVBoxLayout(compras);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_13 = new QLabel(compras);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13, 0, Qt::AlignHCenter);

        tabelaCompras = new QTableWidget(compras);
        if (tabelaCompras->columnCount() < 3)
            tabelaCompras->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabelaCompras->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabelaCompras->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabelaCompras->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabelaCompras->setObjectName(QString::fromUtf8("tabelaCompras"));

        verticalLayout_4->addWidget(tabelaCompras);

        voltar_compras = new QPushButton(compras);
        voltar_compras->setObjectName(QString::fromUtf8("voltar_compras"));
        sizePolicy2.setHeightForWidth(voltar_compras->sizePolicy().hasHeightForWidth());
        voltar_compras->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(voltar_compras);

        stackedWidget->addWidget(compras);
        eventos = new QWidget();
        eventos->setObjectName(QString::fromUtf8("eventos"));
        verticalLayout_7 = new QVBoxLayout(eventos);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_15 = new QLabel(eventos);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_7->addWidget(label_15, 0, Qt::AlignHCenter);

        tabelaMeusEventos = new QTableWidget(eventos);
        if (tabelaMeusEventos->columnCount() < 5)
            tabelaMeusEventos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabelaMeusEventos->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabelaMeusEventos->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabelaMeusEventos->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabelaMeusEventos->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabelaMeusEventos->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        tabelaMeusEventos->setObjectName(QString::fromUtf8("tabelaMeusEventos"));

        verticalLayout_7->addWidget(tabelaMeusEventos);

        criarNovoEvento = new QPushButton(eventos);
        criarNovoEvento->setObjectName(QString::fromUtf8("criarNovoEvento"));
        sizePolicy2.setHeightForWidth(criarNovoEvento->sizePolicy().hasHeightForWidth());
        criarNovoEvento->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(criarNovoEvento);

        voltar_meus_eventos = new QPushButton(eventos);
        voltar_meus_eventos->setObjectName(QString::fromUtf8("voltar_meus_eventos"));
        sizePolicy2.setHeightForWidth(voltar_meus_eventos->sizePolicy().hasHeightForWidth());
        voltar_meus_eventos->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(voltar_meus_eventos);

        stackedWidget->addWidget(eventos);
        vendas_efetuadas = new QWidget();
        vendas_efetuadas->setObjectName(QString::fromUtf8("vendas_efetuadas"));
        verticalLayout_8 = new QVBoxLayout(vendas_efetuadas);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_16 = new QLabel(vendas_efetuadas);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_8->addWidget(label_16, 0, Qt::AlignHCenter);

        label_evento_vendas_efetuadas = new QLabel(vendas_efetuadas);
        label_evento_vendas_efetuadas->setObjectName(QString::fromUtf8("label_evento_vendas_efetuadas"));

        verticalLayout_8->addWidget(label_evento_vendas_efetuadas);

        tabelaVendasEfetuadas = new QTableWidget(vendas_efetuadas);
        if (tabelaVendasEfetuadas->columnCount() < 3)
            tabelaVendasEfetuadas->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabelaVendasEfetuadas->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tabelaVendasEfetuadas->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tabelaVendasEfetuadas->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        tabelaVendasEfetuadas->setObjectName(QString::fromUtf8("tabelaVendasEfetuadas"));

        verticalLayout_8->addWidget(tabelaVendasEfetuadas);

        voltar_vendas_efetuadas = new QPushButton(vendas_efetuadas);
        voltar_vendas_efetuadas->setObjectName(QString::fromUtf8("voltar_vendas_efetuadas"));
        sizePolicy2.setHeightForWidth(voltar_vendas_efetuadas->sizePolicy().hasHeightForWidth());
        voltar_vendas_efetuadas->setSizePolicy(sizePolicy2);

        verticalLayout_8->addWidget(voltar_vendas_efetuadas);

        stackedWidget->addWidget(vendas_efetuadas);
        compradores = new QWidget();
        compradores->setObjectName(QString::fromUtf8("compradores"));
        verticalLayout_9 = new QVBoxLayout(compradores);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_17 = new QLabel(compradores);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_9->addWidget(label_17, 0, Qt::AlignHCenter);

        label_evento_compradores = new QLabel(compradores);
        label_evento_compradores->setObjectName(QString::fromUtf8("label_evento_compradores"));

        verticalLayout_9->addWidget(label_evento_compradores);

        label_apresentacao_compradores = new QLabel(compradores);
        label_apresentacao_compradores->setObjectName(QString::fromUtf8("label_apresentacao_compradores"));

        verticalLayout_9->addWidget(label_apresentacao_compradores);

        tabelaCompradores = new QTableWidget(compradores);
        if (tabelaCompradores->columnCount() < 1)
            tabelaCompradores->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tabelaCompradores->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        tabelaCompradores->setObjectName(QString::fromUtf8("tabelaCompradores"));

        verticalLayout_9->addWidget(tabelaCompradores);

        voltar_compradores = new QPushButton(compradores);
        voltar_compradores->setObjectName(QString::fromUtf8("voltar_compradores"));
        sizePolicy2.setHeightForWidth(voltar_compradores->sizePolicy().hasHeightForWidth());
        voltar_compradores->setSizePolicy(sizePolicy2);

        verticalLayout_9->addWidget(voltar_compradores);

        stackedWidget->addWidget(compradores);
        editarEvento = new QWidget();
        editarEvento->setObjectName(QString::fromUtf8("editarEvento"));
        label_21 = new QLabel(editarEvento);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(260, 10, 92, 17));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        confirmar_editar_evento = new QPushButton(editarEvento);
        confirmar_editar_evento->setObjectName(QString::fromUtf8("confirmar_editar_evento"));
        confirmar_editar_evento->setGeometry(QRect(9, 367, 231, 25));
        cancelar_editar_evento = new QPushButton(editarEvento);
        cancelar_editar_evento->setObjectName(QString::fromUtf8("cancelar_editar_evento"));
        cancelar_editar_evento->setGeometry(QRect(9, 398, 80, 25));
        layoutWidget4 = new QWidget(editarEvento);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(40, 80, 371, 151));
        verticalLayout_10 = new QVBoxLayout(layoutWidget4);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        caixa_nome_evento = new QLineEdit(layoutWidget4);
        caixa_nome_evento->setObjectName(QString::fromUtf8("caixa_nome_evento"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(caixa_nome_evento->sizePolicy().hasHeightForWidth());
        caixa_nome_evento->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(caixa_nome_evento);

        caixa_classe_evento = new QLineEdit(layoutWidget4);
        caixa_classe_evento->setObjectName(QString::fromUtf8("caixa_classe_evento"));
        sizePolicy7.setHeightForWidth(caixa_classe_evento->sizePolicy().hasHeightForWidth());
        caixa_classe_evento->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(caixa_classe_evento);

        caixa_faixa_evento = new QLineEdit(layoutWidget4);
        caixa_faixa_evento->setObjectName(QString::fromUtf8("caixa_faixa_evento"));
        sizePolicy7.setHeightForWidth(caixa_faixa_evento->sizePolicy().hasHeightForWidth());
        caixa_faixa_evento->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(caixa_faixa_evento);

        caixa_cidade_evento = new QLineEdit(layoutWidget4);
        caixa_cidade_evento->setObjectName(QString::fromUtf8("caixa_cidade_evento"));
        sizePolicy7.setHeightForWidth(caixa_cidade_evento->sizePolicy().hasHeightForWidth());
        caixa_cidade_evento->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(caixa_cidade_evento);

        caixa_estado_evento = new QLineEdit(layoutWidget4);
        caixa_estado_evento->setObjectName(QString::fromUtf8("caixa_estado_evento"));
        sizePolicy7.setHeightForWidth(caixa_estado_evento->sizePolicy().hasHeightForWidth());
        caixa_estado_evento->setSizePolicy(sizePolicy7);

        verticalLayout_10->addWidget(caixa_estado_evento);

        layoutWidget5 = new QWidget(editarEvento);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(420, 80, 111, 151));
        verticalLayout_11 = new QVBoxLayout(layoutWidget5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        alterar_nome_evento = new QPushButton(layoutWidget5);
        alterar_nome_evento->setObjectName(QString::fromUtf8("alterar_nome_evento"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(alterar_nome_evento->sizePolicy().hasHeightForWidth());
        alterar_nome_evento->setSizePolicy(sizePolicy8);

        verticalLayout_11->addWidget(alterar_nome_evento);

        alterar_classe_evento = new QPushButton(layoutWidget5);
        alterar_classe_evento->setObjectName(QString::fromUtf8("alterar_classe_evento"));
        sizePolicy8.setHeightForWidth(alterar_classe_evento->sizePolicy().hasHeightForWidth());
        alterar_classe_evento->setSizePolicy(sizePolicy8);

        verticalLayout_11->addWidget(alterar_classe_evento);

        alterar_faixa_evento = new QPushButton(layoutWidget5);
        alterar_faixa_evento->setObjectName(QString::fromUtf8("alterar_faixa_evento"));
        sizePolicy8.setHeightForWidth(alterar_faixa_evento->sizePolicy().hasHeightForWidth());
        alterar_faixa_evento->setSizePolicy(sizePolicy8);

        verticalLayout_11->addWidget(alterar_faixa_evento);

        alterar_cidade_evento = new QPushButton(layoutWidget5);
        alterar_cidade_evento->setObjectName(QString::fromUtf8("alterar_cidade_evento"));
        sizePolicy8.setHeightForWidth(alterar_cidade_evento->sizePolicy().hasHeightForWidth());
        alterar_cidade_evento->setSizePolicy(sizePolicy8);

        verticalLayout_11->addWidget(alterar_cidade_evento);

        alterar_estado_evento = new QPushButton(layoutWidget5);
        alterar_estado_evento->setObjectName(QString::fromUtf8("alterar_estado_evento"));
        sizePolicy8.setHeightForWidth(alterar_estado_evento->sizePolicy().hasHeightForWidth());
        alterar_estado_evento->setSizePolicy(sizePolicy8);

        verticalLayout_11->addWidget(alterar_estado_evento);

        status_editar_evento = new QTextBrowser(editarEvento);
        status_editar_evento->setObjectName(QString::fromUtf8("status_editar_evento"));
        status_editar_evento->setGeometry(QRect(20, 260, 541, 71));
        label_18 = new QLabel(editarEvento);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(40, 40, 67, 17));
        codigo_evento_editar = new QLabel(editarEvento);
        codigo_evento_editar->setObjectName(QString::fromUtf8("codigo_evento_editar"));
        codigo_evento_editar->setGeometry(QRect(100, 40, 67, 17));
        stackedWidget->addWidget(editarEvento);
        apresentacoesEvento = new QWidget();
        apresentacoesEvento->setObjectName(QString::fromUtf8("apresentacoesEvento"));
        label_19 = new QLabel(apresentacoesEvento);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(190, 10, 181, 16));
        tabelaEditApresent = new QTableWidget(apresentacoesEvento);
        if (tabelaEditApresent->columnCount() < 4)
            tabelaEditApresent->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tabelaEditApresent->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tabelaEditApresent->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tabelaEditApresent->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tabelaEditApresent->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        tabelaEditApresent->setObjectName(QString::fromUtf8("tabelaEditApresent"));
        tabelaEditApresent->setGeometry(QRect(9, 38, 561, 341));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(tabelaEditApresent->sizePolicy().hasHeightForWidth());
        tabelaEditApresent->setSizePolicy(sizePolicy9);
        add_edit_apresent = new QPushButton(apresentacoesEvento);
        add_edit_apresent->setObjectName(QString::fromUtf8("add_edit_apresent"));
        add_edit_apresent->setGeometry(QRect(230, 210, 181, 23));
        sizePolicy2.setHeightForWidth(add_edit_apresent->sizePolicy().hasHeightForWidth());
        add_edit_apresent->setSizePolicy(sizePolicy2);
        voltar_edit_apresent = new QPushButton(apresentacoesEvento);
        voltar_edit_apresent->setObjectName(QString::fromUtf8("voltar_edit_apresent"));
        voltar_edit_apresent->setGeometry(QRect(9, 400, 211, 23));
        sizePolicy8.setHeightForWidth(voltar_edit_apresent->sizePolicy().hasHeightForWidth());
        voltar_edit_apresent->setSizePolicy(sizePolicy8);
        confirmar_edit_apresent = new QPushButton(apresentacoesEvento);
        confirmar_edit_apresent->setObjectName(QString::fromUtf8("confirmar_edit_apresent"));
        confirmar_edit_apresent->setGeometry(QRect(410, 400, 161, 23));
        sizePolicy2.setHeightForWidth(confirmar_edit_apresent->sizePolicy().hasHeightForWidth());
        confirmar_edit_apresent->setSizePolicy(sizePolicy2);
        stackedWidget->addWidget(apresentacoesEvento);
        add_edit_apresent->raise();
        label_19->raise();
        tabelaEditApresent->raise();
        voltar_edit_apresent->raise();
        confirmar_edit_apresent->raise();
        editarApresentacao = new QWidget();
        editarApresentacao->setObjectName(QString::fromUtf8("editarApresentacao"));
        label_20 = new QLabel(editarApresentacao);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(250, 10, 151, 16));
        voltar_edit_apresent_unica = new QPushButton(editarApresentacao);
        voltar_edit_apresent_unica->setObjectName(QString::fromUtf8("voltar_edit_apresent_unica"));
        voltar_edit_apresent_unica->setGeometry(QRect(20, 390, 121, 23));
        status_edit_apresent = new QTextBrowser(editarApresentacao);
        status_edit_apresent->setObjectName(QString::fromUtf8("status_edit_apresent"));
        status_edit_apresent->setGeometry(QRect(20, 250, 541, 91));
        layoutWidget6 = new QWidget(editarApresentacao);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(120, 70, 231, 151));
        verticalLayout_12 = new QVBoxLayout(layoutWidget6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        caixa_data_apresent = new QLineEdit(layoutWidget6);
        caixa_data_apresent->setObjectName(QString::fromUtf8("caixa_data_apresent"));

        verticalLayout_12->addWidget(caixa_data_apresent);

        caixa_horario_apresent = new QLineEdit(layoutWidget6);
        caixa_horario_apresent->setObjectName(QString::fromUtf8("caixa_horario_apresent"));

        verticalLayout_12->addWidget(caixa_horario_apresent);

        caixa_preco_apresent = new QLineEdit(layoutWidget6);
        caixa_preco_apresent->setObjectName(QString::fromUtf8("caixa_preco_apresent"));

        verticalLayout_12->addWidget(caixa_preco_apresent);

        caixa_sala_apresent = new QLineEdit(layoutWidget6);
        caixa_sala_apresent->setObjectName(QString::fromUtf8("caixa_sala_apresent"));

        verticalLayout_12->addWidget(caixa_sala_apresent);

        layoutWidget7 = new QWidget(editarApresentacao);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(360, 70, 113, 151));
        verticalLayout_13 = new QVBoxLayout(layoutWidget7);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        alterar_data_apresent = new QPushButton(layoutWidget7);
        alterar_data_apresent->setObjectName(QString::fromUtf8("alterar_data_apresent"));
        sizePolicy8.setHeightForWidth(alterar_data_apresent->sizePolicy().hasHeightForWidth());
        alterar_data_apresent->setSizePolicy(sizePolicy8);

        verticalLayout_13->addWidget(alterar_data_apresent);

        alterar_horario_apresent = new QPushButton(layoutWidget7);
        alterar_horario_apresent->setObjectName(QString::fromUtf8("alterar_horario_apresent"));
        sizePolicy8.setHeightForWidth(alterar_horario_apresent->sizePolicy().hasHeightForWidth());
        alterar_horario_apresent->setSizePolicy(sizePolicy8);

        verticalLayout_13->addWidget(alterar_horario_apresent);

        alterar_preco_apresent = new QPushButton(layoutWidget7);
        alterar_preco_apresent->setObjectName(QString::fromUtf8("alterar_preco_apresent"));
        sizePolicy8.setHeightForWidth(alterar_preco_apresent->sizePolicy().hasHeightForWidth());
        alterar_preco_apresent->setSizePolicy(sizePolicy8);

        verticalLayout_13->addWidget(alterar_preco_apresent);

        alterar_sala_apresent = new QPushButton(layoutWidget7);
        alterar_sala_apresent->setObjectName(QString::fromUtf8("alterar_sala_apresent"));
        sizePolicy8.setHeightForWidth(alterar_sala_apresent->sizePolicy().hasHeightForWidth());
        alterar_sala_apresent->setSizePolicy(sizePolicy8);

        verticalLayout_13->addWidget(alterar_sala_apresent);

        layoutWidget8 = new QWidget(editarApresentacao);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(120, 40, 127, 19));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget8);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_6->addWidget(label_22);

        label_codigo_apresent_edit = new QLabel(layoutWidget8);
        label_codigo_apresent_edit->setObjectName(QString::fromUtf8("label_codigo_apresent_edit"));

        horizontalLayout_6->addWidget(label_codigo_apresent_edit);

        stackedWidget->addWidget(editarApresentacao);
        criarEvento = new QWidget();
        criarEvento->setObjectName(QString::fromUtf8("criarEvento"));
        label_23 = new QLabel(criarEvento);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(260, 20, 91, 16));
        add_apresent_criar_evento = new QPushButton(criarEvento);
        add_apresent_criar_evento->setObjectName(QString::fromUtf8("add_apresent_criar_evento"));
        add_apresent_criar_evento->setGeometry(QRect(394, 360, 171, 23));
        finalizar_criar_evento = new QPushButton(criarEvento);
        finalizar_criar_evento->setObjectName(QString::fromUtf8("finalizar_criar_evento"));
        finalizar_criar_evento->setGeometry(QRect(20, 360, 75, 23));
        cancelar_criar_evento = new QPushButton(criarEvento);
        cancelar_criar_evento->setObjectName(QString::fromUtf8("cancelar_criar_evento"));
        cancelar_criar_evento->setGeometry(QRect(20, 390, 75, 23));
        status_criar_evento = new QTextBrowser(criarEvento);
        status_criar_evento->setObjectName(QString::fromUtf8("status_criar_evento"));
        status_criar_evento->setGeometry(QRect(30, 240, 521, 101));
        layoutWidget9 = new QWidget(criarEvento);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(110, 50, 371, 161));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_24 = new QLabel(layoutWidget9);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_14->addWidget(label_24);

        label_25 = new QLabel(layoutWidget9);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_14->addWidget(label_25);

        label_26 = new QLabel(layoutWidget9);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_14->addWidget(label_26);

        label_27 = new QLabel(layoutWidget9);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_14->addWidget(label_27);

        label_28 = new QLabel(layoutWidget9);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        verticalLayout_14->addWidget(label_28);


        horizontalLayout_7->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        caixa_nome_novo_evento = new QLineEdit(layoutWidget9);
        caixa_nome_novo_evento->setObjectName(QString::fromUtf8("caixa_nome_novo_evento"));

        verticalLayout_15->addWidget(caixa_nome_novo_evento);

        caixa_classe_novo_evento = new QLineEdit(layoutWidget9);
        caixa_classe_novo_evento->setObjectName(QString::fromUtf8("caixa_classe_novo_evento"));

        verticalLayout_15->addWidget(caixa_classe_novo_evento);

        caixa_faixa_novo_evento = new QLineEdit(layoutWidget9);
        caixa_faixa_novo_evento->setObjectName(QString::fromUtf8("caixa_faixa_novo_evento"));

        verticalLayout_15->addWidget(caixa_faixa_novo_evento);

        caixa_estado_novo_evento = new QLineEdit(layoutWidget9);
        caixa_estado_novo_evento->setObjectName(QString::fromUtf8("caixa_estado_novo_evento"));

        verticalLayout_15->addWidget(caixa_estado_novo_evento);

        caixa_cidade_novo_evento = new QLineEdit(layoutWidget9);
        caixa_cidade_novo_evento->setObjectName(QString::fromUtf8("caixa_cidade_novo_evento"));

        verticalLayout_15->addWidget(caixa_cidade_novo_evento);


        horizontalLayout_7->addLayout(verticalLayout_15);

        stackedWidget->addWidget(criarEvento);
        addApresentacao = new QWidget();
        addApresentacao->setObjectName(QString::fromUtf8("addApresentacao"));
        label_29 = new QLabel(addApresentacao);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(210, 20, 171, 16));
        concluir_nova_apresent = new QPushButton(addApresentacao);
        concluir_nova_apresent->setObjectName(QString::fromUtf8("concluir_nova_apresent"));
        concluir_nova_apresent->setGeometry(QRect(20, 360, 171, 23));
        cancelar_nova_apresent = new QPushButton(addApresentacao);
        cancelar_nova_apresent->setObjectName(QString::fromUtf8("cancelar_nova_apresent"));
        cancelar_nova_apresent->setGeometry(QRect(20, 390, 75, 23));
        status_nova_apresent = new QTextBrowser(addApresentacao);
        status_nova_apresent->setObjectName(QString::fromUtf8("status_nova_apresent"));
        status_nova_apresent->setGeometry(QRect(30, 240, 521, 101));
        layoutWidget10 = new QWidget(addApresentacao);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(120, 80, 341, 122));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_30 = new QLabel(layoutWidget10);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        verticalLayout_16->addWidget(label_30);

        label_31 = new QLabel(layoutWidget10);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        verticalLayout_16->addWidget(label_31);

        label_32 = new QLabel(layoutWidget10);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        verticalLayout_16->addWidget(label_32);

        label_33 = new QLabel(layoutWidget10);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        verticalLayout_16->addWidget(label_33);


        horizontalLayout_9->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        caixa_data_nova_apresent = new QLineEdit(layoutWidget10);
        caixa_data_nova_apresent->setObjectName(QString::fromUtf8("caixa_data_nova_apresent"));

        verticalLayout_17->addWidget(caixa_data_nova_apresent);

        caixa_horario_nova_apresent = new QLineEdit(layoutWidget10);
        caixa_horario_nova_apresent->setObjectName(QString::fromUtf8("caixa_horario_nova_apresent"));

        verticalLayout_17->addWidget(caixa_horario_nova_apresent);

        caixa_preco_nova_apresent = new QLineEdit(layoutWidget10);
        caixa_preco_nova_apresent->setObjectName(QString::fromUtf8("caixa_preco_nova_apresent"));

        verticalLayout_17->addWidget(caixa_preco_nova_apresent);

        caixa_sala_nova_apresent = new QLineEdit(layoutWidget10);
        caixa_sala_nova_apresent->setObjectName(QString::fromUtf8("caixa_sala_nova_apresent"));

        verticalLayout_17->addWidget(caixa_sala_nova_apresent);


        horizontalLayout_9->addLayout(verticalLayout_17);

        stackedWidget->addWidget(addApresentacao);

        retranslateUi(TelaUsuario);
        QObject::connect(Voltar, SIGNAL(clicked()), TelaUsuario, SLOT(close()));

        stackedWidget->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(TelaUsuario);
    } // setupUi

    void retranslateUi(QDialog *TelaUsuario)
    {
        TelaUsuario->setWindowTitle(QApplication::translate("TelaUsuario", "Minha Conta", nullptr));
        label->setText(QApplication::translate("TelaUsuario", "Usu\303\241rio", nullptr));
        Voltar->setText(QApplication::translate("TelaUsuario", "Voltar \303\240 Tela Inicial", nullptr));
        Cadastrar->setText(QApplication::translate("TelaUsuario", "Cadastrar", nullptr));
        Excluir->setText(QApplication::translate("TelaUsuario", "Excluir Conta", nullptr));
        Dados->setText(QApplication::translate("TelaUsuario", "Dados de Conta", nullptr));
        Compras->setText(QApplication::translate("TelaUsuario", "Minhas Compras", nullptr));
        Eventos->setText(QApplication::translate("TelaUsuario", "Meus Eventos", nullptr));
        label_2->setText(QApplication::translate("TelaUsuario", "Cadastrar", nullptr));
        label_3->setText(QApplication::translate("TelaUsuario", "CPF:", nullptr));
        label_4->setText(QApplication::translate("TelaUsuario", "Senha:", nullptr));
        label_5->setText(QApplication::translate("TelaUsuario", "N\302\272 Cart\303\243o de Cr\303\251dito:", nullptr));
        label_6->setText(QApplication::translate("TelaUsuario", "C\303\263digo de Seguran\303\247a:", nullptr));
        label_7->setText(QApplication::translate("TelaUsuario", "Data de Validade:", nullptr));
        ir_cadastrar->setText(QApplication::translate("TelaUsuario", "Ir", nullptr));
        voltar_cadastrar->setText(QApplication::translate("TelaUsuario", "Voltar", nullptr));
        label_14->setText(QApplication::translate("TelaUsuario", "Exclus\303\243o de Conta", nullptr));
        label_9->setText(QApplication::translate("TelaUsuario", "Informa\303\247\303\265es da Conta", nullptr));
        label_8->setText(QApplication::translate("TelaUsuario", "Deseja mesmo excluir sua conta?", nullptr));
        confirmar_exclusao->setText(QApplication::translate("TelaUsuario", "Confirmar", nullptr));
        cancelar_exclusao->setText(QApplication::translate("TelaUsuario", "Cancelar", nullptr));
        campoCPF_exclusao->setText(QApplication::translate("TelaUsuario", "Erro", nullptr));
        campoCartao_exclusao->setText(QApplication::translate("TelaUsuario", "Erro", nullptr));
        label_11->setText(QApplication::translate("TelaUsuario", "Cart\303\243o de Cr\303\251dito:", nullptr));
        label_10->setText(QApplication::translate("TelaUsuario", "CPF:", nullptr));
        label_12->setText(QApplication::translate("TelaUsuario", "Dados de Conta", nullptr));
        voltar_conta->setText(QApplication::translate("TelaUsuario", "Voltar", nullptr));
        alterar_cpf->setText(QApplication::translate("TelaUsuario", "Alterar CPF", nullptr));
        alterar_senha->setText(QApplication::translate("TelaUsuario", "Alterar Senha", nullptr));
        alterar_cartao->setText(QApplication::translate("TelaUsuario", "Alterar N\303\272mero Cart\303\243o", nullptr));
        alterar_codigo->setText(QApplication::translate("TelaUsuario", "Alterar C\303\263digo de Seguran\303\247a", nullptr));
        alterar_data->setText(QApplication::translate("TelaUsuario", "Alterar Data de Validade", nullptr));
        label_13->setText(QApplication::translate("TelaUsuario", "Minhas Compras", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabelaCompras->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TelaUsuario", "Ingresso", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabelaCompras->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TelaUsuario", "Evento", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabelaCompras->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TelaUsuario", "Apresenta\303\247\303\243o", nullptr));
        voltar_compras->setText(QApplication::translate("TelaUsuario", "Voltar", nullptr));
        label_15->setText(QApplication::translate("TelaUsuario", "Meus Eventos", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabelaMeusEventos->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("TelaUsuario", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabelaMeusEventos->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("TelaUsuario", "Evento", nullptr));
        criarNovoEvento->setText(QApplication::translate("TelaUsuario", "Criar novo evento", nullptr));
        voltar_meus_eventos->setText(QApplication::translate("TelaUsuario", "Voltar", nullptr));
        label_16->setText(QApplication::translate("TelaUsuario", "Vendas Efetuadas", nullptr));
        label_evento_vendas_efetuadas->setText(QApplication::translate("TelaUsuario", "Evento:", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabelaVendasEfetuadas->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("TelaUsuario", "Apresenta\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tabelaVendasEfetuadas->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("TelaUsuario", "Disponibilidade", nullptr));
        voltar_vendas_efetuadas->setText(QApplication::translate("TelaUsuario", "Voltar", nullptr));
        label_17->setText(QApplication::translate("TelaUsuario", "Compradores", nullptr));
        label_evento_compradores->setText(QApplication::translate("TelaUsuario", "Evento:", nullptr));
        label_apresentacao_compradores->setText(QApplication::translate("TelaUsuario", "Apresenta\303\247\303\243o:", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tabelaCompradores->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("TelaUsuario", "Usu\303\241rio", nullptr));
        voltar_compradores->setText(QApplication::translate("TelaUsuario", "Voltar", nullptr));
        label_21->setText(QApplication::translate("TelaUsuario", "Editar Evento", nullptr));
        confirmar_editar_evento->setText(QApplication::translate("TelaUsuario", "Ir para edi\303\247\303\243o de apresenta\303\247\303\265es", nullptr));
        cancelar_editar_evento->setText(QApplication::translate("TelaUsuario", "Cancelar", nullptr));
        caixa_nome_evento->setText(QApplication::translate("TelaUsuario", "//Nome do evento//", nullptr));
        caixa_classe_evento->setText(QApplication::translate("TelaUsuario", "//Classe do Evento//", nullptr));
        caixa_faixa_evento->setText(QApplication::translate("TelaUsuario", "//Faixa do evento//", nullptr));
        caixa_cidade_evento->setText(QApplication::translate("TelaUsuario", "//Cidade do evento//", nullptr));
        caixa_estado_evento->setText(QApplication::translate("TelaUsuario", "//Estado do evento//", nullptr));
        alterar_nome_evento->setText(QApplication::translate("TelaUsuario", "Alterar Nome", nullptr));
        alterar_classe_evento->setText(QApplication::translate("TelaUsuario", "Alterar Classe", nullptr));
        alterar_faixa_evento->setText(QApplication::translate("TelaUsuario", "Alterar Faixa", nullptr));
        alterar_cidade_evento->setText(QApplication::translate("TelaUsuario", "Alterar Cidade", nullptr));
        alterar_estado_evento->setText(QApplication::translate("TelaUsuario", "Alterar Estado", nullptr));
        label_18->setText(QApplication::translate("TelaUsuario", "C\303\263digo:", nullptr));
        codigo_evento_editar->setText(QApplication::translate("TelaUsuario", "TextLabel", nullptr));
        label_19->setText(QApplication::translate("TelaUsuario", "Apresenta\303\247\303\265es do Evento", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tabelaEditApresent->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("TelaUsuario", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tabelaEditApresent->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("TelaUsuario", "Apresenta\303\247\303\243o", nullptr));
        add_edit_apresent->setText(QApplication::translate("TelaUsuario", "Adicionar Apresenta\303\247\303\243o", nullptr));
        voltar_edit_apresent->setText(QApplication::translate("TelaUsuario", "Voltar para edi\303\247\303\243o do evento", nullptr));
        confirmar_edit_apresent->setText(QApplication::translate("TelaUsuario", "Confirmar Altera\303\247\303\265es", nullptr));
        label_20->setText(QApplication::translate("TelaUsuario", "Editar Apresenta\303\247\303\243o", nullptr));
        voltar_edit_apresent_unica->setText(QApplication::translate("TelaUsuario", "Voltar", nullptr));
        alterar_data_apresent->setText(QApplication::translate("TelaUsuario", "Alterar Data", nullptr));
        alterar_horario_apresent->setText(QApplication::translate("TelaUsuario", "Alterar Hor\303\241rio", nullptr));
        alterar_preco_apresent->setText(QApplication::translate("TelaUsuario", "Alterar Pre\303\247o", nullptr));
        alterar_sala_apresent->setText(QApplication::translate("TelaUsuario", "Alterar Sala", nullptr));
        label_22->setText(QApplication::translate("TelaUsuario", "C\303\263digo:", nullptr));
        label_codigo_apresent_edit->setText(QApplication::translate("TelaUsuario", "TextLabel", nullptr));
        label_23->setText(QApplication::translate("TelaUsuario", "Criar evento", nullptr));
        add_apresent_criar_evento->setText(QApplication::translate("TelaUsuario", "Adicionar Apresenta\303\247\303\243o", nullptr));
        finalizar_criar_evento->setText(QApplication::translate("TelaUsuario", "Finalizar", nullptr));
        cancelar_criar_evento->setText(QApplication::translate("TelaUsuario", "Cancelar", nullptr));
        label_24->setText(QApplication::translate("TelaUsuario", "Nome:", nullptr));
        label_25->setText(QApplication::translate("TelaUsuario", "Classe:", nullptr));
        label_26->setText(QApplication::translate("TelaUsuario", "Faixa Et\303\241ria:", nullptr));
        label_27->setText(QApplication::translate("TelaUsuario", "Estado:", nullptr));
        label_28->setText(QApplication::translate("TelaUsuario", "Cidade:", nullptr));
        label_29->setText(QApplication::translate("TelaUsuario", "Adicionar Apresenta\303\247\303\243o", nullptr));
        concluir_nova_apresent->setText(QApplication::translate("TelaUsuario", "Concluir Apresenta\303\247\303\243o", nullptr));
        cancelar_nova_apresent->setText(QApplication::translate("TelaUsuario", "Cancelar", nullptr));
        label_30->setText(QApplication::translate("TelaUsuario", "Data:", nullptr));
        label_31->setText(QApplication::translate("TelaUsuario", "Hor\303\241rio:", nullptr));
        label_32->setText(QApplication::translate("TelaUsuario", "Pre\303\247o:", nullptr));
        label_33->setText(QApplication::translate("TelaUsuario", "Sala:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaUsuario: public Ui_TelaUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAUSUARIO_H
