#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node* next;//there are three columns one is next other is prev and other is data
    struct node *prev;	
};
struct node *new_node, *start, *temp,*tail;
void create()
{
		new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->prev=tail;
	if(start==NULL)
	{
		start=new_node;
		tail=start;
		start->prev=NULL;
		start->next=NULL;
	}
	else
	{
		new_node->prev=tail;
		new_node->next=NULL;
		tail->next=new_node;
		tail=new_node;
	}
}
void display_start()
{
	temp=start;
	printf("Linked List = \n");
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
void display_end()
{
	temp=tail;
	printf("Linked List = \n");
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->prev;
	}
	printf("NULL\n");
}

int main()
{
int i=0,n;
	printf("Enter size\n");
	scanf("%d",&n);
	while(i<n)
	{
		create();
		i++;
	}
	display_start();
	display_end();	
}
