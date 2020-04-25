/********************************************************************************
** Form generated from reading UI file 'Add_win.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_WIN_H
#define UI_ADD_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_win
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *add_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *add_pwd;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *add_auth;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Add_win)
    {
        if (Add_win->objectName().isEmpty())
            Add_win->setObjectName(QString::fromUtf8("Add_win"));
        Add_win->resize(399, 292);
        widget = new QWidget(Add_win);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 341, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        add_name = new QLineEdit(widget);
        add_name->setObjectName(QString::fromUtf8("add_name"));

        horizontalLayout_2->addWidget(add_name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        add_pwd = new QLineEdit(widget);
        add_pwd->setObjectName(QString::fromUtf8("add_pwd"));

        horizontalLayout_3->addWidget(add_pwd);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        add_auth = new QComboBox(widget);
        add_auth->addItem(QString());
        add_auth->addItem(QString());
        add_auth->setObjectName(QString::fromUtf8("add_auth"));

        horizontalLayout_4->addWidget(add_auth);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOK = new QPushButton(widget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Add_win);

        QMetaObject::connectSlotsByName(Add_win);
    } // setupUi

    void retranslateUi(QDialog *Add_win)
    {
        Add_win->setWindowTitle(QCoreApplication::translate("Add_win", "Add_win", nullptr));
        label_2->setText(QCoreApplication::translate("Add_win", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("Add_win", "\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("Add_win", "\346\235\203\351\231\220", nullptr));
        add_auth->setItemText(0, QCoreApplication::translate("Add_win", "\347\224\250\346\210\267", nullptr));
        add_auth->setItemText(1, QCoreApplication::translate("Add_win", "\347\256\241\347\220\206\345\221\230", nullptr));

        btnOK->setText(QCoreApplication::translate("Add_win", "\347\241\256\350\256\244", nullptr));
        btnCancel->setText(QCoreApplication::translate("Add_win", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_win: public Ui_Add_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_WIN_H
