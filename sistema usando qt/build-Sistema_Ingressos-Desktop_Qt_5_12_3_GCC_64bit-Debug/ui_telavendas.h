/********************************************************************************
** Form generated from reading UI file 'telavendas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAVENDAS_H
#define UI_TELAVENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaVendas
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *labelCartao;
    QPushButton *confirmarCompra;
    QPushButton *pushButton_2;
    QLabel *label_11;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelEvento;
    QLabel *labelLocalEvento;
    QLabel *labelClasseEvento;
    QLabel *labelFaixaEvento;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelApresentacao;
    QLabel *labelData;
    QLabel *labelHorario;
    QLabel *labelSala;
    QLabel *labelPreco;
    QLabel *codigoEvento;
    QLabel *codigoApresentacao;
    QWidget *page_2;
    QTableWidget *tabelaIngressos;
    QLabel *label;
    QPushButton *concluirIngressos;

    void setupUi(QDialog *telaVendas)
    {
        if (telaVendas->objectName().isEmpty())
            telaVendas->setObjectName(QString::fromUtf8("telaVendas"));
        telaVendas->resize(600, 450);
        stackedWidget = new QStackedWidget(telaVendas);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 582, 432));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        labelCartao = new QLabel(page);
        labelCartao->setObjectName(QString::fromUtf8("labelCartao"));
        labelCartao->setGeometry(QRect(20, 190, 411, 17));
        confirmarCompra = new QPushButton(page);
        confirmarCompra->setObjectName(QString::fromUtf8("confirmarCompra"));
        confirmarCompra->setGeometry(QRect(330, 300, 141, 51));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 300, 141, 51));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(180, 10, 171, 17));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 211, 88));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelEvento = new QLabel(layoutWidget);
        labelEvento->setObjectName(QString::fromUtf8("labelEvento"));

        verticalLayout->addWidget(labelEvento);

        labelLocalEvento = new QLabel(layoutWidget);
        labelLocalEvento->setObjectName(QString::fromUtf8("labelLocalEvento"));

        verticalLayout->addWidget(labelLocalEvento);

        labelClasseEvento = new QLabel(layoutWidget);
        labelClasseEvento->setObjectName(QString::fromUtf8("labelClasseEvento"));

        verticalLayout->addWidget(labelClasseEvento);

        labelFaixaEvento = new QLabel(layoutWidget);
        labelFaixaEvento->setObjectName(QString::fromUtf8("labelFaixaEvento"));

        verticalLayout->addWidget(labelFaixaEvento);

        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(270, 40, 261, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelApresentacao = new QLabel(layoutWidget1);
        labelApresentacao->setObjectName(QString::fromUtf8("labelApresentacao"));

        verticalLayout_2->addWidget(labelApresentacao);

        labelData = new QLabel(layoutWidget1);
        labelData->setObjectName(QString::fromUtf8("labelData"));

        verticalLayout_2->addWidget(labelData);

        labelHorario = new QLabel(layoutWidget1);
        labelHorario->setObjectName(QString::fromUtf8("labelHorario"));

        verticalLayout_2->addWidget(labelHorario);

        labelSala = new QLabel(layoutWidget1);
        labelSala->setObjectName(QString::fromUtf8("labelSala"));

        verticalLayout_2->addWidget(labelSala);

        labelPreco = new QLabel(layoutWidget1);
        labelPreco->setObjectName(QString::fromUtf8("labelPreco"));

        verticalLayout_2->addWidget(labelPreco);

        codigoEvento = new QLabel(page);
        codigoEvento->setObjectName(QString::fromUtf8("codigoEvento"));
        codigoEvento->setGeometry(QRect(40, 390, 67, 17));
        codigoApresentacao = new QLabel(page);
        codigoApresentacao->setObjectName(QString::fromUtf8("codigoApresentacao"));
        codigoApresentacao->setGeometry(QRect(130, 390, 67, 17));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tabelaIngressos = new QTableWidget(page_2);
        if (tabelaIngressos->columnCount() < 1)
            tabelaIngressos->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabelaIngressos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tabelaIngressos->setObjectName(QString::fromUtf8("tabelaIngressos"));
        tabelaIngressos->setGeometry(QRect(30, 60, 531, 331));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 20, 161, 17));
        concluirIngressos = new QPushButton(page_2);
        concluirIngressos->setObjectName(QString::fromUtf8("concluirIngressos"));
        concluirIngressos->setGeometry(QRect(250, 400, 89, 25));
        stackedWidget->addWidget(page_2);

        retranslateUi(telaVendas);
        QObject::connect(pushButton_2, SIGNAL(clicked()), telaVendas, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(telaVendas);
    } // setupUi

    void retranslateUi(QDialog *telaVendas)
    {
        telaVendas->setWindowTitle(QApplication::translate("telaVendas", "Tela Vendas", nullptr));
        labelCartao->setText(QApplication::translate("telaVendas", "Cart\303\243o a ser utilizado:", nullptr));
        confirmarCompra->setText(QApplication::translate("telaVendas", "Confirmar", nullptr));
        pushButton_2->setText(QApplication::translate("telaVendas", "Abortar", nullptr));
        label_11->setText(QApplication::translate("telaVendas", "Confirma\303\247\303\243o de compra", nullptr));
        labelEvento->setText(QApplication::translate("telaVendas", "Evento:", nullptr));
        labelLocalEvento->setText(QApplication::translate("telaVendas", "Local:", nullptr));
        labelClasseEvento->setText(QApplication::translate("telaVendas", "Classe:", nullptr));
        labelFaixaEvento->setText(QApplication::translate("telaVendas", "Faixa:", nullptr));
        labelApresentacao->setText(QApplication::translate("telaVendas", "Apresenta\303\247\303\243o:", nullptr));
        labelData->setText(QApplication::translate("telaVendas", "Data:", nullptr));
        labelHorario->setText(QApplication::translate("telaVendas", "Hor\303\241rio:", nullptr));
        labelSala->setText(QApplication::translate("telaVendas", "Sala:", nullptr));
        labelPreco->setText(QApplication::translate("telaVendas", "Pre\303\247o:", nullptr));
        codigoEvento->setText(QString());
        codigoApresentacao->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tabelaIngressos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("telaVendas", "C\303\263digos de Ingressos", nullptr));
        label->setText(QApplication::translate("telaVendas", "Ingresssos Adquiridos", nullptr));
        concluirIngressos->setText(QApplication::translate("telaVendas", "Concluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaVendas: public Ui_telaVendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAVENDAS_H
