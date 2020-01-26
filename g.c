#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
   struct node * next;	
};
struct node *curr,*prev,*start,*new_node;
void create()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
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
	curr=start;
	printf("Linked list = \n");
	while(curr!=NULL)
	{
		printf("%d--->",curr->data);
		curr=curr->next;
	}
	printf("NULL\n");
}
void swap()
{
	curr=start->next;
	prev=start;
	int temp;
	while(curr!=NULL)
	{
		temp=prev->data;
		prev->data=curr->data;
		curr->data=temp;
		prev=curr->next;
		curr=curr->next->next;
	}
	
}
int main()
{
	int i=0,n;
	printf("Enter the size\n");
	scanf("%d",&n);
	while(i<n)
	{
		create();
		i++;
	}
	swap();
	display();
	return(0);
}
