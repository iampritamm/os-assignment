#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
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
