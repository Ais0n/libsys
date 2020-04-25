// 
#include "iostream"
#include "iomanip"
#include "windows.h"
#include <tchar.h>
#include <cstring>
#include "reader.h"
#include "malloc.h"
#include "QDebug"
using namespace std;
#import "c:\Program Files\Common Files\System\ado\msado15.dll" no_namespace rename("EOF","EndOfFile")

class ACC
{
public:
	char snum[10]; //学号 
	char sname[10]; //姓名 
	char ssex[2]; //姓别 
	long sage; //年龄 
	char smajor[20]; //专业 
public:
	ACC() {}
	~ACC(){}
};

extern reader rd;
extern book booklist[1005];
extern int book_num;
extern rec reclist[2005];
extern int rec_num;
extern reader rdlist[1005];
extern int rd_num;
bool Login_API(string usr_account, string usr_pwd)
{
	//初始化
	::CoInitialize(NULL);
	//记录集声明
	_RecordsetPtr m_pRecordset("ADODB.Recordset");
	//连接声明
	_ConnectionPtr m_pConnection("ADODB.Connection");
	//SQL指令定义
	string comm = "select * from Account where Aid='" + usr_account+"'";
	_bstr_t bstrSQL((char*)&comm[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		//使用ADO原生的Open方法建立连接
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		//创建记录集
		m_pRecordset.CreateInstance(_uuidof(Recordset));
		//取得表中的记录
		m_pRecordset->Open(bstrSQL, m_pConnection.GetInterfacePtr(), adOpenDynamic, adLockOptimistic, adCmdText);
		_variant_t vspwd;
		if (m_pRecordset->EndOfFile)
		{
			cerr << "Account Not Found" << endl;
			return 0;
		}
		else
		{
			//获得Pwd字段
			vspwd = m_pRecordset->GetCollect("Pwd");
			string realpwd = (char*)(_bstr_t)vspwd;
			//比较用户输入与真实密码是否一致
			if (realpwd == usr_pwd)
			{
				rd.aid = usr_account;
				rd.auth = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("Auth")));
				rd.name = (wchar_t*)(_bstr_t)m_pRecordset->GetCollect("Name");
				return 1;
			}
			else
			{
				cerr << "Password Wrong" << endl;
				return 0;
			}
		}
	}
	catch (_com_error c)
	{
		cerr << "\nERROR:" << (char*)c.Description();
	}
	//关闭连接
	if (m_pConnection->State)
		m_pConnection->Close();

	::CoUninitialize();
	return 1;
}

void Query_API(wstring sitem, wstring scontent, bool sok)
{
	::CoInitialize(NULL);
	_RecordsetPtr m_pRecordset("ADODB.Recordset");
	_ConnectionPtr m_pConnection("ADODB.Connection");
	wstring comm = L"select * from Book where " + sitem + L" = N'" + scontent + L"'";
	if (sok)comm = comm + L" and storage > 0";
	_bstr_t bstrSQL((wchar_t*)&comm[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		//m_pConnection->Open(strConnect, "", "", adModeUnknown);
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		//创建记录集
		m_pRecordset.CreateInstance(_uuidof(Recordset));
		//取得表中的记录
		m_pRecordset->Open(bstrSQL, m_pConnection.GetInterfacePtr(), adOpenDynamic, adLockOptimistic, adCmdText);
		if (m_pRecordset->EndOfFile)
		{
			qDebug() << "Book Not Found" << endl;
			book_num = 0;
		}
		else
		{
			for (book_num=0;!m_pRecordset->EndOfFile;book_num++)
			{
				string str = LPSTR(_bstr_t(m_pRecordset->GetCollect("Bid")));
				booklist[book_num].Bid = str;
				booklist[book_num].ISBN = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("ISBN")));
				booklist[book_num].Author = (wchar_t*)(_bstr_t)m_pRecordset->GetCollect("Author");
				booklist[book_num].Year = m_pRecordset->GetCollect("Year");
				booklist[book_num].Pub = (wchar_t*)(_bstr_t)m_pRecordset->GetCollect("Pub");
				booklist[book_num].Title = (wchar_t*)(_bstr_t)m_pRecordset->GetCollect("Title");
				booklist[book_num].Total = m_pRecordset->GetCollect("Total");
				booklist[book_num].Storage = m_pRecordset->GetCollect("Storage");
				m_pRecordset->MoveNext();
			}
		}
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
	}
	if (m_pConnection->State)
		m_pConnection->Close();

	::CoUninitialize();
}

