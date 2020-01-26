#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct node
{
  char data;
  struct node *next;	
};
struct node * new_node,*top,*curr;
void push(char s)
{
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=s;
	new_node->next=NULL;
	if(top==NULL)
	{
		top=new_node;
	}
	else
	{
		new_node->next=top;
		top=new_node;
	}
}
int pop(char s)
{
	int f;
	if(top==NULL)
	{
		f=-1;
	}
	else
	{
		if(top->data=='{'&&s=='}'||top->data=='('&&s==')'||top->data=='['&&s==']')
		{
			top=top->next;
			f=1;
		}
		else 
		{
			 f=0;
		}
	}
	return f;
}
int main()
{
	int i,f;
	char str[200];
	printf("Enter the string\n");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='{'||str[i]=='('||str[i]=='[')
		{
			push(str[i]);
		}
		else if(str[i]=='}'||str[i]==')'||str[i]==']')
		{
			f=pop(str[i]);
			if(f==0)
			{
				break;
			}
			
		}
	}
	
	 if(top!=NULL || f==0||f==-1)//because at last your stuck is empty thats why if top!=NULL false
	{
		printf("false");
	}
	else if(f==1)
	{
		printf("True");
	}
	return(0);
}


