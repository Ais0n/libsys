#pragma once

#include <QDialog>
#include "ui_Login_win.h"

class Login_win : public QDialog
{
	Q_OBJECT

public:
	Login_win(QWidget *parent = Q_NULLPTR);
	~Login_win();

private slots:
	void OnBtnOK();
	void OnBtnCancel();

private:
	Ui::Login_win ui;

public:
	QString usr_account;
	QString usr_pwd;
};
