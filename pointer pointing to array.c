#include<stdio.h>
#include<conio.h>
int main()
{
	int n,arr[20],i;
	int *p=NULL;
	printf("Enter the size\n");
	scanf("%d",&n);
	printf("Enter the Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	p=arr;//as we now that arr stoes the address so no reqto use & and here pointer stores address of an array;
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));//this pointes to next address and * gives the value at that address
	}
	return(0);
}
