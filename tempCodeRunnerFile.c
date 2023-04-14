#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
     int ret;
    for(int i=0;i<3;i++){
    ret=fork();
    printf("ppid=%d \n",getppid());
    printf("pid=%d \n",getpid());
    if(ret==0)
    break;
    }
    return 0;
}