#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node* next;	
};
struct node *start, *temp, *curr,*new_node, *prev;
int count=0;
void create()
{
	new_node=(struct node*)malloc(sizeof(struct node));//mem allocation of new node
	printf("Enter the value\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		curr=new_node;
	}
	else
	{
		curr->next=new_node;
		curr=curr->next;
	}
}
void display()
{
	temp=start;
	printf("Linked List :\n");
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->next;//traversing
		count++;
	}
	printf("NULL\n");
}
void insert_b()
{
	new_node=(struct node*)malloc(sizeof(struct node));//mem allocation of a new node
	printf("Enter the value u have to enter in begning\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->next=start;
	start=new_node;
	
}
void insert_e()
{
	temp=start;//because u have to go from starting u cannot go directly to end
	new_node=(struct node*)malloc(sizeof(struct node));//mem allocation of a new node
	printf("Enter the value u have to enter at the end\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new_node;
	
}
void insert_p()
{
	int p,i=1;
	printf("Enter the position after which u want to enter the value\n");
	scanf("%d",&p);
	if(count<p)
	{
		printf("Invalid input\n");
	}
	else
	{
		new_node=(struct node*)malloc(sizeof(struct node));//mem allocation of a new node
		printf("Enter the value\n");
		scanf("%d",&new_node->data);
		temp=start;//from begning
		while(i!=p)
		{
			temp=temp->next;//traversing;
			i++;
		}
		new_node->next=temp->next;
		temp->next=new_node;
	}
}
void delete_b()
{
	if(count==0)
	{
		printf("Linked list already empty");
	}
	else
	{
		temp=start;//storing so that it can be freed
		start=start->next;//make head the next node after first node at orignal linked list;
		free(temp);//dememory allocation after removing it from linked list
	}
}
void delete_e()
{
	temp=start;

	while(temp->next!=NULL)
	{
			prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	free(temp);
}
int main()
{
	int ch=0;
	while(ch!=8)
	{
		printf("\n 1-create\n2-display\n3-insertin begning\n4-insert at end\n5-insert at position\n6-delete at begning\n7-delete at end\n8-exit\n");
		scanf("%d",&ch);
	
		
		switch(ch)
	{
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			insert_b();
			break;
		case 4:
			insert_e();
			break;
		case 5:
		insert_p();
		    break;	
		case 6:
			delete_b();
			break;
		case 7:
			delete_e();
			break;
		case 8:
			break;
    }
	}
	return(0);
}
