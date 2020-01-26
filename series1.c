#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,mul=1;
	float sum=0;
	while(a<=5)
	{
		mul=mul*(a+1);
		printf("%d / %d! +",a,a+1);
		sum=sum+(float)a/mul;
		a++;
	}
	printf("\n sum = %f",sum);
}
