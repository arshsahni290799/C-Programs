#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root,*curr,*print,*new_node;
int i=0,arr[100];
void create()
{
	root=(struct node *)malloc(sizeof(struct node));
	printf("Enter the root node\n");
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
	while(curr!=NULL)//finding place for node to be entered
	{
		print=curr;
		if(new_node->data > curr->data)
		{
			curr=curr->right;
		}
		else if(new_node->data <= curr->data)
		{
			curr=curr->left;
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
void inorder(struct node * root)
{
	if(root!=NULL)
	{
	
	inorder(root->left);
	 arr[i]=root->data;
	 i++;
//	 printf("%d ",root->data);
	inorder(root->right);
   }
	
}
int main()
{
	int i=0,n,num,flag=0;
		create();
		printf("Enter the size \n");
		scanf("%d",&n);
		while(i<n)
		{
			insert();
			i++;
		}

       inorder(root);		
     printf("Enter the value which u want to find in the tree\n");
       scanf("%d",&num);
       for(i=0;i<n+1;i++)
       {
       	 if(arr[i]==num)
       	 {
       	      flag=1;
			   break; 	
		}
		else
		{
			flag=0;
		}
	   }
	   if(flag==0)
	   {
	   	printf("NUMBER NOT PRESENT\n");
	   }
	   else
	   {
	   	printf("NUMBER IS PRESENT\n");
	   }
	return (0);

}
