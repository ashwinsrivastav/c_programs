#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=1,arr[]={0,4,3,5,2,4,6,1,3,5,7};
    for(int i=1;i<=4;i++)
    {
        for(int j=0;j<=7;j++)
        {
            if(j==arr[k])
                printf("%d ",k++);
            else
           printf("  ");
        }
        printf("\n");
    }
    return 0;
}
