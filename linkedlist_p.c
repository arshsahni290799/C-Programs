#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node* next;	
};
struct node *curr,*new_node,*start;
void create()
{
	new_node=(struct node*)malloc(sizeof(struct node));
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
	while(curr!=NULL)
	{
		printf("%d--->",curr->data);
		curr=curr->next;
	}
	printf("NULL\n");
}
void swap()
{
	int a,b;
	a=start->data;
	curr=start;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	b=curr->data;
	curr->data=a;
	start->data=b;
}
int main()
{
	int n,i=0;
	printf("Enter the size of linked list\n");
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
