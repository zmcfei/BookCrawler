#ifndef _CXJob_
#define _CXJob_
#include "CJob.h"
#include "Fifo.h"
#include "../src/apps/global.h"
#include <curl/curl.h>
#include <curl/easy.h>
#include <string>
#include <sstream>
#include <iostream>

class CXJob : public CJob 
{
private:
    string pUrl; 
   string UrlContext; 
   Fifo<string> * pribooklist;
public: 
    CXJob(); 
    CXJob(string Url); 
    ~CXJob(){}

    void Run(void* jobdata);
    std::string & GetContext(const std::string & url);
    void loca_str_html(const std::string & context);
    static int writer(char *data, size_t size, size_t nmemb, std::string *buffer);
};

#endif
