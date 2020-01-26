#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j=0;
	char str[40],s[40];
	printf("Enter the string\n");
	gets(str);
	for(i=strlen(str)-1;i>=0;i--)
	{
		if(str[i]==' ')
		{
			strrev(s);
			j=0;
			printf("%s ",s);
		}
		else
		{
			s[j]=str[i];
			j++;
		}
	}
return(0);
}
