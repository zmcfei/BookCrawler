#include "CJob.h"
#include "CXJob.h"
#include "CThreadManage.h"

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <pthread.h>

using namespace std;

int main(void) 
{
    CThreadManage* manage = new CThreadManage(3); 
    for(int i=0;i<3;i++)
    {
        sleep(1);
        CXJob* job = new CXJob();
        manage->Run(job,NULL);
        printf("........................deal job: %d....................\n", i+1);
    }

    while(1)
    {
        if(manage -> allThreadisIdle())
        {
            manage->TerminateAll(); 
            exit(0);
        }
        else
            sleep(1);
    }

    return 0;
}
