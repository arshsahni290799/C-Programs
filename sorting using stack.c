#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node * next;
};
struct node *top,*new_node,*curr;
void push()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(top==NULL)
	{
		top=new_node;
	}
	else
	{
		new_node->next=top;
		top=new_node;
	}
}
void display()
{
	curr=top;
	while(curr!=NULL)
	{
		printf("%d--->",curr->data);
		curr=curr->next;
	}
	printf("NULL\n");
}
void sort()
{
	int t;
	struct node *prev;
	prev=top;
	while(prev!=NULL)
	{
		curr=prev;
		while(curr!=NULL)
		{
			if(prev->data > curr->data)
			{
				t=prev->data;
				prev->data=curr->data;
				curr->data=t;
			}
			curr=curr->next;
			
		}
		prev=prev->next;
	}
}
int getmin()
{
	int min=10000,a;
  curr=top;
  while(curr!=NULL)
  {
  	if(min>curr->data && min!=a)
  	{
  	   min=curr->data;
  	   a=min;
	  //curr->data=10000;	
	}
	curr=curr->next;
  }
  return a;
}
int main()
{
	int i=0,n;
	printf("Enter the size\n");
	scanf("%d",&n);
	while(i<n)
	{
	     push();
		i++;
	}
//	sort();	
int x=getmin();
printf("MINIMUM ELEMENT IN STACK = %d",x);
  //  display();
	return(0);
}
