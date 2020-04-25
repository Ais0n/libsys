#include "libsys.h"
#include <iostream>
#include "Login_win.h"
#include "reader.h"
#include "QDebug"
#include "myapi.h"
#include "msgbox.h"
#include "Del_win.h"
#include "Add_win.h"
extern reader rd;
extern book booklist[1005];
extern int book_num;
extern rec reclist[2005];
extern int rec_num;
extern reader rdlist[1005];
extern int rd_num;
libsys::libsys(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.stackedWidget->setCurrentIndex(0);
	ui.welcome->setText(QString::fromLocal8Bit("ÄúÉÐÎ´µÇÂ¼£¡"));
	ui.treeWidget->header()->setSectionResizeMode(0, QHeaderView::Stretch);
	ui.treeWidget->header()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
	ui.treeWidget->header()->setSectionResizeMode(2, QHeaderView::Stretch);
	ui.treeWidget->header()->setSectionResizeMode(3, QHeaderView::ResizeToContents);
	ui.treeWidget->header()->setSectionResizeMode(4, QHeaderView::ResizeToContents);
	ui.treeWidget->header()->setSectionResizeMode(5, QHeaderView::ResizeToContents);
	ui.treeWidget->header()->setSectionResizeMode(6, QHeaderView::Fixed); 
	ui.treeWidget->setColumnWidth(6,80);  //Ä¬ÈÏ
	ui.treeWidget->header()->setSectionResizeMode(7, QHeaderView::Fixed); 
	ui.treeWidget->setColumnWidth(7,50);  //Ä¬ÈÏ
	ui.treeWidget_rec->header()->setSectionResizeMode(4, QHeaderView::Stretch);
	ui.search_item->setItemData(0, "Bid");
	ui.search_item->setItemData(1, "ISBN");
	ui.search_item->setItemData(2, "Title");
	ui.search_item->setItemData(3, "Author");
	ui.search_item->setItemData(4, "Pub");
	ui.search_item->setItemData(5, "Year");
	ui.btnQuery->setDisabled(1);
	ui.btnBorrow->setDisabled(1);
	ui.btnReturn->setDisabled(1);
	ui.btnUser->setDisabled(1);
	ui.btnRec->setDisabled(1);
	ui.btnIn->setDisabled(1);
	ui.search_item_rec->setItemData(0, "All");
	ui.search_item_rec->setItemData(1, "Aid");
	ui.search_item_rec->setItemData(2, "Bid");
	ui.search_item_rec->setItemData(3, "ISBN");
	ui.search_item_rec->setItemData(4, "Title");
	ui.search_item_rec->setItemData(5, "Author");
	ui.search_item_rec->setItemData(6, "Pub");
	ui.search_item_rec->setItemData(7, "Year");
	ui.search_item_rec->setItemData(8, "Lent_Date");
	ui.search_item_rec->setItemData(9, "Return_Date");
	ui.search_item_rec->setItemData(10, "Rid");
	ui.search_item_usr->setItemData(0, "Aid");
	ui.search_item_usr->setItemData(1, "Name");
	connect(
		ui.btnLogin, SIGNAL(clicked(bool)), this, SLOT(OnBtnLoginClicked(bool))
	);
	connect(
		ui.btnQuery, SIGNAL(clicked(bool)), this, SLOT(OnBtnQueryClicked(bool))
	);
	connect(
		ui.btnsearch, SIGNAL(clicked(bool)), this, SLOT(OnBtnSearchClicked(bool))
	);
	connect(
		ui.btnBorrow, SIGNAL(clicked(bool)), this, SLOT(OnBtnBorrowClicked(bool))
	);
	connect(
		ui.btnBorrowOK, SIGNAL(clicked(bool)), this, SLOT(OnBtnBorrowOKClicked(bool))
	);
	connect(
		ui.btnReturn, SIGNAL(clicked(bool)), this, SLOT(OnBtnReturnClicked(bool))
	);
	connect(
		ui.btnReturnOK, SIGNAL(clicked(bool)), this, SLOT(OnBtnReturnOKClicked(bool))
	);
	connect(
		ui.btnIn, SIGNAL(clicked(bool)), this, SLOT(OnBtnInClicked(bool))
	);
	connect(
		ui.btnInOK, SIGNAL(clicked(bool)), this, SLOT(OnBtnInOKClicked(bool))
	);
	connect(
		ui.btnRec, SIGNAL(clicked(bool)), this, SLOT(OnBtnRecClicked(bool))
	);
	connect(
		ui.search_item_rec, SIGNAL(currentIndexChanged(int)), this, SLOT(OnSearchItemRecChanged(int))
	);
	connect(
		ui.btnsearch_rec, SIGNAL(clicked(bool)), this, SLOT(OnBtnRecSearchClicked(bool))
	);
	connect(
		ui.btnUser, SIGNAL(clicked(bool)), this, SLOT(OnBtnUsrClicked(bool))
	);
	connect(
		ui.btnsearch_usr, SIGNAL(clicked(bool)), this, SLOT(OnBtnUsrSearchClicked(bool))
	);
	connect(
		ui.btnAdd, SIGNAL(clicked(bool)), this, SLOT(OnBtnUsrAddClicked(bool))
	);
	connect(
		ui.btnDel, SIGNAL(clicked(bool)), this, SLOT(OnBtnUsrDelClicked(bool))
	);
}

