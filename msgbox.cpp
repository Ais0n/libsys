#include "msgbox.h"

msgbox::msgbox(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(
		ui.btnOK, SIGNAL(clicked(bool)), this, SLOT(onBtnOKClicked(bool))
	);
}

msgbox::~msgbox()
{
}

int msgbox::onBtnOKClicked(bool clicked)
{
	accept();
	return 0;
}

void msgbox::setlabel(bool ok)
{
	if (ok)ui.label->setText(QString::fromLocal8Bit("操作成功！"));
	else ui.label->setText(QString::fromLocal8Bit("操作失败！"));
}

void msgbox::setlabelstring(QString qs)
{
	ui.label->setText(qs);
}