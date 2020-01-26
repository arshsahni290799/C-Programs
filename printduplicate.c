#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *new_node,*start,*curr,*prev,*temp;
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
	while(curr!=NULL&&curr->data!=0)
	{
		printf("%d--->",curr->data);
		curr=curr->next;//for moving ahead
	}
	printf("NULL\n");
}
void dup()
{
	int count=0;
	curr=start;
	while(curr!=NULL)
	{
		count=0;
		prev=curr->next;
		while(prev!=NULL)
		{
			
			if(curr->data==prev->data)
			{
				temp->next=prev->next;
				count++;
				
			}
			temp=prev;
			prev=prev->next;
		}
		if(count==0)
		{
			curr->data=0;
		}
		curr=curr->next;
	}
}
void swap()
{
	curr=start;
	while(curr->next!=NULL)
	{
		prev=curr;
		curr=curr->next;
	}
	curr->next=start->next;
	start->next=NULL;
	prev->next=start;
	start=curr;
}
int main()
{
	int i=0,n;

	        
			printf("Enter size of linklist\n ");
			scanf("%d",&n);
			
			while(i<n)
			{
				create();
				i++;
			}			
			dup();
			//swap();
			display();
		
	return(0);
	
}