int libsys::OnBtnLoginClicked(bool checked)
{
	ui.stackedWidget->setCurrentIndex(0);
	ui.btnQuery->setDisabled(1);
	ui.btnBorrow->setDisabled(1);
	ui.btnReturn->setDisabled(1);
	ui.btnUser->setDisabled(1);
	ui.btnRec->setDisabled(1);
	ui.btnIn->setDisabled(1);
	ui.welcome->setText(QString::fromLocal8Bit("ÄúÉÐÎ´µÇÂ¼£¡"));
	ui.btnLogin->setText(QString::fromLocal8Bit("µÇÂ¼"));
	Login_win lg(this);
	int ret = lg.exec();
	if (ret == QDialog::Accepted)
	{
		wstring sstr = L"»¶Ó­Äú" + rd.name + L"£¡ÄúµÄ½èÊéÖ¤ºÅÊÇ" + QString::fromStdString(rd.aid).toStdWString();
		QString str = QString::fromStdWString(sstr);
		ui.welcome->setText(str);
		ui.btnLogin->setText(QString::fromLocal8Bit("×¢Ïú"));
		ui.btnQuery->setDisabled(0);
		if (rd.auth == "admin")
		{
			ui.btnBorrow->setDisabled(0);
			ui.btnReturn->setDisabled(0);
			ui.btnUser->setDisabled(0);
			ui.btnRec->setDisabled(0);
			ui.btnIn->setDisabled(0);
		}
	}
	return 0;
}

int libsys::OnBtnQueryClicked(bool checked)
{
	if (ui.stackedWidget->currentIndex() != 1)
	{
		ui.search_item->setCurrentIndex(0);
		ui.search_content->setText("");
		ui.cbxContent->setCheckState(Qt::CheckState::Unchecked);
		ui.treeWidget->clear();
	}
	ui.stackedWidget->setCurrentIndex(1);
	return 0;
}

int libsys::OnBtnSearchClicked(bool checked)
{
	ui.treeWidget->clear();
	if (ui.search_content->text() == NULL)
	{
		qDebug() << "Trivial Query";
		return 0;
	}
	QString sitem = ui.search_item->itemData(ui.search_item->currentIndex()).toString();
	QString scontent = ui.search_content->text();
	bool sok = ui.cbxContent->checkState();
	Query_API(sitem.toStdWString(), scontent.toStdWString(), sok);
	for (int i = 0; i < book_num; i++)
	{
		QTreeWidgetItem* item = (QTreeWidgetItem*)new QTreeWidgetItem();
		item->setText(0, QString::fromStdString(booklist[i].Bid));
		item->setText(1, QString::fromStdString(booklist[i].ISBN));
		item->setText(2, QString::fromStdWString(booklist[i].Title));
		item->setText(3, QString::fromStdWString(booklist[i].Author));
		item->setText(4, QString::fromStdWString(booklist[i].Pub));
		item->setText(5, QString::number(booklist[i].Year));
		item->setText(6, QString::number(booklist[i].Total));
		item->setText(7, QString::number(booklist[i].Storage));
		ui.treeWidget->addTopLevelItem(item);
	}
	return 0;
}

