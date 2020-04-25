/********************************************************************************
** Form generated from reading UI file 'msgbox.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSGBOX_H
#define UI_MSGBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_msgbox
{
public:
    QPushButton *btnOK;
    QLabel *label;

    void setupUi(QDialog *msgbox)
    {
        if (msgbox->objectName().isEmpty())
            msgbox->setObjectName(QString::fromUtf8("msgbox"));
        msgbox->resize(400, 300);
        btnOK = new QPushButton(msgbox);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(150, 190, 93, 28));
        label = new QLabel(msgbox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 110, 201, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(msgbox);

        QMetaObject::connectSlotsByName(msgbox);
    } // setupUi

    void retranslateUi(QDialog *msgbox)
    {
        msgbox->setWindowTitle(QCoreApplication::translate("msgbox", "msgbox", nullptr));
        btnOK->setText(QCoreApplication::translate("msgbox", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("msgbox", "\346\223\215\344\275\234\346\210\220\345\212\237\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class msgbox: public Ui_msgbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSGBOX_H
