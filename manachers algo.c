#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,k,count,j,n,max=0;
	char str[200];
	printf("Enter the string\n");
	scanf("%s",str);
	n=strlen(str);
	for(i=1;i<n;i++)
	{
		k=i+1;
		count=1;
		for(j=i-1;j>=0;j--)
		{

			if(str[j]==str[k])
			{
				count=count+2;
			}
			k++;
			if(max<count)
			{
				max=count;
			}
			
		}
	}
	printf("%d",max);
	return(0);
}
