#ifndef _bookinfo_
#define _bookinfo_

#include <string>
#include <iostream>
using namespace std;

class BookInfo
{
private:
    string Author;
    string BookName;
    string PubDate;
    string price;
    string ProductNum;
    string TheHtml;
    string evaluate;

public:
    BookInfo();
    BookInfo(const string Author, const string BookName, const string price = "", const string PubDate = "",const string ProductNum = "",const string TheHtml = "",const string evaluate = "");
    ~BookInfo();
    int getProductNum(const string & TheHtml);
    friend std::ostream & operator<<(ostream & os,const  BookInfo & bk);
};


#endif
