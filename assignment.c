#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
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
int main()
{
  int i;
  pthread_t thread[50];
  for(i=0;i<100;i++)
  {
  pthread_mutuex init(&mutex,NULL);
  pthread_create(&thread[i],NULL,threadCall,NULL);
  threadCall(NULL);
  }
}
