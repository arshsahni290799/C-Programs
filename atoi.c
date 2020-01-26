#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[2000];
	int i,c=0;
	printf("Enter the string\n");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			break;
		}
		else
		{
			c++;
		}
	}
	if(c>=10 &&str[0]>2)
	{
	 printf("%d",INT_MAX);	
	}
	else
	{
		int x=atoi(str);
		printf("%d ",x);
	}
	return(0);
}
