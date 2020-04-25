#include "Add_win.h"
#include "myapi.h"
#include "msgbox.h"
Add_win::Add_win(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.add_auth->setItemData(0, "user");
	ui.add_auth->setItemData(1, "admin");
	connect(
		ui.btnOK, SIGNAL(clicked(bool)), this, SLOT(OnBtnOKClicked(bool))
	);
	connect(
		ui.btnCancel, SIGNAL(clicked(bool)), this, SLOT(OnBtnCancelClicked(bool))
	);
}

Add_win::~Add_win()
{
}

int Add_win::OnBtnOKClicked(bool clicked)
{
	QString sname = ui.add_name->text();
	QString spwd = ui.add_pwd->text();
	QString sauth = ui.add_auth->itemData(ui.add_auth->currentIndex()).toString();
	accept();
	int ret = Add_API(sname.toStdWString(),spwd.toStdWString(),sauth.toStdWString());
	msgbox msg;
	msg.setlabel(ret);
	msg.exec();
	return 0;
}
int Add_win::OnBtnCancelClicked(bool clicked)
{
	reject();
	return 0;
}