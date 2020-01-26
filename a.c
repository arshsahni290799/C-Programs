#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
  struct node *next;	
};
struct node *new_node, *start, *curr, *temp, *temp1, *prev;
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
		curr=curr->next;
	}
}
void display()
{
	temp=start;
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
void reverse()
{
	int x,i;
	printf("Enter x\n");
	scanf("%d",&x);
	curr=start;
	while(curr->next!=NULL)
	{
		temp=curr;
		while(temp!=NULL)
		{
			prev=temp;
			if(temp->data<x)
			{
				prev->next=temp->next;
	     		temp->next=curr->next;
				curr->next=temp;
				break;
				
			}
				temp=temp->next;
		}
		curr=curr->next;
	}
	
}
int main()
{
	int i=0,n;
	printf("Enter size of linked list\n");
	scanf("%d",&n);
	while(i<n)
	{
		create();
		i++;
	}
	reverse();
	display();
	return (0);
}
