#include "Del_win.h"

Del_win::Del_win(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(
		ui.btnOK, SIGNAL(clicked(bool)), this, SLOT(OnBtnOKClicked(bool))
	);
	connect(
		ui.btnCancel, SIGNAL(clicked(bool)), this, SLOT(OnBtnCancelClicked(bool))
	);
}

Del_win::~Del_win()
{
}

int Del_win::OnBtnOKClicked(bool clicked)
{
	accept();
	return 0;
}
int Del_win::OnBtnCancelClicked(bool clicked)
{
	reject();
	return 0;
}

void Del_win::set_label_num(int num)
{
	ui.del_label_num->setText(QString::number(num));
}