bool Borrow_API(string borrow_aid, string borrow_bid, string borrow_date)
{
	bool flag = 0;
	::CoInitialize(NULL);
	_RecordsetPtr m_pRecordset("ADODB.Recordset");
	_ConnectionPtr m_pConnection("ADODB.Connection");

	string comm2 = "select rec_num+1 as tmp from Count";
	_bstr_t bstrSQL2((char*)&comm2[0]);
	string rec_num;
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		//创建记录集
		m_pRecordset.CreateInstance(_uuidof(Recordset));
		//取得表中的记录
		m_pRecordset->Open(bstrSQL2, m_pConnection.GetInterfacePtr(), adOpenDynamic, adLockOptimistic, adCmdText);
		if (m_pRecordset->EndOfFile)
		{
			qDebug() << "Counter Not Found" << endl;
		}
		rec_num = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("tmp")));
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		if (m_pConnection->State)
			m_pConnection->Close();

		::CoUninitialize();
		return flag = 0;
	}

	string comm3 = "insert into Record(Rid,Aid,Bid,Lent_Date,Return_Date) Values(" + rec_num + ",'" + borrow_aid + "','" + borrow_bid + "','" + borrow_date + "',null)";
	_bstr_t bstrSQL3((char*)&comm3[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		_variant_t num_influenced;
		m_pConnection->Execute(bstrSQL3, &num_influenced, adCmdText);
		flag = 1;
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		if (m_pConnection->State)
			m_pConnection->Close();

		::CoUninitialize();
		return flag = 0;
	}

	string comm4 = "update Book set Storage = Storage - 1 where Bid = '" + borrow_bid + "'";
	_bstr_t bstrSQL4((char*)&comm4[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		_variant_t num_influenced;
		m_pConnection->Execute(bstrSQL4, &num_influenced, adCmdText);
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		if (m_pConnection->State)
			m_pConnection->Close();

		::CoUninitialize();
		return flag = 0;
	}



	string comm1 = "update Count set rec_num=rec_num+1";
	_bstr_t bstrSQL1((char*)&comm1[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		_variant_t num_influenced;
		m_pConnection->Execute(bstrSQL1, &num_influenced, adCmdText);
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		if (m_pConnection->State)
			m_pConnection->Close();

		::CoUninitialize();
		return flag = 0;
	}

	if (m_pConnection->State)
		m_pConnection->Close();

	::CoUninitialize();
	return flag;
}

bool Return_API(string return_aid, string return_bid, string return_rid, string return_date)
{
	bool flag = 0;
	::CoInitialize(NULL);
	_ConnectionPtr m_pConnection("ADODB.Connection");
	string comm = "update Record set Return_Date = '" + return_date + "' where Aid = '" + return_aid + "' and Bid = '" + return_bid + "' and Rid='" + return_rid + "' and Return_Date is NULL";
	_bstr_t bstrSQL((char*)&comm[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		_variant_t num_influenced;
		m_pConnection->Execute(bstrSQL, &num_influenced, adCmdText);
		int qq= _ttoi((LPCTSTR)(_bstr_t)num_influenced);
		if (qq != 0)flag = 1;
		else flag = 0;
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		flag = 0;
	}
	if (!flag)
	{
		if (m_pConnection->State)
			m_pConnection->Close();

		::CoUninitialize();
		return flag;
	}

	string comm2 = "update Book set storage=storage+1 where Bid = '" + return_bid + "'";
	_bstr_t bstrSQL2((char*)&comm2[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		_variant_t num_influenced;
		m_pConnection->Execute(bstrSQL2, &num_influenced, adCmdText);
		flag = 1;
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		flag = 0;
	}
	if (m_pConnection->State)
		m_pConnection->Close();

	::CoUninitialize();
	return flag;
}

bool In_API(wstring InBid, wstring InISBN, wstring InTitle, wstring InAuthor, wstring InPub, wstring InYear, wstring InCnt)
{
	bool flag = 0, in_mode = 0;
	::CoInitialize(NULL);
	_RecordsetPtr m_pRecordset("ADODB.Recordset");
	_ConnectionPtr m_pConnection("ADODB.Connection");
	wstring comm=L"select * from Book where Bid = '" + InBid + L"'";
	_bstr_t bstrSQL((wchar_t*)&comm[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		//创建记录集
		m_pRecordset.CreateInstance(_uuidof(Recordset));
		//取得表中的记录
		m_pRecordset->Open(bstrSQL, m_pConnection.GetInterfacePtr(), adOpenDynamic, adLockOptimistic, adCmdText);
		if (m_pRecordset->EndOfFile)
		{
			in_mode = 0;//插入
		}
		else in_mode = 1;//更新
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		flag = 0;
		if (m_pConnection->State)
			m_pConnection->Close();

		::CoUninitialize();
		return flag;
	}
	if (in_mode)
		comm = L"update Book set Storage=Storage+" + InCnt + L", Total=Total+" + InCnt +
		L" where Bid = '" + InBid + L"' and ISBN = '" + InISBN + L"' and Title = N'" + InTitle +
		L"' and Author = N'" + InAuthor + L"' and Pub=N'" + InPub + L"' and Year=" + InYear;
	else
		comm = L"insert into Book(Bid,ISBN,Title,Author,Pub,Year,Total,Storage) values('" + InBid +
		L"','" + InISBN + L"',N'" + InTitle + L"',N'" + InAuthor + L"',N'" + InPub + L"'," + InYear
		+ L"," + InCnt + L"," + InCnt + L")";
	_bstr_t bstrSQL2((wchar_t*)&comm[0]);
	try {
		_variant_t num_influenced;
		m_pConnection->Execute(bstrSQL2, &num_influenced, adCmdText);
		flag = 1;
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		flag = 0;
	}
	if (m_pConnection->State)
		m_pConnection->Close();

	::CoUninitialize();
	return flag;
}

void Rec_API(wstring sitem, wstring scontent)
{
	::CoInitialize(NULL);
	_RecordsetPtr m_pRecordset("ADODB.Recordset");
	_ConnectionPtr m_pConnection("ADODB.Connection");
	wstring comm;
	if (sitem == L"All")
	{
		comm = L"select * from Book join Record on Book.Bid=Record.Bid";
	}
	else if(sitem != L"Bid")
	{
		comm = L"select * from Book join Record on Book.Bid=Record.Bid where " + sitem + L" = N'" + scontent + L"'";
	}
	else
	{
		comm = L"select * from Book join Record on Book.Bid=Record.Bid where Book.Bid = '" + scontent + L"'";
	}
	_bstr_t bstrSQL((wchar_t*)&comm[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		//创建记录集
		m_pRecordset.CreateInstance(_uuidof(Recordset));
		//取得表中的记录
		m_pRecordset->Open(bstrSQL, m_pConnection.GetInterfacePtr(), adOpenDynamic, adLockOptimistic, adCmdText);
		if (m_pRecordset->EndOfFile)
		{
			qDebug() << "Record Not Found" << endl;
			rec_num = 0;
		}
		else
		{
			for (rec_num = 0; !m_pRecordset->EndOfFile; rec_num++)
			{
				reclist[rec_num].Aid = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("Aid")));
				reclist[rec_num].Bid = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("Bid")));
				reclist[rec_num].ISBN = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("ISBN")));
				reclist[rec_num].Author = (wchar_t*)(_bstr_t)m_pRecordset->GetCollect("Author");
				reclist[rec_num].Rid = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("Rid")));
				reclist[rec_num].Year = m_pRecordset->GetCollect("Year");
				reclist[rec_num].Pub = (wchar_t*)(_bstr_t)m_pRecordset->GetCollect("Pub");
				reclist[rec_num].Title = (wchar_t*)(_bstr_t)m_pRecordset->GetCollect("Title");
				reclist[rec_num].Lent_Date = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("Lent_Date")));
				_variant_t tmp = m_pRecordset->GetCollect("Return_Date");
				if (tmp.vt==VT_NULL)reclist[rec_num].Return_Date = "";
				else
					reclist[rec_num].Return_Date = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("Return_Date")));
				m_pRecordset->MoveNext();
			}
		}
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
	}
	if (m_pConnection->State)
		m_pConnection->Close();

	::CoUninitialize();
}

