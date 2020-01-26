#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node *root,*new_node,*curr,*print;
void create()
{
	root=(struct node *)malloc(sizeof(struct node));
	printf("Enter the root value\n");
	scanf("%d",&root->data);
	root->left=NULL;
	root->right=NULL;
}
void insert()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value\n");
	scanf("%d",&new_node->data);
	new_node->left=NULL;
	new_node->right=NULL;
	curr=root;
	while(curr!=NULL)
	{
	  print=curr;//one back then curr so as to update the address
	  if(curr->data > new_node->data)
	  {
	  	curr=curr->left;//pointing to the position where u want to insert the node;
	  }
	  else if(curr->data < new_node->data)
	  {
	  	curr=curr->right;
	  }
	}
	if(print->data > new_node->data)
	{
		print->left=new_node;
	}
	else
	{
		print->right=new_node;
	}
}
void height()
{
	int c1=0,c2=0;
	curr=root;
	while(curr!=NULL)
	{
		curr=curr->left;
		c1++;
	}
	struct node *curr1;
	curr1=root;
	while(curr1!=NULL)
	{
		curr1=curr1->right;
		c2++;
	}
	
	if(c1>c2)
	{
	   printf("%d",c1);	
	}
	else
	{
		printf("%d",c2);
	}
}
int main()
{
	int i=0,n;
	create();
	printf("Enter the size\n");
	scanf("%d",&n);
	while(i<n)
	{
		insert();
		i++;
	}
	height();
}
