#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node * next;
};
struct node *top,*new_node,*curr;
void push()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(top==NULL)
	{
		top=new_node;
	}
	else
	{
		new_node->next=top;
		top=new_node;
	}
}
void display()
{
	curr=top;
	while(curr!=NULL)
	{
		printf("%d--->",curr->data);
		curr=curr->next;
	}
	printf("NULL\n");
}
void nearest_s(int n)
{
   int arr[100],i=n-1,j;
   	struct node *prev;
   	curr=top;
   	while(curr!=NULL)
   	{
      prev=curr;
	  while(prev!=NULL)
	  {
	    if(prev->data < curr->data)
		{
		  arr[i]=prev->data;
		  break;	
		}
		else
		{
		  arr[i]=-1;	
		}
		prev=prev->next;	
	  }
	  i--;		
	  curr=curr->next;
   }
   	for(j=0;j<n;j++)
   	{
   	  printf("%d ",arr[j]);
	}
}
int main()
{
	int i=0,n;
	printf("Enter the size\n");
	scanf("%d",&n);
	while(i<n)
	{
	     push();
		i++;
	}
	nearest_s(n);
    //display();
	return(0);
}
