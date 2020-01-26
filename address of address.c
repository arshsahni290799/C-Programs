#include<stdio.h>
#include<conio.h>
int main()
{
	int a,*p;//pointer variable
	int **q;//address of address variable it stores address of pointer which further stores address of a varible contaning a value
	a=10;
	p=&a;//pointer varible store address of normal variable and * gives value at that address
	printf("a = %d\n",*p);
	printf("address of a = %d\n",p);
	printf("pointer vaiable address = %d\n",&p);
	q=&p;//stores address of pointervariable *q willgive value at that address whic is address of pointer varible *(*q) will give further value at pointer address
	printf("pointer variable address = %d\n",q);
	printf("address of a = %d\n",*q);
	printf("value at pointer variable = %d\n",*(*q));
	printf("address of q = %d\n",&q);
}