void Usr_API(wstring sitem, wstring scontent)
{
	::CoInitialize(NULL);
	_RecordsetPtr m_pRecordset("ADODB.Recordset");
	_ConnectionPtr m_pConnection("ADODB.Connection");
	wstring comm = L"select * from Account where " + sitem + L" = N'" + scontent + L"'";
	_bstr_t bstrSQL((wchar_t*)&comm[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		//创建记录集
		m_pRecordset.CreateInstance(_uuidof(Recordset));
		//取得表中的记录
		m_pRecordset->Open(bstrSQL, m_pConnection.GetInterfacePtr(), adOpenDynamic, adLockOptimistic, adCmdText);
		if (m_pRecordset->EndOfFile)
		{
			rd_num = 0;
			qDebug() << "Account Not Found" << endl;
		}
		else
		{
			for (rd_num = 0; !m_pRecordset->EndOfFile; rd_num++)
			{
				rdlist[rd_num].aid = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("Aid")));
				rdlist[rd_num].name = (wchar_t*)(_bstr_t)m_pRecordset->GetCollect("Name");
				rdlist[rd_num].auth = (string)LPSTR(_bstr_t(m_pRecordset->GetCollect("Auth")));;
				m_pRecordset->MoveNext();
			}
		}
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
	}
	if (m_pConnection->State)
		m_pConnection->Close();

	::CoUninitialize();
}

