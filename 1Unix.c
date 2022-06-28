#include<stdio.h>
#include<pthread.h>
int b=0;
void *mythread_fun(void*args)
{
printf("I am a thread by %s\n",(char *)args);
int t;
for(t=0;t<100;t++)
{
b=b+1;
}
}
void main()
{
printf("program started\n");
pthread_t t1,t2;
pthread_create(&t1,NULL,mythread_fun,"T1");
pthread_create(&t2,NULL,mythread_fun,"T2");
pthread_join(t1,NULL);
pthread_join(t2,NULL);
printf("Balance = %d\n",b);
printf("program finished\n");
}
