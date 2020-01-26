#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{
	int i,n,j,k,t;
	printf("Enter size of the stream\n");
	scanf("%d",&n);
	int *arr=(int *)malloc(sizeof(int)*n);
	printf("Enter the stream");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			for(k=j;k<i;k++)
			{
				if(arr[j] > arr[k])
				{
					t=arr[j];
					arr[j]=arr[k];
					arr[k]=t;
				}
			}
		
		if(i%2!=0)
		{
			int x=(i/2)+1;
			printf("%d",arr[x]);
		}
		else
		{
			printf("%d",(arr[i/2]+arr[(i/2)+1])/2);
			
		}
		}
		printf("\n");
	}
	return(0);
}
