#include <fstream>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <curl/curl.h>
#include <curl/easy.h>
using namespace std;
int writer(char *data, size_t size, size_t nmemb, string *buffer){
    int result = 0;
    if(buffer != NULL) {
        buffer -> append(data, size * nmemb);
        result = size * nmemb;
    }
    return result;
} 
int main ()
{
    CURL *curl;   
    string buffer;   
    curl = curl_easy_init();

    if (curl){
        curl_easy_setopt(curl, CURLOPT_URL, "www.360buy.com");
        curl_easy_setopt(curl, CURLOPT_HEADER, 0);  
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 0); /* Don't follow anything else than the particular url requested*/
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writer);  /* Function Pointer "writer" manages the required buffer size */
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer ); /* Data Pointer &buffer stores downloaded web content */    
    }
    else{
        fprintf(stderr,"Error 1\n");    /* Badly written error message */
        return 0;                                          
    }
    /* (D) Fetch the data */
    curl_easy_perform(curl);
    /* There is no need for "res" as it is just a flag */   
    /* (E) Close the connection */
    curl_easy_cleanup(curl);

    /* (F) Transform &buffer into a istringstream object */
    std::istringstream iss(buffer);

    string line, item;  
    int linenum = 0;
    while (getline (iss, line)){
        linenum++;    
        cout << line <<endl;
        } 

    return 0;   
}
