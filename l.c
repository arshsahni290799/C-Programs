#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char x[200],y[200],z[100];
gets(x);
int i,k=0;
//gets(y);
for(i=strlen(x)-1;i>=0;i--)
{
	
printf("%s",x[i]);
//	y[k]=x[i];
//	k++;
}
return(0);
}
