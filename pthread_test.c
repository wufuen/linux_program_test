#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>

typedef int (*protocal_fun)(char *buf,int len);

struct protocal_call
{
    protocal_fun p_fun;
    char * key;
};

int main(int argc,void *argv[])
{
    if(argc<2)
    printf("please input mem size\n");
    int mem_size= atoi(argv[1]);
    void *p_call = NULL;
    p_call = malloc(sizeof(struct protocal_call)*100);
    if(!p_call){printf("malloc failed!\n");return -1;}
    memset(p_call,0,sizeof(struct protocal_call)*100);
    if(p_call)free(p_call);
    return 0;
}
