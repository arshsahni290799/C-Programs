#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j=0;
	char str[40],s[40];
	printf("Enter the string\n");
	gets(str);
     strrev(str);
     for(i=0;i<strlen(str);i++)
     {
     	if(str[i]==' ')
     	{
     	  strrev(str,0,i);
		}
	 }
	 printf("%s",str);
return(0);
}
