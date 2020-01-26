#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j,count=0;
	char str1[100],str2[100];
	printf("Enter string 1\n");
	gets(str1);
	printf("Enter string 2\n");
	gets(str2);
	for(i=0;i<strlen(str1);i++)
	{
		count=0;
		for(j=0;j<strlen(str2);j++)
		{
			if(str1[i+j]==str2[j])
			{
				count++;
			}
			else
			{
			
				break;
			}
		}
		//printf("%d",j);
		if(count==strlen(str2))
		{
			printf("Patten found");
			break;
		}
	}
	
	
	return(0);
}
