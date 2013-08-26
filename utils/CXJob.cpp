#include "CXJob.h"

CXJob::CXJob()
{
    pribooklist = new Fifo<string>();
}
CXJob::CXJob(string Url)
{
    pribooklist = new Fifo<string>();
    pribooklist->Insert(Url,NULL);
}
void CXJob::Run(void* jobdata)
{
    cout << " Run in " << endl;
    while( !pribooklist->IsEmpty())
    {
        pUrl = pribooklist->GetFirst()->GetValue(); 
        string Context = GetContext(pUrl);
        pribooklist->deletefirst();

        std::istringstream iss(Context);
        string line1;
        bool keyy = false;
        int numline = 0;
        // numline 大于 内容中京东的重复开头
        while(getline(iss,line1))
        {
            numline++;
            if( numline > 128)
            {
                int tt = line1.find("<div class=\"item");
                if(tt > -1)
                {
                    loca_str_html(line1);
                }
                int start_npage = line1.find("class=\"next\" h"),end_npage = 0;
                if( !keyy && start_npage > -1 )
                {
                    start_npage += 19;
                    end_npage = line1.substr(start_npage).find("\">");
                    if(end_npage > -1)
                    {
                        cout << "insert new booklist = " << line1.substr(start_npage , end_npage) << endl;
                        pribooklist->Insert(line1.substr(start_npage, end_npage),NULL);
                        //global::booklist->Insert(line1.substr(start_npage, end_npage),NULL);
                        keyy = true;
                    }
                }
            }
        }
        if(!keyy)
        {
           global::outendlist -> Insert(pUrl,NULL); 
           std::cout << " ended is = " << pUrl << endl;  
        }
    }
}
std::string & CXJob::GetContext(const std::string & url)
{
    CURL *curl;
    UrlContext.clear();
    curl = curl_easy_init();
    if (curl){
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_HEADER, 0); 
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 0); /* Don't follow anything else than the particular url requested*/
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CXJob::writer);  /* Function Pointer "writer" manages the required buffer size */
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &UrlContext); /* Data Pointer &buffer stores downloaded web content */    
    }
    else{
        fprintf(stderr,"Error 1\n");    /* Badly written error message */
        string gg("");
        return gg;
    }
    curl_easy_perform(curl);
    /* There is no need for "res" as it is just a flag */   
    /* (E) Close the connection */
    curl_easy_cleanup(curl);
    return UrlContext;
    //ifstream fpp;
    //fpp.open(url.c_str());
    //string contains,tmp;
    //while(getline(fpp,tmp))
    //{
    //contains += tmp;
    //}
    //return contains;
}
/// @brief find the context's bookinfo to global bookinfolist;
///
/// @param context is got from html
void CXJob::loca_str_html(const string & context)
{
    int i=0,j=0,q=0;
    string bookname;
    string authername;
    string price = "";
    string PubDate;
    string TheHtml="";
    while( i > -1 && i < context.length() - 370 )
    {
        j=context.substr(i).find(">");
        i = i + j + 1;
        if(context[i] != '<')
        {
            q++;
            int tmp = context.substr(i).find("<");
            if(tmp > -1)
            {
                switch(q)
                {
                    case 1:
                        bookname = context.substr(i,tmp);
                        break;
                    case 2:
                        break;
                    case 3:
                        authername = context.substr(i,tmp);
                        break;
                    case 8:
                        PubDate = context.substr(i,tmp);
                        break;
                    case 12:
                        price += context.substr(i,tmp);
                        break;
                    case 14:
                        price += context.substr(i,tmp);
                        i = -1;
                        break;
                    default:
                        break;
                }
            }
            int start_html = context.find("http://book");
            int end_html = context.substr(start_html).find("\">");
            TheHtml = context.substr(start_html,end_html);
        }
    }
    BookInfo onebook(authername,bookname,price,PubDate,"",TheHtml,"");
    //global::bookinfolist->Insert(onebook,NULL);
    global::output_file << onebook << endl;
}
/// @brief set for curl get the data to buffer,the data is from the html ;
///
/// @return 
int CXJob::writer(char *data, size_t size, size_t nmemb, std::string *buffer)
{
    int result = 0;
    if(buffer != NULL) {
        buffer -> append(data, size * nmemb);
        result = size * nmemb;
    }
    return result;
}
