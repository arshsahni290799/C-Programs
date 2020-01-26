#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char str[20],s[20];
	int i,j=0,k=0;
	printf("Enter the string\n");
	gets(str);
	for(i=strlen(str)-1;i>=0;i--)
	{
		if(str[i]==' ')
		{
			strrev(s);
			printf("%s ",s);
			k++;
			j=0;
		}
		else
		{
			char sk[100];
			sk[j]=str[i];
			j++;
		}
		
	}
	return(0);
}
