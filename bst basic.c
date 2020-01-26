#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root,*new_node,*curr,*print;
void create()//this is used to create the root
{
	root=(struct node *)malloc(sizeof(struct node));
	//root=NULL;
	
		printf("Enter the root node\n");
		scanf("%d",&root->data);
		root->left=NULL;
		root->right=NULL;
	
}
void insert_node()//used to insert the nodes into the tree
{
	if(root==NULL)
	{
		printf("Root is not created\n");
	}
	else
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		printf("Enter the value\n");
		scanf("%d",&new_node->data);
		new_node->left=NULL;
		new_node->right=NULL;
		curr=root;//this curr will take u to that place where u will insert the node
		while(curr!=NULL)
		{
			print=curr;
			if(new_node->data < curr->data)
			{
				curr=curr->left;
			}
			else if((new_node->data) >= (curr->data))
			{
				curr=curr->right;
			}
		}
		if(new_node->data < print->data)//now u are inserting the value into the node
		{
			print->left=new_node;//left side small value
		}
		else
		{
			print->right=new_node;//right side big value
		}
	}
}
void inorder(struct node *root)
{
	if(root !=NULL)
	{
		inorder(root->left);//left
		printf("%d ",root->data);//root
		inorder(root->right);
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);//root
		preorder(root->left);//left
		preorder(root->right);//right
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		
		postorder(root->left);//left
		postorder(root->right);//right
		printf("%d ",root->data);//rootssssss
	}
}

int main()
{
	int op=0;
	
	while(op!=6)
	{
	   printf("press1 create press2 insert_node press3 inorder press4 preorder press5 post order press6 exit\n");
	   scanf("%d",&op);	
	   if(op==1)
	   {
	   	create();
	   }
	   else if(op==2)
	   {
	   	  insert_node();
	   }
	   else if(op==3)
	   {
	   	inorder(root);
	   	
	   }
	   else if(op==4)
	   {
	   	preorder(root);
	   }
	   else if(op==5)
	   {
	   	postorder(root);
	   }
	}
   return(0);
}
