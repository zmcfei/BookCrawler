#include "BookInfo.h"
BookInfo::BookInfo()
{
}
BookInfo::BookInfo(const string Author, const string BookName, const string price, const string PubDate, const string ProductNum,const string TheHtml,const string evaluate):
    Author(Author),BookName(BookName),price(price),PubDate(PubDate),ProductNum(ProductNum),TheHtml(TheHtml),evaluate(evaluate)
{
}
BookInfo::~BookInfo()
{
}
int BookInfo::getProductNum(const string & TheHtml)
{
    return 0;
}
std::ostream & operator<<(ostream & os,const BookInfo & bk)
{
    os << "bookname = " << bk.BookName << endl;
    os << "Authoername = " << bk.Author << endl;
    os << "price = " << bk.price <<endl;
    os << "PubDate = " << bk.PubDate << endl;
    os << "ProductNum = " << bk.ProductNum << endl;
    os << "TheHtml = " << bk.TheHtml << endl;
    os << "evaluate = " << bk.evaluate <<endl;
    return os;
}
