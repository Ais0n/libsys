#include "libsys.h"
#include "Login_win.h"
#include <QtWidgets/QApplication>
#include <cstring>
#include "reader.h"
#include "msgbox.h"
using namespace std;
reader rd;
book booklist[1005];
int book_num;
rec reclist[2005];
int rec_num;
reader rdlist[1005];
int rd_num;
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	libsys w;
	w.show();
	//msgbox w;
	//w.exec();
	//Login_win w;
	//w.show();
	return a.exec();
}
