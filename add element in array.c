#include<stdio.h>
#include<conio.h>
int main()
{
	int i,in,n,arr[100],num;
   printf("Enter the size\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   printf("Enter  number and index\n");
   scanf("%d %d",&num,&in);
 
  for(i=in;i<n;i++)
  {
  	int temp=arr[i];
  	arr[i]=0;
  	if(arr[i]==0)
  	{
  	   arr[i+1]=temp;	
	}
  }
  for(i=0;i<n+1;i++)
  {
  	printf("%d ",arr[i]);
  }
   return(0);
}