bool Del_API(string scontent)
{
	bool flag = 0;
	::CoInitialize(NULL);
	_ConnectionPtr m_pConnection("ADODB.Connection");
	string comm = "delete from Account where Aid = " + scontent ;
	_bstr_t bstrSQL((char*)&comm[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		_variant_t num_influenced;
		m_pConnection->Execute(bstrSQL, &num_influenced, adCmdText);
		flag = 1;
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		flag = 0;
	}
	if (m_pConnection->State)
		m_pConnection->Close();

	::CoUninitialize();
	return flag;
}

bool Add_API(wstring sname, wstring spwd, wstring sauth)
{
	bool flag = 0;
	::CoInitialize(NULL);
	_ConnectionPtr m_pConnection("ADODB.Connection");
	string comm = "update Count set User_num = User_num+1";
	_bstr_t bstrSQL((char*)&comm[0]);
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		_variant_t num_influenced;
		m_pConnection->Execute(bstrSQL, &num_influenced, adCmdText);
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		flag = 0;
		if (m_pConnection->State)
			m_pConnection->Close();

		::CoUninitialize();
		return flag;
	}

	comm = "select User_num from Count";
	_bstr_t bstrSQL2((char*)&comm[0]);
	_RecordsetPtr m_pRecordset("ADODB.Recordset");
	QString now_num;
	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		//创建记录集
		m_pRecordset.CreateInstance(_uuidof(Recordset));
		//取得表中的记录
		m_pRecordset->Open(bstrSQL2, m_pConnection.GetInterfacePtr(), adOpenDynamic, adLockOptimistic, adCmdText);
		if (m_pRecordset->EndOfFile)
		{
			qDebug() << "Counter Not Found" << endl;
		}
		now_num = QString::fromStdString((string)LPSTR(_bstr_t(m_pRecordset->GetCollect("User_num"))));
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		flag = 0;
		if (m_pConnection->State)
			m_pConnection->Close();

		::CoUninitialize();
		return flag;
	}

	wstring comm2 = L"insert into Account(Aid,Pwd,Name,Auth) values("+ (now_num.toStdWString())+L",'"+
		spwd+L"',N'"+sname+L"','"+sauth+L"')";
	_bstr_t bstrSQL3((wchar_t*)&comm2[0]);

	try {
		m_pConnection.CreateInstance("ADODB.Connection");//创建Connection对象
		_bstr_t strConnect = "Provider=SQLOLEDB;Server=(local);Database=libsys;uid=sa;pwd=h2001y6w1;";
		m_pConnection->Open(strConnect, "", "", adModeUnknown);
		if (m_pConnection == NULL)
		{
			cerr << "Lind data ERROR!\n";
		}
		_variant_t num_influenced;
		m_pConnection->Execute(bstrSQL3, &num_influenced, adCmdText);
		flag = 1;
	}
	catch (_com_error c)
	{
		qDebug() << "\nERROR:" << (LPCTSTR)c.Description();
		qDebug() << "\nMessage:" << (LPCTSTR)c.ErrorMessage();
		flag = 0;
	}
	if (m_pConnection->State)
		m_pConnection->Close();

	::CoUninitialize();
	return flag;
}