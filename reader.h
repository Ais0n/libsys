#pragma once
#include<cstring>
using namespace std;
class reader {
public:
	string aid;
	wstring name;
	string auth;
};
class book {
public:
	string Bid;
	string ISBN;
	wstring Title;
	wstring Author;
	wstring Pub;
	int Year;
	int Total;
	int Storage;
};
class rec {
public:
	string Aid;
	string Bid;
	string Rid;
	string ISBN;
	wstring Title;
	wstring Author;
	wstring Pub;
	int Year;
	string Lent_Date;
	string Return_Date;
};