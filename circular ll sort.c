#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *next;
};
struct node *tail,*new_node,*curr,*prev;
void create()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(tail==NULL)
	{
		tail=new_node;
		tail->next=tail;
	}
	else
	{
	  new_node->next=tail->next;
	  tail->next=new_node;
	  tail=tail->next;
	}
}
void display()
{
	curr=tail->next;
	while(curr!=tail)
	{
		printf("%d--->",curr->data);
		curr=curr->next;
		if(curr->next==tail->next)
		{
			printf("%d--->",curr->data);
		}
	}
//	printf("%d--->",curr->data);
	printf("NULL\n");
}
void sort()
{
	int t;
	curr=tail->next;
	while(curr!=tail)
	{
		prev=curr;
		while(prev!=tail)
		{
			if(curr->data > prev->data)
			{
				t=curr->data;
				curr->data=prev->data;
				prev->data=t;
			}
			prev=prev->next;
			if(curr->data > prev->data)
			{
				t=curr->data;
				curr->data=prev->data;
				prev->data=t;
			}
		}
		curr=curr->next;
	}
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
	sort();
	display();
	return(0);
}
