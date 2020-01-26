#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
  struct node *next;	
};
struct node *new_node, *start, *curr, *temp, *prev;
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
		curr=curr->next;
	}
}
void display()
{
	temp=start;
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
void sort()
{
	int t;
	prev=start;
	while(prev!=NULL)
	{
        temp=prev;
        while(temp!=NULL)
        {
        	if(prev->data > temp->data)
        	{
			
        	  t=prev->data;
        	  prev->data=temp->data;
        	  temp->data=t;
    
           }
               	  temp=temp->next;
		}
		prev=prev->next;
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
	sort();
	display();
	return (0);

}
