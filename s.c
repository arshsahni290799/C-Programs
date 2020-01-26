#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  char s[20];
  int i,j,count=1,max=0,k,x,y;
  printf("Enter the string\n");
  gets(s);
  for(i=1;i<strlen(s);i++)
  {
  	k=i+1;
  	count=1;
  	for(j=i-1;j>=0;j--)
  	{
  	  if(s[j]==s[k])
		{
		 count=count+2;	
		}
		
		else if(s[i]==s[k])
		{
			count=count+1;
	    }
	    else if(s[i]==s[j])
	    {
	    	count=count+1;
		}
	    
	    if(max<count)
	    {
	    	max=count;
	    	x=j;
	    	y=k;
		}
	    
	    k++;
	}
  }
  if(max==1)
  {
  	printf("%c",s[0]);
  }
  else
  {
  	for(i=x;i<=y;i++)
  	{
  	   printf("%c",s[i])	;
	}
	
  }
  printf("\n %d",max);
	return(0);
}
