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
void inorder(struct node *node)
{
	if(node!=NULL)
	{
	
	inorder(node->left);
	printf("%d",node->data);
	inorder(node->right);
}
}
void mirror(struct node *node)
{
	if(node==NULL)
	{
		return(0);
	}
	else
	{
		mirror(node->left);//this will iterate the left side
		mirror(node->right);//this will iterate right side
		struct node *temp;
		temp=node->left;//now we are picking left side
		node->left=node->right;
		node->right=temp;
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
	mirror(root);
	inorder(root);
}
