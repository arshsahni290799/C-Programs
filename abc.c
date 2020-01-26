#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node *next;	
};
struct node *new_node,*top,*curr;
void push()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
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
void pop()
{
	top=top->next;
}
int main()
{
	int i,n;
	printf("Enter the size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		push();
	}
	pop();
	pop();
	display();
}
