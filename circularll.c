#include<stdio.h>
#include<conio.h>
#include<malloc.h>
//remember in circular linked list there is no null and we store the tail because tail->next=start;
struct node 
{
	int data;
	struct node *next;
};
struct node *new_node,*tail,*curr,*prev,*next;
void create()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter value\n");
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
		 tail=tail->next;//we have to move tail becuse it has to be end and store that value	
	}
}
void display()
{
	curr=tail->next;
	while(curr!=tail)
	{
		
		printf("%d--->",curr->data);
		curr=curr->next;
		if(curr==tail)
		{
			printf("%d--->",curr->data);
		}
	}
	printf("NULL\n");
}
void insert_b()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->next=tail->next;
	tail->next=new_node;
}
void insert_e()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->next=tail->next;
	tail->next=new_node;
	tail=tail->next;
}
void insert_p()
{
	int i,p;
	printf("Enter the position\n");
	scanf("%d",&p);
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	curr=tail->next;
	for(i=1;i<p;i++)
	{
		prev=curr;
		curr=curr->next;
	}
	new_node->next=prev->next;
	prev->next=new_node;
}
void delete_e()
{
	
	curr=tail->next;
	while(curr->next!=tail)
	{
		curr=curr->next;
	}
	curr->next=tail->next;
	tail=curr;
}
void delete_b()
{
	tail->next=tail->next->next;
}
void delete_p()
{
	int i,p;
	printf("Enter the position\n");
	scanf("%d",&p);
	for(i=1;i<=5;i++)
	{
		if(p==i)
		{
			break;
		}
		prev=curr;
		curr=curr->next;
	}
	prev->next=curr->next;
}
void reverse()
{
	curr=tail->next;
printf("%d--->",tail->data);
	while(curr!=tail)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		
	}
	next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		
	tail=prev;
}
int main()
{
	int i,n;
	printf("Enter size of list\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		create();
	}
//	delete_p();
reverse();
	display();
	return(0);
}

