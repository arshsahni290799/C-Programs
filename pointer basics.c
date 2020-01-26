#include<conio.h>
#include<stdio.h>
int main()
{
	int a;
	int *p=NULL;//decleration of pointer
	printf("Enter the number\n");
	scanf("%d",&a);
	p=&a;//stores address of normal variable
	printf("NUmber - %d\n",*p);//*gives value at that address
	printf("NUmber - %u\n",p);//address of of a
	printf("NUmber - %u\n",&p);//address of p;
}
