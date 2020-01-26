#include<conio.h>
#include<stdio.h>
int binary(int n,int arr[n],int num)
{
	int *q,i;
	int mid,st=0,en=n-1;
	q=arr;
	while(st<=en)
	{
		mid=(st+en)/2;
		if(num==*(q+mid))
		{
			return mid;
		}
		
		else if(num<*(q+mid))
		{
			en=mid-1;
		}
		else if(num>*(q+mid))
		{
			st=mid+1;
		}
	}			
return -1;
}
int main()
{
  int i,n,j,temp,f;
  int *arr,*p;
  printf("Enter the size of array\n");
  scanf("%d",&n);
  arr=(int *)malloc(sizeof(int)*n);
  printf("Enter the array\n");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&arr[i]);
  }
  p=arr;//pointer variable storing address of array
  for(i=0;i<n;i++)
 {
  
  for(j=i;j<n;j++)
  {
       if(*(p+i)>*(p+j)) 
	    {
	   	   temp=*(p+i);
	   	   *(p+i)=*(p+j);
	   	   *(p+j)=temp;
    	} 	
  }
}
printf("Sorted array\n");
for(i=0;i<n;i++)
{
	printf("%d ",*(p+i));
}
printf("\nenter the number u want to find\n");
scanf("%d",&f);
 int x=binary(n,arr,f);
 printf("%d\n",arr[x]);
  return(0);
  }
