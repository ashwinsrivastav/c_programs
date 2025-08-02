#include <stdio.h>
#include <stdlib.h>
int main()
{
     int e;
     printf("enter the number of terms you want to check \n");
     scanf("%d",&e);
     int arr[e];
     for(int i=0;i<e;i++)
     {
         scanf("%d",&arr[i]);
     }
      for (int i = 0; i < e - 1; i++) {
        for (int j = 0; j < e - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

printf("%d is the greatest\n",arr[e-1]);

    return 0;
}
 /*int i,j;
    printf("enter two values");
    scanf("%d %d",&i,&j);
    printf("the addition of %d and %d is ",i,j);
    i+=j;
    printf("%d",i);
    i-=j;
    printf("\n the subtraction of %d and %d is ",i,j);
    i-=j;
    printf("%d",i);
    i+=j;
    printf("\n the multiplication of %d and %d is ",i,j);
    i*=j;
    printf("%d",i);
    i/=j;
     printf("\n the division of %d and %d is ",i,j);
     i/=j;
     printf("%d",i);

     int i,d,n[i],rev[2],k,l,q;
     printf("enter the numbers");
     for(i=0;i<2;i++)
     {
     scanf("%d",&n[i]);
     }
     k=n[0];
     l=n[1];
    //printf("%d\n",k);
    for(n[0];n[0]>0;)
     {
      d=n[0]%10;
     n[0]=n[0]/10;
     rev[0]=rev[0]*10+d;
     }
     printf("%d ignore \n",d);
     //printf("%d\n",l);
     printf("%d ignore \n",d);
    // printf("%d\n",rev[0]);
     if(k==rev[0])
     {
     printf("%d is palindrome",k);
     }
     else
     {
         printf("%d is not a  palindrome",k);
     }
     printf("\n and\n");
      for(n[1];n[1]>0;)
     {
      q=n[1]%10;
     n[1]=n[1]/10;
     rev[1]=rev[1]*10+q;
     }
     printf("%d\n",q);
     if(rev[1]==l)
     {
     printf("%d is palindrome",l);
     }
     else
     {
         printf("%d is not a  palindrome",l);
     }*/
