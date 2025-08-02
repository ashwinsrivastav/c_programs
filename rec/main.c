#include <stdio.h>
#include <stdlib.h>
 int factorial(int);
int main()
{
    int a,result;
    printf("entern a number\n");
    scanf("%d",&a);
    result=factorial(a);
    printf("factorial=%d",result);
    return 0;
}
int factorial(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return(a*factorial(a-1));
    }
}
