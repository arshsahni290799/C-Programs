#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int binary(int *arr,int n,int num)
{
	//arr=(int *)malloc(sizeof(int)*n);
	int st=0,mid;
	int end=n-1;
	while(st<=end)
	{
		mid=(st+end)/2;
	  if(num>arr[mid])
		{
			st=mid+1;
		}
		else if(num<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			return mid;
		}
		
	
	}
	return 0;
}
int main()
{
	int n,*arr,num,i;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int)*n);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number u want to find\n");
	scanf("%d",&num);
	int x=binary(arr,n,num);
	if(x==0)
	{
		printf("Not found\n");
	}
	else
	{
		printf("Found and index = %d",x);
	}
  return(0);
}
