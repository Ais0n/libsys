/********************************************************************************
** Form generated from reading UI file 'Del_win.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_WIN_H
#define UI_DEL_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Del_win
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *del_label_num;
    QLabel *label_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Del_win)
    {
        if (Del_win->objectName().isEmpty())
            Del_win->setObjectName(QString::fromUtf8("Del_win"));
        Del_win->resize(416, 204);
        widget = new QWidget(Del_win);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 60, 261, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        del_label_num = new QLabel(widget);
        del_label_num->setObjectName(QString::fromUtf8("del_label_num"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(del_label_num->sizePolicy().hasHeightForWidth());
        del_label_num->setSizePolicy(sizePolicy);
        del_label_num->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(del_label_num);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        widget1 = new QWidget(Del_win);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 130, 289, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnOK = new QPushButton(widget1);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout_2->addWidget(btnOK);

        btnCancel = new QPushButton(widget1);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_2->addWidget(btnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        retranslateUi(Del_win);

        QMetaObject::connectSlotsByName(Del_win);
    } // setupUi

    void retranslateUi(QDialog *Del_win)
    {
        Del_win->setWindowTitle(QCoreApplication::translate("Del_win", "\350\255\246\345\221\212", nullptr));
        label->setText(QCoreApplication::translate("Del_win", "\346\202\250\347\241\256\345\256\232\350\246\201\345\210\240\351\231\244\351\200\211\344\270\255\347\232\204", nullptr));
        del_label_num->setText(QCoreApplication::translate("Del_win", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Del_win", "\344\270\252\347\224\250\346\210\267\345\220\227\357\274\237", nullptr));
        btnOK->setText(QCoreApplication::translate("Del_win", "\347\241\256\350\256\244", nullptr));
        btnCancel->setText(QCoreApplication::translate("Del_win", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Del_win: public Ui_Del_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_WIN_H
