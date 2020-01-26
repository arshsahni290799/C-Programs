#include<stdio.h>
#include <conio.h>
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
	new_node->prev=NULL;
	if(start==NULL)
	{
		start=new_node;
		tail=start;//start will be first and last
		
		start->next=new_node;
		
	}
	else
	{
		tail->next=new_node;
		new_node->prev=tail;
		tail=tail->next;
	}
	
}
void display_start()
{
	temp=start;
	printf("Linked list = \n");
	while(temp!=0)
	{
		printf("%d--->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
void display_end()
{
	temp=tail;
	printf("Linked list from tail = \n");
	while(temp!=0)
	{
		printf("%d--->",temp->data);
		temp=temp->prev;
	}
	printf("NULL\n");
	
}
void insert_begin()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value u have to add in begning\n");
	scanf("%d",&new_node->data);
	new_node->prev=NULL;
	new_node->next=start;
	start->prev=new_node;
	start=new_node;
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
	insert_begin();
	display_start();
	display_end();
}
