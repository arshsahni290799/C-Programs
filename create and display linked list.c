#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node//syntax of decleration of node
{
	int data;
	struct node *next;
};
struct node *new_node,*temp,*start,*curr_node;
void create()
{
	new_node=(struct node*)malloc(sizeof(struct node));//malloc syntax =typecasting malloc(sizeof(data type))
	printf("Enter the data of new node\n");
	scanf("%d",&new_node->data);
new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		curr_node=new_node;
	}
	else
	{
		curr_node->next=new_node;
		curr_node->next;//this is to move ahead
	}
	fflush(stdin);
}
void display()
{	
 temp=start;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;//this is to move ahead
		count++;
	}
	printf("NULL");
	
}
int main()
{
	int n=0;
do
	{
		printf("1 Create\n 2 display\n 3 Exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3 :
				break;
		}
	}while(n!=3);
	return (0);
}
