#include "global.h"
#include "PageDownloader.h"
#include <iostream>
#include "BookInfo.h"

#include <sys/time.h>
using namespace std;


Fifo<string> * global::booklist;
Fifo<BookInfo> * global::bookinfolist;
ofstream global::output_file;
Fifo<string> * global::outendlist;
int main(int argc,char *argv[])
{

    struct timeval tpstart,tpend;
    float timeused;
    gettimeofday(&tpstart,NULL);
    global glob(argc,argv);
    cout << global::httpport<<endl;
    cout << global::starturl<<endl;
    PageDownloader test;
    test.downloadPage(global::starturl);

    ofstream output1;
    output1.open("out_booklist.txt");
    global::booklist->print(output1);

    //ofstream output2;
    //output2.open("out_bookinfolist.txt");
    //global::bookinfolist->print(output2);
    
    //get the main time!
    gettimeofday(&tpend,NULL);
    timeused = 1000000 * (tpend.tv_sec - tpstart.tv_sec) + tpend.tv_usec - tpstart.tv_usec;
    timeused /= 1000000;
    global::output_file << "Used Time:" << timeused << endl;

    ofstream outendfile("out_endlist.txt");
    global::outendlist -> print(outendfile); 
}
