#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
int n,a,b,c,d,e,f,temp;
   printf("enter the amount\n");
   scanf("%i",&n);
    temp=n;
       a=n/100;
       n=n%100;
       b=n/50;
       n=n%50;
       c=n/10;
       n=n%10;
       d=n/5;
       n=n%5;
       e=n/2;
       n=n%2;
       f=n/1;
       printf("hundreds=%d\nfifties=%d\ntens=%d\nfives=%d\ntwos=%d\nones=%d",a,b,c,d,e,f);

    return 0;
}
