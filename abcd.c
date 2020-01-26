#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *new_node,*start,*curr,*prev;
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
		curr=new_node;
	}
}
void display()
{
	printf("Your linked list = \n");
	curr=start;
	while(curr!=NULL)
	{
		printf("%d--->",curr->data);
		curr=curr->next;//for moving ahead
	}
	printf("NULL\n");
}
void dup()
{
	curr=start;
	while(curr!=NULL)
	{
		//curr=start;
		prev=curr->next;
		while(prev!=NULL)
		{
			if(curr->data==prev->data)
			{
				start=start->next;
				break;
			}
			prev=prev->next;
		}
		curr=curr->next;
		//curr=start;
	}
}
int main()
{

int n;
			printf("Enter size of linklist\n ");
			scanf("%d",&n);
			int i=0;
			while(i<n)
			{
				create();
				i++;
			}
			dup();
			display();
			return(0);
}
