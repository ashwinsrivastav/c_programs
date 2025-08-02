#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k;
    printf("enter the number of element");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to search");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d found at this %d position",a[i],i+1);
            break;
        }
    }
    if(i==n)
        printf("number does not found");
    return 0;
}
