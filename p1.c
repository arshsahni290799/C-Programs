#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,arr[100],j,k=0,max,sum,arr2[100];
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=arr[i];
		max=sum;
		for(j=i+1;j<n;j++)
		{
			sum=sum+arr[j];
			if(max<sum)
			{
				max=sum;
			}
			
			else
			{
				arr2[k]=max;
				k++;
				break;
			}
	//		printf("%d ",sum);
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",arr2[i]);
		//if(max<arr[i])
		//{
		//	max=arr[i]
		//}
	}
//	printf("%d",max);
	
}
