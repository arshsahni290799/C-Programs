#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start,*new_node,*curr,*prev,*next,*start1,*temp,*curr1;
void create()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
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
		curr=curr->next;
	}
}
void display()
{

	curr=start;
	while(curr!=NULL)
	{
		printf("%d--->",curr->data);
		curr=curr->next;
	}
	printf("NULL\n");
}
int pal()
{
	int f=0;
	temp=start;
	while(temp!=NULL)
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		new_node->data=temp->data;
		new_node->next=NULL;
		if(start1==NULL)
		{
			start1=new_node;
			curr=new_node;
		}
		else
		{
			curr->next=new_node;
			curr=curr->next;
		}
		temp=temp->next;
	}
	curr1=start1;
	while(curr1!=NULL)
	{
		next=curr1->next;
		curr1->next=prev;
		prev=curr1;
		curr1=next;
	}
	start1=prev;
	while(start!=NULL)
	{
		if(start->data!=start1->data)
		{
			return -1;
		}
		start=start->next;
		start1=start1->next;
	
   }
   return(0);
}
int main()
{
	int i,n;
	int x;
	printf("Enter the size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		create();
		
	}
	x=pal();
	if(x==-1)
	{
		printf("Not Palendrome\n");
	}
	else
	{
		printf("Palendrome\n");
	}
	//display();
}
