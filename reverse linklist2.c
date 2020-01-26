#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
  struct node *next;	
};
struct node *new_node, *start, *curr, *temp, *next, *prev;
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
int main()
{
	int i=0,n;
	printf("Enter size of linked list\n");
	scanf("%d",&n);
	printf(" n = %d",n);
	while(i<n)
	{
		create();
		i++;
	}
	
	display();
	return (0);
}
