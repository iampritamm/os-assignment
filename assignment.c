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
void  *threadcall(void *p)
{
  while(thread<100)
  {
  pthread_mutex_lock(&mutex);
  if(thread>=100)
  {
    pthread_mutux_unlock(&mutuex);
    break;
  }
    thread++;
    pthread_mutex_unlock(&mutex);
    }
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
