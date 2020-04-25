#pragma once

#include <QDialog>
#include "ui_Del_win.h"

class Del_win : public QDialog
{
	Q_OBJECT

public:
	Del_win(QWidget *parent = Q_NULLPTR);
	~Del_win();
	void set_label_num(int num);

private slots:
	int OnBtnOKClicked(bool clicked);
	int OnBtnCancelClicked(bool clicked);
private:
	Ui::Del_win ui;
};
