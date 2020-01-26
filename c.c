#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node 
{
   int data;
   struct node *next;	
};
 struct node *new_node,*temp,*start,*prev;
 void create()
 {
 	new_node=(struct node *)malloc(sizeof(struct node));
 	printf("Enter the value\n");
 	scanf("%d",&new_node->data);
 	new_node->next=NULL;
 	if(start==NULL)
 	{
 	  start=new_node;
	   temp=new_node;//to move ahead	
	}
	else
	{
		temp->next=new_node;
		temp=temp->next;
	}
 }
 void display()
 {
 	temp=start;
 	printf("Linked List = \n");
 	while(temp!=NULL)
 	{
 		printf("%d--->",temp->data);
 	   temp=temp->next;
	}
	printf("NULL\n");
 }
 void reorder()
 {
 	int k,i;
 	printf("Enter k \n");
 	scanf("%d",&k);
 	temp=start;
 	for(i=0;i<k;i++)
 	{
 		temp=start;
	 while(temp->next!=NULL)
	 {
	 	prev=temp;
	 	temp=temp->next;//to move ahead
	 }
	 prev->next=NULL;
	 temp->next=start;
	 start=temp;
 		
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
    reorder();
	display();
	return (0);

}
