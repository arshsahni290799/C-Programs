int binary(int *arr,int n,int num)
{
	int i,l,h,mid;
	l=0;
	h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		 if(num==arr[mid])
		{
			return mid;
		}
		
		else if(num<arr[mid])
		{
			h=mid-1;
		}
		else
		{
			{
			l=mid+1;
		   }
		}
	
		
	}
	return -1;
}
int main()
{
	int i,j,n,*arr,num;
   printf("Enter the size\n");
   scanf("%d",&n);
   arr=(int*)malloc(sizeof(int) * n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   printf("Enter the number u want to check is present or not\n");
   scanf("%d",&num);
   for(i=0;i<n;i++)
   {
   	for(j=i;j<n;j++)
   	{
   	  if(arr[i]>arr[j])
		 {
		   int temp=arr[i];
		   arr[i]=arr[j];
		   arr[j]=temp; 	
	     }	
	}
   }
   	
 int x=binary(arr,n,num);
printf("%d",arr[x]);
}
