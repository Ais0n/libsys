#include "Login_win.h"
#include "myapi.h"
#include <iostream>
Login_win::Login_win(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.Login_btnOK, SIGNAL(clicked()), this, SLOT(OnBtnOK()));
	connect(ui.Login_btnCancel, SIGNAL(clicked()), this, SLOT(OnBtnCancel()));
}

Login_win::~Login_win()
{
}

void Login_win::OnBtnOK()
{
	usr_account = ui.Login_account->text();
	usr_pwd = ui.Login_pwd->text();
	string uaccount = usr_account.toStdString();
	string upwd = usr_pwd.toStdString();
	if (Login_API(uaccount, upwd))
	{
		accept();
	}
	else
	{
		cerr << "Wrong PassWord" << endl;
		reject();
	}
}
void Login_win::OnBtnCancel()
{
	reject();
}