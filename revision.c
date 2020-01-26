#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top,*new_node,*temp;
void push()//used to enter the data
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
	scanf("%d",new_node->data);
	new_node->next=NULL;
	if(top==NULL)
	{
      top=new_node;		
	}
	else
	{
		new_node->next=top;
		top=new_node;//iterate;
	}
	
}
void display()
{
//	struct node * temp;
	temp=top;
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int main()
{
	int i,n;
	printf("Enter the size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		push();
	}
	display();
	return (0);
}
