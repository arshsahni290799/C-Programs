#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,arr[3][3]={{1,5,3},{4,8,7},{6,9,1}},a,b,c,arr1[10]={0};
	for(i=0;i<3;i++)
	{
		a=arr[i][0];
		b=arr[i][1];
		c=arr[i][2];
		for(j=a-1;j<b;j++)
		{
			arr1[j]=c+arr1[j];
		}
		
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",arr1[i]);
	}
	return(0);
}
