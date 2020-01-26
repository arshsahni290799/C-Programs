#include<stdio.h>
#include<conio.h>
int main()
{
	int a=199,b=2,c;
	while(a<=219)
	{
		c=a%b;
		if(b>(a/2)||a==2)
		{
			printf("%d Prime\n",a);
			a++;
			b=2;
		}
		if(c==0) 
		{
			printf("%d not Prime\n",a);
			a++;
			b=2;
		}
		else
		{
		
     	b++;
       }
		
	}
	
	return (0);
}
