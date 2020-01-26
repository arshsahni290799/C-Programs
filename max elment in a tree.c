#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node *left,*right;
};
struct node *root,*new_node,*curr,*print;
int max=0;
void create()
{
	root=(struct node *)malloc(sizeof(struct node));
	printf("Enter the root\n");
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
		print=curr;
		if((curr->data) > (new_node->data))
		{
			curr=curr->left;
		}
		else if((curr->data) <= (new_node->data))
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
struct node *temp;
void inorder(struct node *root)
{
	
	
	if(root!=NULL)
	{
		inorder(root->left);
		if(root->data>max)
		{
			max=root->data;
			temp=root;
		}
		
		inorder(root->right);
	}
	
}
int max1=0;
void inorder2(struct node * root)
{
	temp->data=0;
	if(root!=NULL)
	{
		inorder2(root->left);
		if(root->data>max1&&root->data!=0)
		{
			max1=root->data;
		}
		
		inorder2(root->right);
	}
}
int main()
{
	int i,n;
	create();
	printf("Enter the size\n");
	scanf("%d\n",&n);
	
	while(i<n)
	{
		insert();
		i++;
	}
	inorder(root);
	inorder2(root);
	printf("FIRST MAXIMUM VALUE IN A TREE = %d\n",max1);
	printf("SECOND MAXIMUM VALUE IN A TREE = %d\n",max1);
	return(0);
}
