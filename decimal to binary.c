#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i=0,j,arr[16],sum=0,d;
	printf("Enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		d=num%2;//00
		
		sum=sum+(d*pow(10,i));//sum=0//0
		i++;
		num=num/2;
	}
	printf("%d",sum);
	
}