int libsys::OnBtnBorrowClicked(bool)
{
	ui.stackedWidget->setCurrentIndex(2);
	ui.borrow_a->setText("");
	ui.borrow_b->setText("");
	ui.borrow_date->setDate(QDate::currentDate());
	return 0;
}

int libsys::OnBtnBorrowOKClicked(bool checked)
{
	QString borrow_aid = ui.borrow_a->text();
	QString borrow_bid = ui.borrow_b->text();
	QString borrow_date = ui.borrow_date->date().toString("yyyy-MM-dd");
	bool ret = Borrow_API(borrow_aid.toStdString(), borrow_bid.toStdString(), borrow_date.toStdString());
	msgbox qm;
	qm.setlabel(ret);
	qm.exec();
	return 0;
}

int libsys::OnBtnReturnClicked(bool)
{
	ui.stackedWidget->setCurrentIndex(3);
	ui.return_a->setText("");
	ui.return_b->setText("");
	ui.return_r->setText("");
	ui.return_date->setDate(QDate::currentDate());
	return 0;
}

int libsys::OnBtnReturnOKClicked(bool checked)
{
	QString return_aid = ui.return_a->text();
	QString return_bid = ui.return_b->text();
	QString return_rid = ui.return_r->text();
	QString return_date = ui.return_date->date().toString("yyyy-MM-dd");
	bool ret = Return_API(return_aid.toStdString(), return_bid.toStdString(), return_rid.toStdString(),return_date.toStdString());
	msgbox qm;
	qm.setlabel(ret);
	qm.exec();
	return 0;
}

int libsys::OnBtnInClicked(bool)
{
	ui.stackedWidget->setCurrentIndex(4);
	ui.InBid->setText("");
	ui.InISBN->setText("");
	ui.InTitle->setText("");
	ui.InAuthor->setText("");
	ui.InPub->setText("");
	ui.InYear->setText("");
	ui.InCnt->setText("");
	return 0;
}

int libsys::OnBtnInOKClicked(bool checked)
{
	QString InBid = ui.InBid->text();
	QString InTitle = ui.InTitle->text();
	QString InYear = ui.InYear->text();
	QString InISBN = ui.InISBN->text();
	QString InAuthor = ui.InAuthor->text();
	QString InPub = ui.InPub->text();
	QString InCnt = ui.InCnt->text();
	bool ret = In_API(InBid.toStdWString(), InISBN.toStdWString(), InTitle.toStdWString(), InAuthor.toStdWString(), InPub.toStdWString(), InYear.toStdWString(), InCnt.toStdWString());
	msgbox qm;
	qm.setlabel(ret);
	qm.exec();
	return 0;
}

int libsys::OnBtnRecClicked(bool checked)
{
	if (ui.stackedWidget->currentIndex() != 5)
	{
		ui.search_item_rec->setCurrentIndex(0);
		ui.search_content_rec->setText("");
		if (ui.search_item_rec->currentIndex() == 0)
		{
			ui.search_content_rec->clear();
			ui.search_content_rec->setDisabled(1);
		}
		else
		{
			ui.search_content_rec->setDisabled(0);
		}
		ui.treeWidget_rec->clear();
	}
	ui.stackedWidget->setCurrentIndex(5);
	return 0;
}

int libsys::OnSearchItemRecChanged(int index)
{
	if (index == 0)
	{
		ui.search_content_rec->setDisabled(1);
	}
	else
	{
		ui.search_content_rec->setDisabled(0);
	}
	return 0;
}

