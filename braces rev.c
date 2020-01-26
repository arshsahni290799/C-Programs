#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node *next;	
};
struct node *new_node,*top,*curr,*prev;
void push(int num)
{
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=num;
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
int pop()
{
   int x=top->data;
	top=top->next;
	return x;
}
void display()
{
	curr=top;
	while(curr!=NULL)
	{
		printf("%d",curr->data);
		curr=curr->next;
	}
}
int main()
{
	int i,sum=0,j,mul=1,count=0;
	char str[100];
  printf("Enter the string\n");
  scanf("%s",str);
  for(i=0;i<strlen(str);i++)
  {
  	if(str[i]>=48 && str[i]<=57)
  	{
  	   int x=str[i]-48;
		 push(x);	
	}
	if(str[i]=='+')
	{
		while(top!=NULL)
	  {
	  	int x=pop();
	  	sum=sum+x;
	  	
	  
	  }
	  push(sum);
	
	}
	else if(str[i]=='*')
	{
		 while(top!=NULL)
	  {
	  	int x=pop();
		mul=mul*x;
	  }
	  	push(mul); 
	}
  }
  display();
}
