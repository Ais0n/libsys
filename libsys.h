#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_libsys.h"

class libsys : public QMainWindow
{
	Q_OBJECT

public:
	libsys(QWidget* parent = Q_NULLPTR);

private slots:
	int OnBtnLoginClicked(bool checked);
	int OnBtnQueryClicked(bool checked);
	int OnBtnSearchClicked(bool checked);
	int OnBtnBorrowClicked(bool checked);
	int OnBtnBorrowOKClicked(bool checked);
	int OnBtnReturnClicked(bool checked);
	int OnBtnReturnOKClicked(bool checked);
	int OnBtnInClicked(bool checked);
	int OnBtnInOKClicked(bool checked);
	int OnBtnRecClicked(bool checked);
	int OnSearchItemRecChanged(int index);
	int OnBtnRecSearchClicked(bool checked);
	int OnBtnUsrClicked(bool checked);
	int OnBtnUsrSearchClicked(bool checked);
	int OnBtnUsrAddClicked(bool checked);
	int OnBtnUsrDelClicked(bool checked);
private:
	Ui::libsysClass ui;
};
