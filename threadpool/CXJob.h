#include <stdio.h>
#include <unistd.h>
class CXJob:public CJob 
{ 
public: 
    CXJob(){} 
    ~CXJob(){} 
    void Run(void* jobdata)
    { 
        sleep(2);
        printf("The Job comes from CXJOB, thread id is:"); 
    } 
};
