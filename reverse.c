#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node* next;
};
struct node *curr,*start,*temp,*prev,*new_node;
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
		curr=curr->next;//moving ahead;
	}
}
void reverse()
{
	temp=start;
	start->next=NULL;
	while(temp->next!=NULL)
	{
		start=temp;
		temp=temp->next;
		temp->next=curr;
		curr=temp;
	}
}
void display()
{
	temp=start;
	printf("Your Linked List = \n");
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
	printf("Enter size of linked List\n");
	scanf("%d",&n);
	while(i<n)
	{
		create();
		i++;
	}
reverse();
	display();
	return(0);
}
