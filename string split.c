#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int j=0;
	char a[20],str[20];
	char **arr=(char**)malloc(sizeof(char*)*20);
	int i,k=0;
	printf("Enter the string\n");
	gets(str);
	int l=strlen(str);
	for(i=0;i<=l;i++)
	{
		a[k]=str[i];
		k++;
		if(str[i]==' '||str[i]=='\0')
		{
			a[k]='\0';
			
			arr[j]=(char*)malloc (sizeof(char)*20);
			strcpy(arr[j],a);
             puts(arr[j]);			
			j++;
			k=0;
		}
	}
	
	printf("%d",j);
	return(0);
}
