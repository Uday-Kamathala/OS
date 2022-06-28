#include<stdio.h>
#include<pthread.h>
int balance=0;
void *mythread_fun(void *args)
{

printf("I am a thread by %s\n",(char *) args);
int total;
for(total=0;total<100;total++)
{
balance= balance+1;
}
}
int main()
{
printf("program started\n");
pthread_t t1,t2;
pthread_create(&t1,NULL,mythread_fun,"T1");
pthread_create(&t2,NULL,mythread_fun,"T2");
pthread_join(t1,NULL);
pthread_join(t2,NULL);
printf("balance=%d\n",balance);
printf("Program finished.\n");
return 0;
}
