#include<stdio.h>
#include<stdlib.h>
char* solve(char *s) 
{
    char str[100][100];
    char p[1]="\0";
    int i,j=0,k=0;
    if(strlen(s)==1)
    {
        return s;
    }
    // if(s[0]=='a'||s[1]=='w'||s[2]=='\0')
    // {
    //     return "aw\0";
    // }
    for(i=0;i<strlen(s)-1;i++)//0//1
    {
        if(s[i]==' ')
        {
            str[j][k]='\0';
           
            j++;
            k=0;
        }
        else
        {
            str[j][k]=s[i];//00 a,01-w
            k++;
        }
    }
    str[j][k]=s[i];
    //printf("%d ",j);
    for(i=j;i>0;i--)\
    {
        printf("%s ",str[i]);
    }
    printf("%s",str[i]);
    return p;
}
int main()
{
	char str[200];
	printf("Enter the string\n");
	gets(str);
	solve(str);
	return 0;
}
