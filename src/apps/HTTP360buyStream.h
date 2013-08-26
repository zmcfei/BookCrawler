/// @file HTTP360buyStream.h
/// @brief this class is used to get the booklist from buy360,and store it to global::booklist
/// @author zmc
/// @version zmcc1.0
/// @date 2013-02-02
#include "ElesupStream.h"
#include "global.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include "CThreadManage.h"
#include "CXJob.h"

class HTTP360buyStream : public ElesupStream
{
public:
    HTTP360buyStream(std::string url);
    virtual ~HTTP360buyStream();
    /*virtual char Peek();*/
    /*virtual char Read();*/
    /*virtual void Close();*/
    /*virtual bool IsOpen() const;*/
    
    bool ParseURL(std::string & url); 
    void DownLoadBookInfo();
private:
    std::string Url;
    string UrlContext;
    void Init();
    void getBookhherf();
    bool isURL(std::string & url);
    CThreadManage * manage;
};
