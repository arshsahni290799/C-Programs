#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node//syntax of decleration of node
{
	int data;
	struct node *next;
};
struct node *new_node,*temp,*start,*curr_node,*curr;
void create()
{
	new_node=(struct node*)malloc(sizeof(struct node));//malloc syntax =typecasting malloc(sizeof(data type))
	printf("Enter the data of new node\n");
	scanf("%d",&new_node->data);
new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		curr_node=new_node;
	}
	else
	{
		curr_node->next=new_node;
		curr_node=curr_node->next;//this is to move ahead
	}
}
void delete_p()
{
	int k,i;
	printf("Enter the location which u want to delete\n");
	scanf("%d",&k);
   int count=0;
   temp=start;
   while(temp!=NULL)
   {
   	count++;
   	temp=temp->next;
   }
   temp=start;
   int n=count-k-1;
   for(i=0;i<count;i++)
   {
   	curr=temp;
   	  temp=temp->next;
   	  if(n==i) 
   	  {
   	    break;  	
	  }
   }
   curr->next=temp->next;
   
}
void display()
{	
 temp=start;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;//this is to move ahead
	}
	printf("NULL");
	
}
int main()
{
	int i=0,n;
	printf("Enter the size\n");
	scanf("%d,",&n);
	while(i<n)
	{
		create();
		i++;
	}
	delete_p();
	display();
	return (0);
}
