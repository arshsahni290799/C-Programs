#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,flag=0,l;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
    }
	
     printf("\n");
     for(i=1;i<=5;i++)
     {
       for(j=i;j>=1;j--)
	   {
	   	printf("%d",j);
	   }
	   printf("\n");
	 }
	return(0);
}
