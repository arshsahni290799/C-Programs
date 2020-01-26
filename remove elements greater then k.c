#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node//syntax of decleration of node
{
	int data;
	struct node *next;
};
struct node *new_node,*temp,*start,*curr_node,*prev;
int k=2;
void create()
{
	new_node=(struct node*)malloc(sizeof(struct node));//malloc syntax =typecasting malloc(sizeof(data type))
	printf("Enter the data of new node\n");
	scanf("%d",&new_node->data);
new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		curr_node=start;
	}
	else
	{
		curr_node->next=new_node;
		curr_node=curr_node->next;//this is to move ahead
	}
}
void display()
{	
 temp=start;
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->next;//this is to move ahead
	}
	printf("NULL\n");
	
}
void dup()
{
	temp=start;
	prev=start;
	
	
	 while(temp->next!=NULL)
	{ 
		temp=temp->next;
		if(temp->data >= k)
		{
			prev->next=temp->next;
		}
		else
		{
			prev=temp;
		}
	}
	
}
int main()
{
	int i=0,n;
	printf("Enter size\n");
	scanf("%d",&n);
	while(i<n)
	{
		create();
		i++;
	}
	dup();
	display();
	return(0);
}
