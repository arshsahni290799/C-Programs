#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node//syntax of decleration of node
{
	int data;
	struct node *next;
};
struct node *new_node,*temp,*start,*curr_node;
void create()
{
	new_node=(struct node*)malloc(sizeof(struct node));//malloc syntax =typecasting malloc(sizeof(data type))
	printf("Enter the data of new node\n");
	scanf("%d",&new_node->data);
new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		curr_node=new_node;
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
void reverse()
{
	struct node *prev=NULL,*next=NULL;
	curr_node=start;
	while(curr_node!=NULL)
	{
		next=curr_node->next;
		curr_node->next=prev;
		prev=curr_node;
		curr_node=next;
	}
	start=prev;
}
int main()
{
	int n,i=0;
	printf("Enter size\n");
	scanf("%d",&n);
	while(i<n)
	{
		create();
		i++;
	}
	reverse();
	display();
	return (0);
}
