#include <stdio.h>
#include <stdlib.h>

int main()
    {
      int k[]={0,1,1,1,1,2,1,1,3,3,1,1,4,6,4,1},i,j,arrr[]={0,5,4,6,3,5,7,2,4,6,8,1,3,5,7,9},t=1;
      for(i=0;i<=4;i++)
      {
          for(j=1;j<=9;j++)
          {
              if(j==arrr[t]){
                printf("%d ",k[t]);
                t++; }
              else printf("  ");
          }
          printf("\n");
      }
    return 1;
}
