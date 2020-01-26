#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node * next;
};
struct node *temp,*new_node,*tail,*curr;//in tis we use tail
int count=0;
void create()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(tail==NULL)
	{
		tail=new_node;
		tail->next=tail;
		count++;
	}
	else
	{
		new_node->next=tail->next;
		tail->next=new_node;
		tail=new_node;
		count++;
	}
}
void display()
{
	temp=tail->next;
	while(temp!=tail)
	{
		printf("%d--->",temp->data);
		temp=temp->next;
	}
	printf("%d-->",temp->data);
	printf("NULL\n");
}
void insert_b()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->next=tail->next;
	tail->next=new_node;
}
insert_p()
{
	int k,i;
		new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
printf("Insert the position at which u have to enter");
scanf("%d",&k);
//printf("%d",count);
temp=tail->next;
for(i=1;i<=count;i++)
{
	if(i==k)
	{
		break;
	}
	temp=temp->next;
}
new_node->next=tail->next->next;
tail->next->next=new_node;

}
void delete_b()
{
	temp=tail->next;
	curr=temp;
	temp=temp->next;
	tail->next=temp;
	free(curr);//dememory allocation
}
void insert_e()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value u want to enter in the end of circular link list\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->next=tail->next;
	tail->next=new_node;
	tail=new_node;
}
delete_e()
{
	temp=tail->next;
	while(temp->next!=tail)
	{
		temp=temp->next;
	}
	temp->next=tail->next;
	tail=temp;//now the last will be orignal last before so tail will now prev becomes tail
//free(tail);

}
void delete_p()
{
	int k,i;
	temp=tail->next;
	printf("Enter the position at which u want to delete\n");
	scanf("%d",&k);
	for(i=1;i<=count;i++)
	{
		if(k==i)
		{
			break;
		}
		curr=temp;
		temp=temp->next;
	}
	curr->next=temp->next;
}
int main()
{
	int i=0,n;
	printf("enter size\n");
	scanf("%d",&n); 
	while(i<n)
	{
		create();
		i++;
	}
	//insert_b();
	//insert_p();
	//delete_b();
	//insert_e();
	//delete_e();
	delete_p();
	display();
	return(0);
}
