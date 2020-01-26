3w2#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node* next;
};
struct node *start, *curr, *new_node,*temp,*prev;
void create()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
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
		curr=curr->next;//moving ahead iteration
	}
}
void display()
{
	temp=start;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;//moving ahead traversing
	}
	printf("NULL\n");
}
void delete_p()
{
	int i=0,p;
	printf("Enter position");
	scanf("%d",&p);
	temp=start;
	while(i<p-1)
	{
	  	
	  prev=temp;
	  temp=temp->next;
	  i++;
	}
	prev->next=temp->next;
	
}
int main()
{
	int i=0;
	while(i<5)
	{
	  create();
	 
	  i++;
    }
    delete_p();
     display();
	return (0);
}
