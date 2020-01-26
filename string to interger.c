#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int res,i,num,j;
	char *str;
	str=(char *)malloc(sizeof(char)*40);
	printf("Enter the numberic string\n");
	scanf("%s",str);
	j=strlen(str)-2;
	long long int ch;
	int sign=1;
	
	
	for(i=0;i<strlen(str);i++)
	{
	if(str[i]=='-')
		{
			sign=-1;
			continue;
		}	
		if(str[i]=='+')
		{
			
			continue;
		}	
	
		num=str[i]-48;
		res=res*10+num;
		ch=ch*10+num;
	}
	int p=pow(2,32);
	if(ch!=res)
	{
		if(sign==1)
		{
		
		printf("%d",p);
	   }
		else
		{
			printf("%d",(p+1)*-sign);
		}
	}
	else
{
		
   	
   	 
   	   printf("%d",res*sign);	
	
}
	return(0);
}

