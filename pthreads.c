#include<stdio.h>
#include<conio.h>
#include<pthread.h>
void procedure(int *a)
{
	printf("Hello = %d\n",*a);
}
int main()
{
	int num=10,i;
	pthread_t id[num];
	for(i=0;i<5;i++)
	{
		pthread_create(&id[i],NULL,procedure,&i);//creates the thread and calls procedure
		
	}
	for(i=0;i<5;i++)
	{
		pthread_join(id[i],NULL);
	}
	return(0);
}
