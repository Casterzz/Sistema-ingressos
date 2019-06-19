/********************************************************************************
** Form generated from reading UI file 'telaeventos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAEVENTOS_H
#define UI_TELAEVENTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaEventos
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableWidget *tabelaEventosDisp;
    QPushButton *PesquisarEventos;
    QPushButton *CancelarEventos;
    QLabel *labelEventosDisp;
    QLabel *numEventos;
    QLabel *codigoEvento;
    QWidget *page_2;
    QLabel *label;
    QPushButton *irPesquisarEventos;
    QLineEdit *caixaPesquisa;
    QLabel *label_3;
    QTextBrowser *statusPesquisarEventos;
    QPushButton *voltarPesquisaEventos;
    QWidget *page_3;
    QPushButton *voltarEventoApresentacoes;
    QTableWidget *tabelaApresentacoes;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *campoEvento;
    QLabel *campoLocal;
    QLabel *campoClasse;
    QLabel *campoFaixa;

    void setupUi(QDialog *telaEventos)
    {
        if (telaEventos->objectName().isEmpty())
            telaEventos->setObjectName(QString::fromUtf8("telaEventos"));
        telaEventos->resize(600, 450);
        stackedWidget = new QStackedWidget(telaEventos);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 582, 432));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        tabelaEventosDisp = new QTableWidget(page);
        if (tabelaEventosDisp->columnCount() < 2)
            tabelaEventosDisp->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabelaEventosDisp->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabelaEventosDisp->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tabelaEventosDisp->setObjectName(QString::fromUtf8("tabelaEventosDisp"));
        tabelaEventosDisp->setGeometry(QRect(10, 40, 561, 291));
        PesquisarEventos = new QPushButton(page);
        PesquisarEventos->setObjectName(QString::fromUtf8("PesquisarEventos"));
        PesquisarEventos->setGeometry(QRect(20, 350, 89, 25));
        CancelarEventos = new QPushButton(page);
        CancelarEventos->setObjectName(QString::fromUtf8("CancelarEventos"));
        CancelarEventos->setGeometry(QRect(20, 390, 89, 25));
        labelEventosDisp = new QLabel(page);
        labelEventosDisp->setObjectName(QString::fromUtf8("labelEventosDisp"));
        labelEventosDisp->setGeometry(QRect(210, 10, 151, 17));
        numEventos = new QLabel(page);
        numEventos->setObjectName(QString::fromUtf8("numEventos"));
        numEventos->setGeometry(QRect(500, 340, 67, 17));
        codigoEvento = new QLabel(page);
        codigoEvento->setObjectName(QString::fromUtf8("codigoEvento"));
        codigoEvento->setGeometry(QRect(500, 370, 67, 17));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 10, 161, 17));
        irPesquisarEventos = new QPushButton(page_2);
        irPesquisarEventos->setObjectName(QString::fromUtf8("irPesquisarEventos"));
        irPesquisarEventos->setGeometry(QRect(20, 120, 89, 25));
        caixaPesquisa = new QLineEdit(page_2);
        caixaPesquisa->setObjectName(QString::fromUtf8("caixaPesquisa"));
        caixaPesquisa->setGeometry(QRect(20, 80, 481, 25));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 50, 501, 17));
        statusPesquisarEventos = new QTextBrowser(page_2);
        statusPesquisarEventos->setObjectName(QString::fromUtf8("statusPesquisarEventos"));
        statusPesquisarEventos->setGeometry(QRect(20, 280, 511, 71));
        voltarPesquisaEventos = new QPushButton(page_2);
        voltarPesquisaEventos->setObjectName(QString::fromUtf8("voltarPesquisaEventos"));
        voltarPesquisaEventos->setGeometry(QRect(20, 380, 89, 25));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        voltarEventoApresentacoes = new QPushButton(page_3);
        voltarEventoApresentacoes->setObjectName(QString::fromUtf8("voltarEventoApresentacoes"));
        voltarEventoApresentacoes->setGeometry(QRect(10, 390, 89, 25));
        tabelaApresentacoes = new QTableWidget(page_3);
        if (tabelaApresentacoes->columnCount() < 3)
            tabelaApresentacoes->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabelaApresentacoes->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabelaApresentacoes->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabelaApresentacoes->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        tabelaApresentacoes->setObjectName(QString::fromUtf8("tabelaApresentacoes"));
        tabelaApresentacoes->setGeometry(QRect(10, 110, 551, 261));
        layoutWidget = new QWidget(page_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 291, 88));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        campoEvento = new QLabel(layoutWidget);
        campoEvento->setObjectName(QString::fromUtf8("campoEvento"));

        verticalLayout->addWidget(campoEvento);

        campoLocal = new QLabel(layoutWidget);
        campoLocal->setObjectName(QString::fromUtf8("campoLocal"));

        verticalLayout->addWidget(campoLocal);

        campoClasse = new QLabel(layoutWidget);
        campoClasse->setObjectName(QString::fromUtf8("campoClasse"));

        verticalLayout->addWidget(campoClasse);

        campoFaixa = new QLabel(layoutWidget);
        campoFaixa->setObjectName(QString::fromUtf8("campoFaixa"));

        verticalLayout->addWidget(campoFaixa);

        stackedWidget->addWidget(page_3);

        retranslateUi(telaEventos);
        QObject::connect(CancelarEventos, SIGNAL(clicked()), telaEventos, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(telaEventos);
    } // setupUi

    void retranslateUi(QDialog *telaEventos)
    {
        telaEventos->setWindowTitle(QApplication::translate("telaEventos", "Explorar Eventos", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabelaEventosDisp->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("telaEventos", "Eventos", nullptr));
        PesquisarEventos->setText(QApplication::translate("telaEventos", "Pesquisar", nullptr));
        CancelarEventos->setText(QApplication::translate("telaEventos", "Cancelar", nullptr));
        labelEventosDisp->setText(QApplication::translate("telaEventos", "Eventos Dispon\303\255veis", nullptr));
        numEventos->setText(QString());
        codigoEvento->setText(QString());
        label->setText(QApplication::translate("telaEventos", "Pesquisa de Eventos", nullptr));
        irPesquisarEventos->setText(QApplication::translate("telaEventos", "Ir", nullptr));
        label_3->setText(QApplication::translate("telaEventos", "Procure pelo nome, classe, faixa ou estado de realiza\303\247\303\243o do evento:", nullptr));
        voltarPesquisaEventos->setText(QApplication::translate("telaEventos", "Voltar", nullptr));
        voltarEventoApresentacoes->setText(QApplication::translate("telaEventos", "Voltar", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabelaApresentacoes->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("telaEventos", "Apresenta\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabelaApresentacoes->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("telaEventos", "Disponibilidade", nullptr));
        campoEvento->setText(QApplication::translate("telaEventos", "Evento:", nullptr));
        campoLocal->setText(QApplication::translate("telaEventos", "Local:", nullptr));
        campoClasse->setText(QApplication::translate("telaEventos", "Classe:", nullptr));
        campoFaixa->setText(QApplication::translate("telaEventos", "Faixa:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaEventos: public Ui_telaEventos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAEVENTOS_H
