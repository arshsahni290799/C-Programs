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

void reorder(int n)
{
	curr=start;
	
	while(curr!=NULL)
	{
		temp=curr;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		temp->next=curr->next;
		curr->next=temp;
		curr=curr->next->next;
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
	printf("Enter size of linked list\n");
	scanf("%d",&n);
	while(i<n)
	{
		create();
		i++;
	}
	reorder(n);
	display();
return (0);
}
