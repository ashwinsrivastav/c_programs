#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("enter the numbers");
    scanf("%d",&a);
    int x[a],y[a],z[a],e=0,o=0;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2==0)
           {
           y[e++]=x[i];
           }
        else{
            z[o++]=x[i];
            }
    }
    printf("even numbers are:");
    for(int i=0;i<e;i++)
    {
           printf("%d ",y[i]);
        }
    printf("\n");
    printf("odd numbers are:");
    for(int i=0;i<o;i++)
    {
          printf("%d ",z[i]);
    }
    return 0;}
