#pragma once
#include<cstring>
#include"reader.h"
using namespace std;
bool Login_API(string usr_account, string usr_pwd);
void Query_API(wstring sitem, wstring scontent, bool sok);
bool Borrow_API(string borrow_aid, string borrow_bid, string borrow_date);
bool Return_API(string return_aid, string return_bid, string return_rid, string return_date);
bool In_API(wstring InBid, wstring InISBN, wstring InTitle, wstring InAuthor, wstring InPub, wstring InYear, wstring InCnt);
void Rec_API(wstring sitem,wstring scontent);
void Usr_API(wstring sitem, wstring scontent);
bool Del_API(string scontent);
bool Add_API(wstring sname, wstring spwd, wstring sauth);