int libsys::OnBtnRecSearchClicked(bool checked)
{
	ui.treeWidget_rec->clear();
	if (ui.search_item_rec->currentIndex()!=0&&ui.search_content_rec->text() == NULL)
	{
		qDebug() << "Trivial Query";
		return 0;
	}
	QString sitem = ui.search_item_rec->itemData(ui.search_item_rec->currentIndex()).toString();
	QString scontent;
	if (ui.search_item_rec->currentIndex() == 0)scontent = "";
	else scontent=ui.search_content_rec->text();
	Rec_API(sitem.toStdWString(), scontent.toStdWString());
	for (int i = 0; i < rec_num; i++)
	{
		QTreeWidgetItem* item = (QTreeWidgetItem*)new QTreeWidgetItem();
		item->setText(0, QString::fromStdString(reclist[i].Rid));
		item->setText(1, QString::fromStdString(reclist[i].Aid));
		item->setText(2, QString::fromStdString(reclist[i].Bid));
		item->setText(3, QString::fromStdString(reclist[i].ISBN));
		item->setText(4, QString::fromStdWString(reclist[i].Title));
		item->setText(5, QString::fromStdWString(reclist[i].Author));
		item->setText(6, QString::fromStdWString(reclist[i].Pub));
		item->setText(7, QString::number(reclist[i].Year));
		item->setText(8, QString::fromStdString(reclist[i].Lent_Date));
		item->setText(9, QString::fromStdString(reclist[i].Return_Date));
		ui.treeWidget_rec->addTopLevelItem(item);
	}
	return 0;
}

int libsys::OnBtnUsrClicked(bool checked)
{
	if (ui.stackedWidget->currentIndex() != 6)
	{
		ui.search_item_usr->setCurrentIndex(0);
		ui.search_content_usr->setText("");
		ui.treeWidget_usr->clear();
	}
	ui.stackedWidget->setCurrentIndex(6);
	return 0;
}

int libsys::OnBtnUsrSearchClicked(bool checked)
{
	ui.treeWidget_usr->clear();
	if (ui.search_content_usr->text() == NULL)
	{
		qDebug() << "Trivial Query";
		return 0;
	}
	QString sitem = ui.search_item_usr->itemData(ui.search_item_usr->currentIndex()).toString();
	QString scontent = ui.search_content_usr->text();
	Usr_API(sitem.toStdWString(), scontent.toStdWString());
	for (int i = 0; i < rd_num; i++)
	{
		QTreeWidgetItem* item = (QTreeWidgetItem*)new QTreeWidgetItem();
		item->setText(1, QString::fromStdString(rdlist[i].aid));
		item->setText(2, QString::fromStdWString(rdlist[i].name));
		item->setText(3, QString::fromStdString(rdlist[i].auth));
		ui.treeWidget_usr->addTopLevelItem(item);
		QCheckBox* usr_cbx = new QCheckBox();
		ui.treeWidget_usr->setItemWidget(item, 0, usr_cbx);
	}
	return 0;
}
int libsys::OnBtnUsrDelClicked(bool checked)
{
	int cnt = ui.treeWidget_usr->topLevelItemCount();
//	assert(cnt == rd_num);
	int del_num = 0;
	for (int i = 0; i < cnt; i++)
	{
		QTreeWidgetItem* item = ui.treeWidget_usr->topLevelItem(i);
		QCheckBox* cbx_del_usr = (QCheckBox*)ui.treeWidget_usr->itemWidget(item, i);
		if (cbx_del_usr->isChecked())
		{
			del_num++;
		}
	}
	if (del_num == 0)return 0;
	Del_win dlwin(this);
	dlwin.set_label_num(del_num);
	int ret = dlwin.exec();
	if (ret == 0)return 0;
	del_num = 0;
	QString scontent;
	for (int i = 0; i < cnt; i++)
	{
		QTreeWidgetItem* item = ui.treeWidget_usr->topLevelItem(i);
		QCheckBox* cbx_del_usr = (QCheckBox*)ui.treeWidget_usr->itemWidget(item, 0);
		if (cbx_del_usr->isChecked())
		{
			scontent = item->text(1);
			ret &= Del_API(scontent.toStdString());
			if (!ret) break;
			del_num ++;
		}
	}
	if (ret)
	{
		msgbox mbx(this);
		mbx.setlabel(true);
		mbx.exec();
	}
	else
	{
		msgbox mbx(this);
		mbx.setlabelstring(QString::fromLocal8Bit("²Ù×÷Ê§°Ü£¡¹²É¾³ý")+del_num+QString::fromLocal8Bit("Ìõ!"));
		mbx.exec();
	}
	return 0;
}
int libsys::OnBtnUsrAddClicked(bool checked)
{
	Add_win addwin;
	addwin.exec();
	return 0;
}