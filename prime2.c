#include<stdio.h>
#include<conio.h>
int main()
{
	int i=2,num;
	printf("Enter number\n");
	scanf("%d",&num);
	while(i<num)
	{
		int c;
		c=num%i;
		if(c==0)
		{
			printf("not prime");
			break;
		}
		if(i>num/2)
		{
			printf("Prime");
			break;
		}
		i++;
		
	}
	return (0);
}
