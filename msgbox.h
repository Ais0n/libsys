#pragma once

#include <QDialog>
#include "ui_msgbox.h"

class msgbox : public QDialog
{
	Q_OBJECT

public:
	msgbox(QWidget *parent = Q_NULLPTR);
	~msgbox();
	void setlabel(bool ok);
	void msgbox::setlabelstring(QString qs);

private slots:
	int onBtnOKClicked(bool clicked);

private:
	Ui::msgbox ui;
};
