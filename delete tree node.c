#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *right,*left;
};
struct node *print,*curr,*new_node,*root;
void create()
{
	root=(struct node *)malloc(sizeof(struct node));
	printf("Enter the root\n");
	scanf("%d",&root->data);
	root->right=NULL;
	root->left=NULL;
}
void insert()
{
	if(root!=NULL)
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		printf("Enter the value\n");
		scanf("%d",&new_node->data);
		new_node->right=NULL;
		new_node->left=NULL;
		curr=root;
		while(curr!=NULL)
		{
			print=curr;
			if(curr->data > new_node->data)
			{
				curr=curr->left;
			}
			else if(curr->data <= new_node->data)
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
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
				inorder(root->right);
	}
}
struct node* min(struct node* root)
{
	
	if(root==NULL)
	{
		return NULL;
	}
	else if(root->left!=NULL)
	{
		return min(root->left);
	}
	return (root);
}
struct node* max(struct node* root)
{
	if(root==NULL)
	{
		return NULL;
	}
	else if(root->right!=NULL)
	{
		return max(root->right);//because max of left side is always on right of left side
	}
	return root;
}
struct node * del(struct node *root,int x)
{
	if(root==NULL)
	{
		printf("Plz try again");
	
	}
		//now searching x
	if(root->data > x)
	{
		root->left=del(root->left,x);
	}
	else if(root->data < x)
	{
		root->right=del(root->right,x);
	}
	else
	{
	
	if(root->right==NULL && root->left==NULL)//no child
	{
		free(root);
		return NULL;
	}
	else if(root->right==NULL || root->left==NULL)//1 child
	{
		struct node * temp;
		if(root->left==NULL)
		{
			temp=root->right;
			
		}
		else
		{
			temp=root->left;
			
		}
		free(root);
		return temp;
	}
	else//2 child succsessor find the minimum of right side which is on the left and print that is place of that 2 child node
	{
		/*struct node* temp=min(root->right);
		root->data=temp->data;//because root->data becomes that temp data
		root->right=del(root->right,temp->data);*/
		struct node *temp=max(root->left);
		root->data=temp->data;
		del(root->left,temp->data);
	}
}
return (root);
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
	printf("Before delete\n");
	inorder(root);
	int x;
	printf("Enter the value u want to delete\n");
	scanf("%d",&x);
	root=del(root,x);
	printf("After the deletion\n");
	inorder(root);
	return(0);
}
