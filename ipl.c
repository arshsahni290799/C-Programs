#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked

int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}


long int max (long int a, long int b, long int c){

if(a>=b && a>=c) 
return a;
else if(b>=a && b>=c) 
return b;
else if(c>=a && c>=b) 
return c;


}


int main()
{
long int n,i,j;
scanf("%ld",&n);
int fees[n+1];
long int best[n+1][3];
for(i=1;i<n+1;i++) fees[i]=read_int();
{

best[n][0]=0; best[n][1]=fees[n]; best[n][2]=fees[n];
}
fees[0]=0;
for(j=n-1;j>=0;j--)
{
best[j][0] = max(best[j+1][0],best[j+1][1],best[j+1][2]);
best[j][1] = fees[j] + best[j+1][0];
best[j][2] = fees[j] + best[j+1][1];
}
printf("%ld\n",best[0][0]);
return(0);
}

