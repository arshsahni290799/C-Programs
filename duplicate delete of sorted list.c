#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node* next;	
};
struct node *curr, *new_node, *temp, *prev, *start;
void create()
{
	
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		curr=start;
		
	}
	else
	{
		curr->next=new_node;
		curr=curr->next;
	}
}
void display()
{
	temp=start;
	printf("Linked List = ");
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->next;//for iteration(moving ahead)
	}
	printf("NULL\n");
}
void duplicate_d()
{
	prev=start;
	while(prev->next!=NULL)
	{
		temp=prev;
		while(temp->next!=NULL)
		{
			
			temp=temp->next;
			 if(temp->data==prev->data)
			{
				prev->next=temp->next;
			}
		}
		prev=prev->next;
	}
}
int main()
{
int i=0,n;
	printf("Enter the size of list\n");
	scanf("%d",&n);
	while(i<n)
	{
		create();
		i++;
	}
	duplicate_d();
	display();
	return(0);
}
