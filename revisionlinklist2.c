#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *new_node,*start,*curr,*prev,*temp;
void create()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		curr=new_node;
	}
	else
	{
		curr->next=new_node;
		curr=new_node;
	}
}
void display()
{
	printf("Your linked list = \n");
	curr=start;
	while(curr!=NULL)
	{
		printf("%d--->",curr->data);
		curr=curr->next;//for moving ahead
	}
	printf("NULL\n");
}
void delete_p()
{
	int i,p;
	curr=start;
	printf("Enter the positon where u want to delete");
	scanf("%d",&p);
	for(i=1;i<p;i++)
	{
		prev=curr;
		curr=curr->next;
	}
	prev->next=curr->next;
	curr->next=NULL;
	free(curr);
}
int main()
{
	int i=0,n;

	        
			printf("Enter size of linklist\n ");
			scanf("%d",&n);
			
			while(i<n)
			{
				create();
				i++;
			}			
			delete_p();
			display();
		
	return(0);
	
}
