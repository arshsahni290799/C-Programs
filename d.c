#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node* next;
};
struct node *curr,*start,*temp,*prev,*new_node,*start1;
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
	struct node *curr, *next;
	//curr=start;
	temp=start;
	int m,n,i;
	printf("Enter m and n\n");
	scanf("%d %d",&m,&n);
	for(i=1;i<m;i++)
	{
		start=start->next;
	}
	for(i=m-1;i<n;i++)
{
      curr=start;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
}
	start=prev;
}
void create1()
{
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
	create1();
	reverse();
	display();
return (0);
}
