#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct qnode
{
	int d;
	struct qnode *next;
};
struct qnode *new_node1,*front,*rear;
struct node *root,*new_node,*curr,*print;
void create()
{
	root=(struct node *)malloc(sizeof(struct node));
	printf("Enter the root value\n");
	scanf("%d",&root->data);
	root->left=NULL;
	root->right=NULL;
}
void insert_t()
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
void levelorder(struct node* root)
{
	if(front==NULL)
	insert(root);
	else
	{
		while(front!=NULL)
		{
			int d=del();
			printf("%d ",d);
			insert(root->left->data);
			insert(root->right->data); 
		}
	}
}
void insert(struct qnode *curr1)
{
	new_node1=(struct qnode*)malloc(sizeof(struct qnode));
	new_node1->data=curr1->data;
	new_node1->next=NULL;
	if(front==NULL)
	{
		front=new_node1;
		front=rear;
	}
	else
	{
		rear->next=new_node1;
		rear=rear->next;
	}
}
int del()
{
	int x=front;
	front=front->next;
	return x;
}
int main()
{
	int i,n;
	create();
	printf("Enter the size\n");
	scanf("%d",&n);
	
	while(i<n)
	{
		insert_t();
		i++;
	}
	levelorder(root);
	return (0);
}
