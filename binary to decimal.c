#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i=0,sum=0;
	printf("Enter the Binary of a number");
	scanf("%d",&num);
	while(num>0)
	{
		int d=num%10;
		sum=sum+(d*pow(2,i));
		i++;
		num=num/10;
	}
	printf("%d ",sum);
	return(0);
}
