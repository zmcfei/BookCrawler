#include "HTTP360buyStream.h"
#include <string>
#include "CJob.h"
#include "CThreadManage.h"
using namespace std;
HTTP360buyStream::HTTP360buyStream(std::string url):Url(url)
{
    manage = new CThreadManage(15);
}
HTTP360buyStream::~HTTP360buyStream()
{
}
void HTTP360buyStream::Init()
{
}

//bool HTTP360buyStream::ParseURL(std::string & url)
//{
//string tmp = GetContext(url);
//std::istringstream iss(tmp);
//string line, item;  
//int linenum = 0;
//while (getline (iss, line)){
//linenum++;    
//cout << line <<endl;
//} 
//return true;
//}

/// @brief get url's context.
///
/// @param url 
///
/// @return url's &context

//Fifo<string> * global::booklist;
bool HTTP360buyStream::ParseURL(std::string & url)
{
    ifstream ifile;
    ifile.open("booklist360.html");
    string line;
    if(!ifile)
        fprintf(stderr,"ifile ==0! at HTTP360buyStream!");
    ofstream ofile;
    ofile.open("hai.txt");
    int nn = 0;
    while(getline(ifile,line))
    {
        if(line.find("<dl><dt>") != -1)
        {
            int i=0,j=0;
            int num = 0;
            string temp;
            //string::const_iterator iter1 = line.begin();
            while(i >=0 )
            {
                num ++;
                i += line.substr(i).find("href");
                if(i < 0)
                    break;
                i += 6;
                //cout << line.substr(i) <<endl;
                j = line.substr(i).find("\"");
                if(j < 0)
                    break;
                ofile << line.substr(i,j) << endl;
                string tmp(line.substr(i,j));
                if( isURL(tmp) )
                {
                    nn++;
                    if(nn >= 1)
                        global::booklist->Insert(line.substr(i,j),NULL);
                    //break;
                }
                int p = line.substr(i+j+2).find("<");
                ofile << line.substr(i+j+2,p) << endl;
                i = i + j + 1;
            }
        }
    }
}
bool HTTP360buyStream::isURL(std::string & url)
{
    if(url.substr(0,7).compare("http://") == 0 && url.find("000.html") > 1000)
        return true;
    else 
        return false;
}
void HTTP360buyStream::getBookhherf()
{
}
/// @brief get the global::booklist's url to download its context;
///And locate the book information to the global::bookinfolist,locate the next page(if have) to the global::booklist!
void HTTP360buyStream::DownLoadBookInfo()
{
    //test
    //global::booklist->Insert(string("http://www.360buy.com/products/1713-4758-4800.html"),NULL);
    //global::booklist->Insert(string("http://www.360buy.com/products/1713-6929-9381-0-0-0-0-0-0-0-1-1-62.html"),NULL);
    int i = 0;
    while(!global::booklist->IsEmpty())
    {
            i++;
            CXJob* job = new CXJob(global::booklist->GetFirst()->GetValue());
            global::booklist->deletefirst();
            manage->Run(job,NULL);
            printf("........................deal job: %d....................\n", i);
            if(i > 100)
                break;
    }
    while(1)
    {
        if(manage->allThreadisIdle())
            return;
        else
            usleep(10);
    }
    manage->TerminateAll();
    cout << "完成" << endl;
}
