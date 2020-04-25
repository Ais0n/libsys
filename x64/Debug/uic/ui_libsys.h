/********************************************************************************
** Form generated from reading UI file 'libsys.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBSYS_H
#define UI_LIBSYS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_libsysClass
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *pageWelcome;
    QLabel *welcome;
    QWidget *pageQuery;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *search_item;
    QLineEdit *search_content;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cbxContent;
    QPushButton *btnsearch;
    QTreeWidget *treeWidget;
    QWidget *pageBorrow;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *borrow_a;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *borrow_b;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QDateEdit *borrow_date;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnBorrowOK;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_4;
    QWidget *pageReturn;
    QLabel *label_13;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_17;
    QLineEdit *return_a;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_18;
    QLineEdit *return_b;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_22;
    QLineEdit *return_r;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_19;
    QDateEdit *return_date;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btnReturnOK;
    QSpacerItem *horizontalSpacer_8;
    QWidget *pageIn;
    QLabel *label_20;
    QPushButton *btnInOK;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_3;
    QLineEdit *InBid;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_4;
    QLineEdit *InISBN;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_5;
    QLineEdit *InTitle;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_6;
    QLineEdit *InAuthor;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_33;
    QSpacerItem *horizontalSpacer_33;
    QLabel *label_38;
    QLineEdit *InPub;
    QSpacerItem *horizontalSpacer_34;
    QLabel *label_39;
    QLineEdit *InYear;
    QSpacerItem *horizontalSpacer_35;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_34;
    QSpacerItem *horizontalSpacer_36;
    QLabel *label_40;
    QLineEdit *InCnt;
    QSpacerItem *horizontalSpacer_38;
    QWidget *pageRec;
    QTreeWidget *treeWidget_rec;
    QLabel *label_7;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QComboBox *search_item_rec;
    QLineEdit *search_content_rec;
    QPushButton *btnsearch_rec;
    QWidget *page;
    QLabel *label_21;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_16;
    QComboBox *search_item_usr;
    QLineEdit *search_content_usr;
    QPushButton *btnsearch_usr;
    QTreeWidget *treeWidget_usr;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnAdd;
    QSpacerItem *verticalSpacer_4;
    QToolButton *btnDel;
    QToolButton *btnLogin;
    QToolButton *btnQuery;
    QToolButton *btnBorrow;
    QToolButton *btnReturn;
    QToolButton *btnIn;
    QToolButton *btnRec;
    QToolButton *btnUser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *libsysClass)
    {
        if (libsysClass->objectName().isEmpty())
            libsysClass->setObjectName(QString::fromUtf8("libsysClass"));
        libsysClass->resize(1185, 578);
        centralWidget = new QWidget(libsysClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(200, 20, 951, 461));
        pageWelcome = new QWidget();
        pageWelcome->setObjectName(QString::fromUtf8("pageWelcome"));
        welcome = new QLabel(pageWelcome);
        welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->setGeometry(QRect(280, 130, 351, 81));
        stackedWidget->addWidget(pageWelcome);
        pageQuery = new QWidget();
        pageQuery->setObjectName(QString::fromUtf8("pageQuery"));
        label = new QLabel(pageQuery);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 0, 421, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(18);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label->setScaledContents(false);
        layoutWidget = new QWidget(pageQuery);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 70, 561, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        search_item = new QComboBox(layoutWidget);
        search_item->addItem(QString());
        search_item->addItem(QString());
        search_item->addItem(QString());
        search_item->addItem(QString());
        search_item->addItem(QString());
        search_item->addItem(QString());
        search_item->setObjectName(QString::fromUtf8("search_item"));

        horizontalLayout->addWidget(search_item);

        search_content = new QLineEdit(layoutWidget);
        search_content->setObjectName(QString::fromUtf8("search_content"));
        search_content->setMinimumSize(QSize(350, 0));

        horizontalLayout->addWidget(search_content);

        layoutWidget1 = new QWidget(pageQuery);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(530, 110, 219, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cbxContent = new QCheckBox(layoutWidget1);
        cbxContent->setObjectName(QString::fromUtf8("cbxContent"));

        horizontalLayout_2->addWidget(cbxContent);

        btnsearch = new QPushButton(layoutWidget1);
        btnsearch->setObjectName(QString::fromUtf8("btnsearch"));

        horizontalLayout_2->addWidget(btnsearch);

        treeWidget = new QTreeWidget(pageQuery);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(30, 160, 881, 281));
        treeWidget->header()->setCascadingSectionResizes(false);
        treeWidget->header()->setDefaultSectionSize(125);
        treeWidget->header()->setStretchLastSection(false);
        stackedWidget->addWidget(pageQuery);
        pageBorrow = new QWidget();
        pageBorrow->setObjectName(QString::fromUtf8("pageBorrow"));
        layoutWidget2 = new QWidget(pageBorrow);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(250, 100, 421, 251));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        borrow_a = new QLineEdit(layoutWidget2);
        borrow_a->setObjectName(QString::fromUtf8("borrow_a"));

        horizontalLayout_9->addWidget(borrow_a);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(60, 0));

        horizontalLayout_10->addWidget(label_10);

        borrow_b = new QLineEdit(layoutWidget2);
        borrow_b->setObjectName(QString::fromUtf8("borrow_b"));

        horizontalLayout_10->addWidget(borrow_b);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        borrow_date = new QDateEdit(layoutWidget2);
        borrow_date->setObjectName(QString::fromUtf8("borrow_date"));
        borrow_date->setCalendarPopup(true);
        borrow_date->setTimeSpec(Qt::LocalTime);

        horizontalLayout_11->addWidget(borrow_date);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        btnBorrowOK = new QPushButton(layoutWidget2);
        btnBorrowOK->setObjectName(QString::fromUtf8("btnBorrowOK"));

        horizontalLayout_12->addWidget(btnBorrowOK);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_12);

        layoutWidget3 = new QWidget(pageBorrow);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(340, 40, 222, 32));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(13, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setTextFormat(Qt::PlainText);
        label_12->setScaledContents(false);

        horizontalLayout_13->addWidget(label_12);

        horizontalSpacer_4 = new QSpacerItem(13, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);

        stackedWidget->addWidget(pageBorrow);
        pageReturn = new QWidget();
        pageReturn->setObjectName(QString::fromUtf8("pageReturn"));
        label_13 = new QLabel(pageReturn);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(358, 41, 180, 30));
        label_13->setFont(font);
        label_13->setTextFormat(Qt::PlainText);
        label_13->setScaledContents(false);
        widget = new QWidget(pageReturn);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 100, 411, 251));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_18->addWidget(label_17);

        return_a = new QLineEdit(widget);
        return_a->setObjectName(QString::fromUtf8("return_a"));

        horizontalLayout_18->addWidget(return_a);


        verticalLayout_4->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_18 = new QLabel(widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(60, 0));

        horizontalLayout_19->addWidget(label_18);

        return_b = new QLineEdit(widget);
        return_b->setObjectName(QString::fromUtf8("return_b"));

        horizontalLayout_19->addWidget(return_b);


        verticalLayout_4->addLayout(horizontalLayout_19);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(60, 0));

        horizontalLayout_22->addWidget(label_22);

        return_r = new QLineEdit(widget);
        return_r->setObjectName(QString::fromUtf8("return_r"));

        horizontalLayout_22->addWidget(return_r);


        verticalLayout_4->addLayout(horizontalLayout_22);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_19 = new QLabel(widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_20->addWidget(label_19);

        return_date = new QDateEdit(widget);
        return_date->setObjectName(QString::fromUtf8("return_date"));
        return_date->setCalendarPopup(true);
        return_date->setTimeSpec(Qt::LocalTime);

        horizontalLayout_20->addWidget(return_date);


        verticalLayout_4->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_7);

        btnReturnOK = new QPushButton(widget);
        btnReturnOK->setObjectName(QString::fromUtf8("btnReturnOK"));

        horizontalLayout_21->addWidget(btnReturnOK);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_21);

        stackedWidget->addWidget(pageReturn);
        pageIn = new QWidget();
        pageIn->setObjectName(QString::fromUtf8("pageIn"));
        label_20 = new QLabel(pageIn);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(358, 41, 180, 30));
        label_20->setFont(font);
        label_20->setTextFormat(Qt::PlainText);
        label_20->setScaledContents(false);
        btnInOK = new QPushButton(pageIn);
        btnInOK->setObjectName(QString::fromUtf8("btnInOK"));
        btnInOK->setGeometry(QRect(400, 400, 93, 28));
        layoutWidget4 = new QWidget(pageIn);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(80, 100, 741, 268));
        verticalLayout = new QVBoxLayout(layoutWidget4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(45, 0));

        horizontalLayout_3->addWidget(label_3);

        InBid = new QLineEdit(layoutWidget4);
        InBid->setObjectName(QString::fromUtf8("InBid"));
        InBid->setMinimumSize(QSize(220, 0));

        horizontalLayout_3->addWidget(InBid);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(45, 0));

        horizontalLayout_3->addWidget(label_4);

        InISBN = new QLineEdit(layoutWidget4);
        InISBN->setObjectName(QString::fromUtf8("InISBN"));
        InISBN->setMinimumSize(QSize(220, 0));

        horizontalLayout_3->addWidget(InISBN);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(45, 0));

        horizontalLayout_4->addWidget(label_5);

        InTitle = new QLineEdit(layoutWidget4);
        InTitle->setObjectName(QString::fromUtf8("InTitle"));
        InTitle->setMinimumSize(QSize(220, 0));

        horizontalLayout_4->addWidget(InTitle);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);

        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(45, 0));

        horizontalLayout_4->addWidget(label_6);

        InAuthor = new QLineEdit(layoutWidget4);
        InAuthor->setObjectName(QString::fromUtf8("InAuthor"));
        InAuthor->setMinimumSize(QSize(220, 0));

        horizontalLayout_4->addWidget(InAuthor);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_33);

        label_38 = new QLabel(layoutWidget4);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setMinimumSize(QSize(45, 0));

        horizontalLayout_33->addWidget(label_38);

        InPub = new QLineEdit(layoutWidget4);
        InPub->setObjectName(QString::fromUtf8("InPub"));
        InPub->setMinimumSize(QSize(220, 0));

        horizontalLayout_33->addWidget(InPub);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_34);

        label_39 = new QLabel(layoutWidget4);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setMinimumSize(QSize(45, 0));

        horizontalLayout_33->addWidget(label_39);

        InYear = new QLineEdit(layoutWidget4);
        InYear->setObjectName(QString::fromUtf8("InYear"));
        InYear->setMinimumSize(QSize(220, 0));

        horizontalLayout_33->addWidget(InYear);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_35);


        verticalLayout->addLayout(horizontalLayout_33);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_36);

        label_40 = new QLabel(layoutWidget4);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_34->addWidget(label_40);

        InCnt = new QLineEdit(layoutWidget4);
        InCnt->setObjectName(QString::fromUtf8("InCnt"));
        InCnt->setMinimumSize(QSize(220, 0));

        horizontalLayout_34->addWidget(InCnt);

        horizontalSpacer_38 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_38);


        verticalLayout->addLayout(horizontalLayout_34);

        stackedWidget->addWidget(pageIn);
        pageRec = new QWidget();
        pageRec->setObjectName(QString::fromUtf8("pageRec"));
        treeWidget_rec = new QTreeWidget(pageRec);
        treeWidget_rec->setObjectName(QString::fromUtf8("treeWidget_rec"));
        treeWidget_rec->setGeometry(QRect(30, 120, 881, 321));
        treeWidget_rec->header()->setCascadingSectionResizes(false);
        treeWidget_rec->header()->setDefaultSectionSize(125);
        treeWidget_rec->header()->setStretchLastSection(false);
        label_7 = new QLabel(pageRec);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(340, 0, 421, 71));
        label_7->setFont(font);
        label_7->setTextFormat(Qt::PlainText);
        label_7->setScaledContents(false);
        layoutWidget5 = new QWidget(pageRec);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(160, 70, 616, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_7->addWidget(label_14);

        search_item_rec = new QComboBox(layoutWidget5);
        search_item_rec->addItem(QString());
        search_item_rec->addItem(QString());
        search_item_rec->addItem(QString());
        search_item_rec->addItem(QString());
        search_item_rec->addItem(QString());
        search_item_rec->addItem(QString());
        search_item_rec->addItem(QString());
        search_item_rec->addItem(QString());
        search_item_rec->addItem(QString());
        search_item_rec->addItem(QString());
        search_item_rec->addItem(QString());
        search_item_rec->setObjectName(QString::fromUtf8("search_item_rec"));

        horizontalLayout_7->addWidget(search_item_rec);

        search_content_rec = new QLineEdit(layoutWidget5);
        search_content_rec->setObjectName(QString::fromUtf8("search_content_rec"));
        search_content_rec->setEnabled(true);
        search_content_rec->setMinimumSize(QSize(350, 0));

        horizontalLayout_7->addWidget(search_content_rec);

        btnsearch_rec = new QPushButton(layoutWidget5);
        btnsearch_rec->setObjectName(QString::fromUtf8("btnsearch_rec"));

        horizontalLayout_7->addWidget(btnsearch_rec);

        stackedWidget->addWidget(pageRec);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_21 = new QLabel(page);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(340, 0, 421, 71));
        label_21->setFont(font);
        label_21->setTextFormat(Qt::PlainText);
        label_21->setScaledContents(false);
        layoutWidget_3 = new QWidget(page);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(160, 70, 616, 30));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_14->addWidget(label_16);

        search_item_usr = new QComboBox(layoutWidget_3);
        search_item_usr->addItem(QString());
        search_item_usr->addItem(QString());
        search_item_usr->setObjectName(QString::fromUtf8("search_item_usr"));

        horizontalLayout_14->addWidget(search_item_usr);

        search_content_usr = new QLineEdit(layoutWidget_3);
        search_content_usr->setObjectName(QString::fromUtf8("search_content_usr"));
        search_content_usr->setEnabled(true);
        search_content_usr->setMinimumSize(QSize(350, 0));

        horizontalLayout_14->addWidget(search_content_usr);

        btnsearch_usr = new QPushButton(layoutWidget_3);
        btnsearch_usr->setObjectName(QString::fromUtf8("btnsearch_usr"));

        horizontalLayout_14->addWidget(btnsearch_usr);

        treeWidget_usr = new QTreeWidget(page);
        treeWidget_usr->setObjectName(QString::fromUtf8("treeWidget_usr"));
        treeWidget_usr->setGeometry(QRect(40, 120, 641, 321));
        treeWidget_usr->header()->setCascadingSectionResizes(false);
        treeWidget_usr->header()->setDefaultSectionSize(125);
        treeWidget_usr->header()->setStretchLastSection(true);
        layoutWidget6 = new QWidget(page);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(740, 180, 139, 168));
        verticalLayout_2 = new QVBoxLayout(layoutWidget6);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QToolButton(layoutWidget6);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/libsys/Resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon);
        btnAdd->setIconSize(QSize(50, 50));
        btnAdd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btnAdd);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        btnDel = new QToolButton(layoutWidget6);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        btnDel->setMinimumSize(QSize(0, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/libsys/Resources/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDel->setIcon(icon1);
        btnDel->setIconSize(QSize(50, 50));
        btnDel->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btnDel);

        stackedWidget->addWidget(page);
        btnLogin = new QToolButton(centralWidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(40, 20, 121, 71));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/libsys/Resources/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLogin->setIcon(icon2);
        btnLogin->setIconSize(QSize(70, 70));
        btnLogin->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnQuery = new QToolButton(centralWidget);
        btnQuery->setObjectName(QString::fromUtf8("btnQuery"));
        btnQuery->setGeometry(QRect(40, 90, 121, 71));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/libsys/Resources/query.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnQuery->setIcon(icon3);
        btnQuery->setIconSize(QSize(70, 70));
        btnQuery->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnBorrow = new QToolButton(centralWidget);
        btnBorrow->setObjectName(QString::fromUtf8("btnBorrow"));
        btnBorrow->setGeometry(QRect(40, 160, 121, 71));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/libsys/Resources/borrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBorrow->setIcon(icon4);
        btnBorrow->setIconSize(QSize(70, 70));
        btnBorrow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnReturn = new QToolButton(centralWidget);
        btnReturn->setObjectName(QString::fromUtf8("btnReturn"));
        btnReturn->setGeometry(QRect(40, 230, 121, 71));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/libsys/Resources/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnReturn->setIcon(icon5);
        btnReturn->setIconSize(QSize(70, 70));
        btnReturn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnIn = new QToolButton(centralWidget);
        btnIn->setObjectName(QString::fromUtf8("btnIn"));
        btnIn->setGeometry(QRect(40, 300, 121, 71));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/libsys/Resources/in.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnIn->setIcon(icon6);
        btnIn->setIconSize(QSize(70, 70));
        btnIn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnRec = new QToolButton(centralWidget);
        btnRec->setObjectName(QString::fromUtf8("btnRec"));
        btnRec->setGeometry(QRect(40, 370, 121, 71));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/libsys/Resources/rec.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRec->setIcon(icon7);
        btnRec->setIconSize(QSize(70, 70));
        btnRec->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnUser = new QToolButton(centralWidget);
        btnUser->setObjectName(QString::fromUtf8("btnUser"));
        btnUser->setGeometry(QRect(40, 440, 121, 71));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/libsys/Resources/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUser->setIcon(icon8);
        btnUser->setIconSize(QSize(70, 70));
        btnUser->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        libsysClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(libsysClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1185, 26));
        libsysClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(libsysClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        libsysClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(libsysClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        libsysClass->setStatusBar(statusBar);

        retranslateUi(libsysClass);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(libsysClass);
    } // setupUi

    void retranslateUi(QMainWindow *libsysClass)
    {
        libsysClass->setWindowTitle(QCoreApplication::translate("libsysClass", "libsys", nullptr));
        welcome->setText(QString());
        label->setText(QCoreApplication::translate("libsysClass", "\343\200\220\346\254\242\350\277\216\344\275\277\347\224\250\346\237\245\350\257\242\347\263\273\347\273\237\343\200\221", nullptr));
        label_2->setText(QCoreApplication::translate("libsysClass", "\346\220\234\347\264\242\346\235\241\344\273\266", nullptr));
        search_item->setItemText(0, QCoreApplication::translate("libsysClass", "\344\271\246\345\217\267", nullptr));
        search_item->setItemText(1, QCoreApplication::translate("libsysClass", "ISBN", nullptr));
        search_item->setItemText(2, QCoreApplication::translate("libsysClass", "\344\271\246\345\220\215", nullptr));
        search_item->setItemText(3, QCoreApplication::translate("libsysClass", "\344\275\234\350\200\205", nullptr));
        search_item->setItemText(4, QCoreApplication::translate("libsysClass", "\345\207\272\347\211\210\347\244\276", nullptr));
        search_item->setItemText(5, QCoreApplication::translate("libsysClass", "\345\207\272\347\211\210\345\271\264", nullptr));

        cbxContent->setText(QCoreApplication::translate("libsysClass", "\345\217\252\347\234\213\346\234\211\345\272\223\345\255\230\347\232\204", nullptr));
        btnsearch->setText(QCoreApplication::translate("libsysClass", "\346\220\234\347\264\242", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("libsysClass", "\345\272\223\345\255\230", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("libsysClass", "\346\200\273\350\227\217\344\271\246\351\207\217", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("libsysClass", "\345\207\272\347\211\210\345\271\264", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("libsysClass", "\345\207\272\347\211\210\347\244\276", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("libsysClass", "\344\275\234\350\200\205", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("libsysClass", "\344\271\246\345\220\215", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("libsysClass", "ISBN", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("libsysClass", "\344\271\246\345\217\267", nullptr));
        label_9->setText(QCoreApplication::translate("libsysClass", "\345\200\237\344\271\246\350\257\201\345\217\267", nullptr));
        label_10->setText(QCoreApplication::translate("libsysClass", "\344\271\246\345\217\267", nullptr));
        label_11->setText(QCoreApplication::translate("libsysClass", "\345\200\237\344\271\246\346\227\245\346\234\237", nullptr));
        btnBorrowOK->setText(QCoreApplication::translate("libsysClass", "\347\241\256\350\256\244", nullptr));
        label_12->setText(QCoreApplication::translate("libsysClass", "\343\200\220\345\233\276\344\271\246\345\200\237\351\230\205\343\200\221", nullptr));
        label_13->setText(QCoreApplication::translate("libsysClass", "\343\200\220\345\233\276\344\271\246\345\275\222\350\277\230\343\200\221", nullptr));
        label_17->setText(QCoreApplication::translate("libsysClass", "\345\200\237\344\271\246\350\257\201\345\217\267", nullptr));
        label_18->setText(QCoreApplication::translate("libsysClass", "\344\271\246\345\217\267", nullptr));
        label_22->setText(QCoreApplication::translate("libsysClass", "\350\256\260\345\275\225\345\217\267", nullptr));
        label_19->setText(QCoreApplication::translate("libsysClass", "\350\277\230\344\271\246\346\227\245\346\234\237", nullptr));
        btnReturnOK->setText(QCoreApplication::translate("libsysClass", "\347\241\256\350\256\244", nullptr));
        label_20->setText(QCoreApplication::translate("libsysClass", "\343\200\220\345\233\276\344\271\246\345\205\245\345\272\223\343\200\221", nullptr));
        btnInOK->setText(QCoreApplication::translate("libsysClass", "\347\241\256\350\256\244", nullptr));
        label_3->setText(QCoreApplication::translate("libsysClass", "\344\271\246\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("libsysClass", "ISBN", nullptr));
        label_5->setText(QCoreApplication::translate("libsysClass", "\344\271\246\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("libsysClass", "\344\275\234\350\200\205", nullptr));
        label_38->setText(QCoreApplication::translate("libsysClass", "\345\207\272\347\211\210\347\244\276", nullptr));
        label_39->setText(QCoreApplication::translate("libsysClass", "\345\207\272\347\211\210\345\271\264", nullptr));
        label_40->setText(QCoreApplication::translate("libsysClass", "\346\225\260\351\207\217", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_rec->headerItem();
        ___qtreewidgetitem1->setText(9, QCoreApplication::translate("libsysClass", "\350\277\230\344\271\246\346\227\266\351\227\264", nullptr));
        ___qtreewidgetitem1->setText(8, QCoreApplication::translate("libsysClass", "\345\200\237\344\271\246\346\227\266\351\227\264", nullptr));
        ___qtreewidgetitem1->setText(7, QCoreApplication::translate("libsysClass", "\345\207\272\347\211\210\345\271\264", nullptr));
        ___qtreewidgetitem1->setText(6, QCoreApplication::translate("libsysClass", "\345\207\272\347\211\210\347\244\276", nullptr));
        ___qtreewidgetitem1->setText(5, QCoreApplication::translate("libsysClass", "\344\275\234\350\200\205", nullptr));
        ___qtreewidgetitem1->setText(4, QCoreApplication::translate("libsysClass", "\344\271\246\345\220\215", nullptr));
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("libsysClass", "ISBN", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("libsysClass", "\344\271\246\345\217\267", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("libsysClass", "\345\200\237\344\271\246\350\257\201\345\217\267", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("libsysClass", "\350\256\260\345\275\225\345\217\267", nullptr));
        label_7->setText(QCoreApplication::translate("libsysClass", "\343\200\220\350\256\260\345\275\225\346\237\245\350\257\242\347\256\241\347\220\206\343\200\221", nullptr));
        label_14->setText(QCoreApplication::translate("libsysClass", "\346\220\234\347\264\242\346\235\241\344\273\266", nullptr));
        search_item_rec->setItemText(0, QCoreApplication::translate("libsysClass", "\345\205\250\351\203\250", nullptr));
        search_item_rec->setItemText(1, QCoreApplication::translate("libsysClass", "\345\200\237\344\271\246\350\257\201\345\217\267", nullptr));
        search_item_rec->setItemText(2, QCoreApplication::translate("libsysClass", "\344\271\246\345\217\267", nullptr));
        search_item_rec->setItemText(3, QCoreApplication::translate("libsysClass", "ISBN", nullptr));
        search_item_rec->setItemText(4, QCoreApplication::translate("libsysClass", "\344\271\246\345\220\215", nullptr));
        search_item_rec->setItemText(5, QCoreApplication::translate("libsysClass", "\344\275\234\350\200\205", nullptr));
        search_item_rec->setItemText(6, QCoreApplication::translate("libsysClass", "\345\207\272\347\211\210\347\244\276", nullptr));
        search_item_rec->setItemText(7, QCoreApplication::translate("libsysClass", "\345\207\272\347\211\210\345\271\264", nullptr));
        search_item_rec->setItemText(8, QCoreApplication::translate("libsysClass", "\345\200\237\344\271\246\346\227\266\351\227\264", nullptr));
        search_item_rec->setItemText(9, QCoreApplication::translate("libsysClass", "\350\277\230\344\271\246\346\227\266\351\227\264", nullptr));
        search_item_rec->setItemText(10, QCoreApplication::translate("libsysClass", "\350\256\260\345\275\225\345\217\267", nullptr));

        btnsearch_rec->setText(QCoreApplication::translate("libsysClass", "\346\220\234\347\264\242", nullptr));
        label_21->setText(QCoreApplication::translate("libsysClass", "\343\200\220\350\257\201\344\273\266\347\256\241\347\220\206\343\200\221", nullptr));
        label_16->setText(QCoreApplication::translate("libsysClass", "\346\220\234\347\264\242\346\235\241\344\273\266", nullptr));
        search_item_usr->setItemText(0, QCoreApplication::translate("libsysClass", "\345\200\237\344\271\246\350\257\201\345\217\267", nullptr));
        search_item_usr->setItemText(1, QCoreApplication::translate("libsysClass", "\345\247\223\345\220\215", nullptr));

        btnsearch_usr->setText(QCoreApplication::translate("libsysClass", "\346\220\234\347\264\242", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget_usr->headerItem();
        ___qtreewidgetitem2->setText(3, QCoreApplication::translate("libsysClass", "\346\235\203\351\231\220", nullptr));
        ___qtreewidgetitem2->setText(2, QCoreApplication::translate("libsysClass", "\345\247\223\345\220\215", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("libsysClass", "\345\200\237\344\271\246\350\257\201\345\217\267", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("libsysClass", "\351\200\211\346\213\251", nullptr));
        btnAdd->setText(QCoreApplication::translate("libsysClass", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        btnDel->setText(QCoreApplication::translate("libsysClass", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        btnLogin->setText(QCoreApplication::translate("libsysClass", "\347\231\273\345\275\225", nullptr));
        btnQuery->setText(QCoreApplication::translate("libsysClass", "\346\237\245\350\257\242", nullptr));
        btnBorrow->setText(QCoreApplication::translate("libsysClass", "\345\200\237\344\271\246", nullptr));
        btnReturn->setText(QCoreApplication::translate("libsysClass", "\350\277\230\344\271\246", nullptr));
        btnIn->setText(QCoreApplication::translate("libsysClass", "\345\205\245\345\272\223", nullptr));
        btnRec->setText(QCoreApplication::translate("libsysClass", "\350\256\260\345\275\225\n"
"\347\256\241\347\220\206", nullptr));
        btnUser->setText(QCoreApplication::translate("libsysClass", "\350\257\201\344\273\266\n"
"\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class libsysClass: public Ui_libsysClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBSYS_H
