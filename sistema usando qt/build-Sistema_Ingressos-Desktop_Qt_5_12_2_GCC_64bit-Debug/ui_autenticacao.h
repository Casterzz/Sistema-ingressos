/********************************************************************************
** Form generated from reading UI file 'autenticacao.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTENTICACAO_H
#define UI_AUTENTICACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Autenticacao
{
public:
    QLineEdit *campoCPF;
    QLineEdit *campoSenha;
    QLabel *label;
    QLabel *label_2;
    QPushButton *logar;
    QPushButton *cancelar;
    QLabel *label_3;
    QTextBrowser *status;
    QFrame *frame;

    void setupUi(QDialog *Autenticacao)
    {
        if (Autenticacao->objectName().isEmpty())
            Autenticacao->setObjectName(QString::fromUtf8("Autenticacao"));
        Autenticacao->resize(319, 262);
        campoCPF = new QLineEdit(Autenticacao);
        campoCPF->setObjectName(QString::fromUtf8("campoCPF"));
        campoCPF->setGeometry(QRect(130, 60, 113, 25));
        campoCPF->setEchoMode(QLineEdit::Normal);
        campoSenha = new QLineEdit(Autenticacao);
        campoSenha->setObjectName(QString::fromUtf8("campoSenha"));
        campoSenha->setGeometry(QRect(130, 100, 113, 25));
        campoSenha->setEchoMode(QLineEdit::Password);
        label = new QLabel(Autenticacao);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 41, 17));
        label_2 = new QLabel(Autenticacao);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 51, 17));
        logar = new QPushButton(Autenticacao);
        logar->setObjectName(QString::fromUtf8("logar"));
        logar->setGeometry(QRect(30, 160, 89, 25));
        cancelar = new QPushButton(Autenticacao);
        cancelar->setObjectName(QString::fromUtf8("cancelar"));
        cancelar->setGeometry(QRect(190, 160, 89, 25));
        label_3 = new QLabel(Autenticacao);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 20, 271, 20));
        status = new QTextBrowser(Autenticacao);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(30, 200, 256, 41));
        frame = new QFrame(Autenticacao);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 40, 221, 101));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        campoCPF->raise();
        campoSenha->raise();
        label->raise();
        label_2->raise();
        logar->raise();
        cancelar->raise();
        label_3->raise();
        status->raise();

        retranslateUi(Autenticacao);
        QObject::connect(cancelar, SIGNAL(clicked()), Autenticacao, SLOT(close()));

        QMetaObject::connectSlotsByName(Autenticacao);
    } // setupUi

    void retranslateUi(QDialog *Autenticacao)
    {
        Autenticacao->setWindowTitle(QApplication::translate("Autenticacao", "Autentica\303\247\303\243o", nullptr));
        campoCPF->setText(QString());
        campoSenha->setText(QString());
        label->setText(QApplication::translate("Autenticacao", "CPF:", nullptr));
        label_2->setText(QApplication::translate("Autenticacao", "Senha:", nullptr));
        logar->setText(QApplication::translate("Autenticacao", "Logar", nullptr));
        cancelar->setText(QApplication::translate("Autenticacao", "Cancelar", nullptr));
        label_3->setText(QApplication::translate("Autenticacao", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autenticacao: public Ui_Autenticacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTENTICACAO_H
