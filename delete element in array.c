#include<stdio.h>
#include<conio.h>
int main()
{
	int i,in,n,arr[100],num;
   printf("Enter the size\n");
   scanf("%d",&n);
   //arr=(int*)malloc(sizeof(int) * (n+1));
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   printf("Enter  index\n");
   scanf("%d",&in);
   arr[in]=0;
  for(i=0;i<n-1;i++)
  {
	 if(arr[i]==0)
	 {
	 	arr[i]=arr[i+1];
	 	arr[i+1]=0;
	 }
	 printf("%d ",arr[i]);
  }
  /*for(i=0;i<n-1;i++)
  {
  	printf("%d ",arr[i]);
  }*/
   return(0);
}
