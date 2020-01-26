#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s1[]="AACECAAAA";
	char s2[10];
	int i,count=0;
  for(i=0;i<strlen(s1);i++)
  {
  	strcpy(s2,s1);
  //	printf("%s",s2);
  	strrev(s2);
  	int x=strcmp(s1,s2);
  	if(x==0)
  	{
  	 break;	
	}
	else
	{
		count++;
		memset(s2,0,strlen(s2));
	}
  	s1[strlen(s1)-1]='\0';
  }
  printf("%d",count);
  return (0);
}
