#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,arr[20],temp;
	printf("Enter the size of Array\n");
	scanf("%d",&n);
	printf("Enter the Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
			
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		}
		printf("%d ",arr[i]);
	}
	return 0;
}
