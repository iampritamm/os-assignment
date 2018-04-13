#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int MIN_PID=250;
int MAX_PID=4500;
pthread_mutex_t mutex;
struct pid_tab
{
  int pid;
  bool bitmap;
}
int allocate_map(void)
{
  int i,j;
  for(i=MIN_PID, j=0;i<MAX_PID;i++;j++)
  {
    pidArr[j].bitmap=0;
    if(i==MAX_PID && J=4700)
      return 1;
  }
} 
int  allocate_pid()
{
void  *threadcall(void *p)
{
  pthread_mutex_lock(&mutex);
  if(thread>=100)
    int j=1;
  while(j>=0)
  {
    if(pidArr[j].bitmap==0)
    { 
    pthread_mutex_unlock(&mutex);
    break;
    }
      thread++;
  pthread_mutex_unlock(&mutex); 
    if(j<threadVar)
    {
      pidArr[threadVar].pid=pidArr[j].pid;
      pid[j].bitmap=1;
      pidArr[threadVar].bitmap=1;
      return 0;
    }
    else
    {
      pidArr[j].pid=tid;
      tid+=1;
      pidArr[j].bitmap=1;
      return tid;
    }
  }
  j++
}
  
void release_pid(int pid)
{
  int i=0;
  for(i=0;i<4300;i++)
  {
    if(pidArr[i].pid=pid)
    {
      printf("\npid reaseased: %d",pidArr[i].pid);
      pidArr[i].bitmap=0;
    }
  }
}
void* threadCall(void* voidA)
{
  pthread_mutex_lock(&mutex);
  allocate_pid();
  sleep(1);
  threadVar++;
  printf("\n\nProcess Number: %d",threadVar);
  printf("\n\nProcess Id Allocated:%d \n",pid[threadVar-1].pid);
  if(threadVar==31)
  {
    release_pid(320);
    release_pid(321);
    release_pid(322);
  }
  pthread_mutex_unlock(&mutex);
}
int main()
{
  int i;
  pthread_t thread[50];
  allocate_map();
  for(i=0;i<100;i++)
  {
  pthread_mutuex init(&mutex,NULL);
  pthread_create(&thread[i],NULL,threadCall,NULL);
  threadCall(NULL);
  }
}
