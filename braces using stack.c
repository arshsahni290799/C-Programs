#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
   int data;
   struct node * next;	
};
struct node *curr,*top,*new_node;
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
	
	if(top->data=='(' && s==')'||top->data=='[' && s==']'||top->data=='{' && s=='}')
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
	char str[20];
	int i,f;
	printf("Enter the string\n");
	scanf("%s",str);
	while(i<strlen(str))
	{
		if(str[i]=='('||str[i]=='['||str[i]=='{')
		{
			push(str[i]);
		}
	 else if(str[i]==')'||str[i]==']'||str[i]=='}')
		{
			f=pop(str[i]);
			if(f==0)
		{
			break;
		}
		}
		
		i++;
	}
	if(f==1)
	{
		printf("True\n");
	}
	else
	{
		printf("false\n");
	}
	return(0);
}
