#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=0,newarr[100]={0};
	printf("Enter size\n");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int) * n);
	//int arr[n];
	printf("Enter the Array\n");
	while(i<n)
	{
		scanf("%d",&arr[i]);
		newarr[arr[i]]++;
		i++;
	}
	for(i=0;i<n;i++)
	{
	  if(newarr[arr[i]]%2!=0)
	  {
	  	printf("\n %d \n",arr[i]);
	  	newarr[arr[i]]=0;
	  }
	}
	return (0);
}
