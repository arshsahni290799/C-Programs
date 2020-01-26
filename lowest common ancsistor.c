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
struct node* lca(struct node *root,int n1,int n2)
{
	if(root->data>n1 && root->data>n2)//left side;
	{
		 lca(root->left,n1,n2);//return because u have given a returntype because it is not null
	}
	else if(root->data<n1 && root->data<n2)//right side;
	{
		 lca(root->right,n1,n2);
	}
	return root;
}
int main()
{
	int i=0,n,n1,n2;
	create();
	printf("Enter the size\n");
	scanf("%d",&n);
	while(i<n)
	{
		insert();
		i++;
	}
	printf("Enter n1,n2\n");
	scanf("%d %d",&n1,&n2);
	struct node *p=lca(root,n1,n2);
	printf("LOWEST COMMON ANCESTOR = %d\n",p->data);
	return(0);
}
