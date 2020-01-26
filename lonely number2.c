#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,arr[]={2,2,1,4,1},n=5;
	while(i<n)
	{
		int num=arr[i];
		if(num == arr[j] && j!=i)
		{
			i++;
			j=0;
		}
		else
		{
			j++;
		}
		if(j==n)
		{
			printf("Lonely number = %d\n",num);
			//break;
		}
	}
	return (0);
}
