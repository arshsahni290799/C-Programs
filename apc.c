#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,c=0;
	char str[40];
	printf("Enter the string\n");
	gets(str);
	char s[40];
	strcpy(s,str);
	 strrev(s);
	  int x=strcmp(s,str);
	  	printf("%d",x);
	  if(x==0)
	  {
	  	printf("0");
	  }
	  else if(x==-1)
	  {
	  		printf("1");
	  }
	 /* else if(x==1)
	  {
	  	printf("%d",strlen(str)/2);
	  }*/
	  else
	  {
	  	for(i=1;i<strlen(str);i++)
	  	{
	  	  if(str[0]!=str[i])
			{
			  c++;	
			}
			else if((str[0]==str[i]||str[0]==str[2]) && (c>0))
			{
				c--;//
			}	
		
		}
			printf("%d ",c);
	  }
	  
	  return(0);
}
