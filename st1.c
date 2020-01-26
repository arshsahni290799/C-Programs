#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
int countt(char *str)
{
	int count=0,i; 
		for(i=0;i<strlen(str)-1;i++)
	{
		if(str[i]=='.')
		{
			i++;
			while(str[i]=='0')
			{
				i++;
			}
			count++;
		}
		else
		{
			count++;
		}
	}

return count;
}
int main()
{
  char *str,*str1;
	int i,n,count=0;
	printf("Enter the length of the string\n");
	scanf("%d",&n);
	fflush(stdin);
	str=(char *)malloc(sizeof(char) *n);
	str1=(char *)malloc(sizeof(char) *n);
	str[0]='.';
	str1[0]='.';
	printf("Enter string 1\n");
	for(i=1;i<n+1;i++)
	{
		scanf("%c",&str[i]);
	}
	int res1=countt(str);
		printf("Enter string 2\n");
	for(i=1;i<n+1;i++)
	{
		scanf("%c",&str1[i]);
	}
	int res2=countt(str1);
	if(res1==res2)
	{
		printf("0");
	}
	else if(res1<res2)
	{
		printf("-1");
	}
	else
	{
		printf("1");
	}
	return(0);
}
