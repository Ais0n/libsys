#pragma once

#include <QDialog>
#include "ui_Add_win.h"

class Add_win : public QDialog
{
	Q_OBJECT

public:
	Add_win(QWidget *parent = Q_NULLPTR);
	~Add_win();

private slots:
	int OnBtnOKClicked(bool clicked);
	int OnBtnCancelClicked(bool clicked);

private:
	Ui::Add_win ui;
};
