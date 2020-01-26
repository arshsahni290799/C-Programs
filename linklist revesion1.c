#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *new_node,*start,*curr;
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
void insert_b()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value u want to enter in begining\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->next=start;
	start=new_node;
}
void insert_e()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value u want to place at end\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	curr=start;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	curr->next=new_node;
}
void insert_p()
{
	int p,i;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the position where u want to enter the new_node\n");
	scanf("%d",&p);
	printf("Enter the value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	curr=start;
	for(i=1;i<(p-1);i++)
	{
		curr=curr->next;
	}
	new_node->next=curr->next;
	curr->next=new_node;
	
}
void delete_b()
{
	curr=start;
	start=start->next;//now the start will become one ahead of previous
	free(curr);
}
void delete_e()
{
	struct node *prev;
	curr=start;
	while(curr->next!=NULL)
	{
		prev=curr;
		curr=curr->next;
		
	}
	prev->next=NULL;
	free(curr);
	
}
delete_p()
{
	int p,i;
	struct node *prev;
	printf("Enter the position where u want to delete the node\n");
	scanf("%d",p);
	curr=start;
	for(i=0;i<p-1;i++)
	{
		prev=curr;
		curr=curr->next;
	}
    prev->next=curr->next;
	//curr->next=NULL;
	//free(curr);	
}
int main()
{
	int i=0,n,op=0;

	while(op<8)
	{
			printf("press1 to create\npress2 to display\npress3 insert in begining\npress4 insert in end\npress5 insert in any position\npress6 delete in begning\n press7 delete in end\n");
	        scanf("%d",&op);
	        
		if(op==1)
		{
			printf("Enter size of linklist\n ");
			scanf("%d",&n);
			i=0;
			while(i<n)
			{
				create();
				i++;
			}
		}
		else if(op==2)
		{
			display();
		}
		else if(op==3)
		{
			insert_b();
		}
		else if(op==4)
		{
			insert_e();
		}
		else if(op==5)
		{
			insert_p();
		}
		else if(op==6)
		{
			delete_b();
		}
		else if(op==7)
		{
			delete_e();
		}
	}
	return(0);
	
}
