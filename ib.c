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
int arr[100],i=0;
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		arr[i]=root->data;
		i++;
		inorder(root->right);
		
	}
}
void kth(struct node *root)
{
	int j,flag=0;
	inorder(root);
	for(j=0;j<i;j++)
	{
		if(arr[i]>arr[i+1])
		{
			printf("%d %d",arr[i],arr[i+1]);
			break;
		}
		else 
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		printf("0");
	}
}

int main()
{
	int k=0,n,num,j;
	create();
	printf("Enter the size\n");
	scanf("%d",&n);
	int arr1[n+1],arr2[n+1];
	while(k<n)
	{
		insert();
		k++;
	}
    kth(root);
	return(0);
	
}
