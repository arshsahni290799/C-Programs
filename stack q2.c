#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct node 
{
	char data;
	struct node * next;
};
struct node *top,*new_node,*curr;
void push(char s)
{
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=s;
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
int main()
{
	int i;
	char str[100];
	printf("Enter the string\n");
	scanf("%s",str);
	for(i=0;i<strlen(str))
	{
		if(str[i]>=48 && str[i]<=57)
		{
			push(str[i]);
		}
	}
}
