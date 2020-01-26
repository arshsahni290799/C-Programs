#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *start,*tail,*new_node,*curr,*prev;
void create()
{
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->prev=NULL;
	if(start==NULL)
	{
		start=new_node;
		tail=new_node;
	}
	else
	{
		tail->next=new_node;
		new_node->prev=tail;
		tail=new_node;//tail is moved because it has to be at end and store that addreaa
	}
}
void display()
{
	printf("Linked list = \n");
	curr=start;
	while(curr!=NULL)
	{
		printf("%d-->",curr->data);
		curr=curr->next;
	}
	printf("NULL\n");
}
void insert_b()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->prev=NULL;
	new_node->next=start;
	start->prev=new_node;
	start=new_node;
}
void insert_e()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->prev=NULL;
	tail->next=new_node;
	new_node->prev=tail;
	tail=tail->next;
}
insert_p()
{
	int i,p;
	printf("Enter the position\n");
	scanf("%d",&p);
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->prev=NULL;
	curr=start;
	for(i=1;i<p;i++)
	{
		prev=curr;
		curr=curr->next;
		
	}
	new_node->prev=prev;
	prev->next=new_node;
	new_node->next=curr;
	
}
void delete_b()
{
	//curr=start;
	start=start->next;
	//free(curr);
}
void delete_e()
{
	curr=tail;
	tail=tail->prev;
	tail->next=NULL;
	free(curr);
}
void delete_p()
{
	int p,i;
	printf("Enter the position");
	scanf("%d",&p);
	curr=start;
	for(i=1;i<p;i++)
	{
		prev=curr;
		curr=curr->next;
	}
	prev->next=curr->next;
	curr->next->prev=prev;
}
void sort()
{
	int t;
	prev=start;
	while(prev!=NULL)
	{
		curr=prev;
		while(curr!=NULL)
		{
			if(prev->data > curr->data)
			{
				t=prev->data;
				prev->data=curr->data;
				curr->data=t;
			}
			curr=curr->next;
		}
		prev=prev->next;
	}
}
int main()
{
	int i,n;
	printf("Enter the size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		create();
	}
	sort();
	display();
}
