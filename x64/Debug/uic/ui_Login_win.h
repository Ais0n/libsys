/********************************************************************************
** Form generated from reading UI file 'Login_win.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_WIN_H
#define UI_LOGIN_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_win
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Login_account;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Login_pwd;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *Login_btnOK;
    QPushButton *Login_btnCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Login_win)
    {
        if (Login_win->objectName().isEmpty())
            Login_win->setObjectName(QString::fromUtf8("Login_win"));
        Login_win->resize(405, 163);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login_win->sizePolicy().hasHeightForWidth());
        Login_win->setSizePolicy(sizePolicy);
        Login_win->setMinimumSize(QSize(300, 150));
        widget = new QWidget(Login_win);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 351, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(label);

        Login_account = new QLineEdit(widget);
        Login_account->setObjectName(QString::fromUtf8("Login_account"));

        horizontalLayout->addWidget(Login_account);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(label_2);

        Login_pwd = new QLineEdit(widget);
        Login_pwd->setObjectName(QString::fromUtf8("Login_pwd"));
        Login_pwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(Login_pwd);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        Login_btnOK = new QPushButton(widget);
        Login_btnOK->setObjectName(QString::fromUtf8("Login_btnOK"));

        horizontalLayout_3->addWidget(Login_btnOK);

        Login_btnCancel = new QPushButton(widget);
        Login_btnCancel->setObjectName(QString::fromUtf8("Login_btnCancel"));

        horizontalLayout_3->addWidget(Login_btnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Login_win);

        QMetaObject::connectSlotsByName(Login_win);
    } // setupUi

    void retranslateUi(QDialog *Login_win)
    {
        Login_win->setWindowTitle(QCoreApplication::translate("Login_win", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Login_win", "\345\200\237\344\271\246\350\257\201\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("Login_win", "\345\257\206\347\240\201", nullptr));
        Login_btnOK->setText(QCoreApplication::translate("Login_win", "\347\231\273\345\275\225", nullptr));
        Login_btnCancel->setText(QCoreApplication::translate("Login_win", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_win: public Ui_Login_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_WIN_H
