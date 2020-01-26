#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct nod *next;	
};
struct node *new_node,*curr,*temp,*start,*start1,*prev,*next,*curr1,*new_node1;
create()
{
	new_node=(struct node *)malloc(sizeof(struct node));
		new_node1=(struct node *)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		curr=start;
//		temp=start;
	}
	else
	{
		curr->next=new_node;
		curr=curr->next;
//	temp=temp->next;	
	}	
}
create_new()
{
	temp=start;
	while(temp!=NULL)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=temp->data;
		new_node->next=NULL;
		if(start1==NULL)
		{
			start1=new_node;
			curr=start1;
		}
		else
		{
			curr->next=new_node;
			curr=curr->next;
		}
		temp=temp->next;
	}
}
void pal()
{
	int count=0,n=0;
	curr=start1;
	//temp=start1;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		n++;//for count
	}
	start1=prev;
	//heere new link list created and reversed
	while(start!=NULL)
	{
		if(start->data==start1->data)
		{
			count++;
		}
		start=start->next;
		start1=start1->next;
	}
  //    printf("%d",count);
	if(count==n)
	{
		printf("Palendrome");
	}
	else
	{
		printf("Not Palendrome");
	}
}
int main()
{
	int i=0,n=4;
	while(i<n)
	{
		create();
		i++;
	}
create_new();
	pal();
//	display();
	return(0);
}
