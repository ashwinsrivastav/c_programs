#include <stdio.h>
#include <stdlib.h>
//butterfly has been made successefully
int main()
{
    int x,y,z;
    printf("enter the number of rows");
    scanf("%d",&x);
    int j=x,k=x;
    for(int i=0;i<x;i++)
    {
        for(int e=0;e<=i;e++)
        {
            printf("*");
        }
        for(z=j-1;z>0;z--)
                {
                    printf(" ");
            }

        for(z=j-1;z>0;z--)
                {
                    printf(" ");
            }
        for(y=0;y<=i;y++)
        {
         printf("*");
        }
        printf("\n");
          j--;
    }
    for(int i=x-1;i>0;i--)
    {
          for(int e=i;e>0;e--)
        {
            printf("*");
        }
        for(z=0;z<x+1-k;z++)
                {
                    printf(" ");
            }
      for(z=0;z<x+1-k;z++)
                {
                    printf(" "); // will contribute in butterfly making
            }
        for(y=i;y>0;y--)
        {
         printf("*");
        }

        printf("\n");
        k--;
    }
    return 0;
}
