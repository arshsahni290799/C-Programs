#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node* next;	
};
struct node *start, *temp, *curr,*new_node, *prev,*start1,*curr1,*new_node1;
int count=0;
void create()
{
	new_node=(struct node*)malloc(sizeof(struct node));//mem allocation of new node
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
void create1()
{
	new_node1=(struct node*)malloc(sizeof(struct node));//mem allocation of new node
	printf("Enter the value\n");
	scanf("%d",&new_node1->data);
	new_node1->next=NULL;
	if(start1==NULL)
	{
		start1=new_node1;
		curr1=new_node1;
	}
	else
	{
		curr1->next=new_node1;
		curr1=curr1->next;
	}
}
void display()
{
	temp=start;
	printf("Linked List :\n");
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->next;//traversing
		count++;
	}
	printf("NULL\n");
}
void sum()
{
	temp=start;
	int sum1=0,i=0,sum2=0;
	while(temp!=NULL)
	{
		sum1=sum1+(temp->data*pow(10,i));
		i++;
		temp=temp->next;
	}
	temp=start1;
	i=0;
	while(temp!=NULL)
	{
		sum2=sum2+(temp->data*pow(10,i));
		i++;
		temp=temp->next;
	}
	
 int sum=sum1+sum2;
 while(sum!=0)
 {
 	int x=sum%10;
 	printf("%d--->",x);
 	sum=sum/10;
 }
 printf("NULL\n");
}
int main()
{
	int i=0,n;
	printf("Enter the size\n");
	scanf("%d",&n);
	while(i<n)
	{
		create();
	
	i++;
	}
	i=0;
	while(i<n)
	{
		create1();
	
	i++;
	}
	sum();
	//display();
	return (0);
}
