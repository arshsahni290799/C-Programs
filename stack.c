#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *top, *new_node, *curr,*prev;
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
void pop()
{
	curr=top;
	top=top->next;
	free(curr);//used to dealocate m/m;
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
void p()
{
	curr=top;
while(curr->next!=NULL)
{
	prev=curr;
	curr->data=(curr->data * 2);
	curr=curr->next;
}
prev->next=NULL;
free(curr);
}
int main()
{
	int i=0,n;
	printf("Enter the size of stack\n");
	scanf("%d",&n);
	while(i<n)
	{
		push();
		i++;
	}
	//pop();
	p();
	display();
	return(0);
}
