/********************************************************************************
** Form generated from reading UI file 'tcentral.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCENTRAL_H
#define UI_TCENTRAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TCentral
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *TCentral)
    {
        if (TCentral->objectName().isEmpty())
            TCentral->setObjectName(QString::fromUtf8("TCentral"));
        TCentral->resize(400, 300);
        pushButton = new QPushButton(TCentral);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 130, 89, 25));

        retranslateUi(TCentral);

        QMetaObject::connectSlotsByName(TCentral);
    } // setupUi

    void retranslateUi(QDialog *TCentral)
    {
        TCentral->setWindowTitle(QApplication::translate("TCentral", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("TCentral", "Autenticar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TCentral: public Ui_TCentral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCENTRAL_H
