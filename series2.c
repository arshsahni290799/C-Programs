#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,mul=1,mul1;
	float sum=0;
	while(a<=5)
	{
		mul1=a*a;
		mul=mul*(a+1);
		printf("%d^2/%d!+ ",a,a+1);
		sum=sum+(float)mul1/mul;
		a++;
	}
	printf("\nsum = %f",sum);
	return (0);
}
