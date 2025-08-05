#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    x: printf("enter the number corresponding to function which you want to perform\n1.Factorial of a number.\n2.prime or not \n3.odd or even\n4.exit\n");
    scanf("%d",&n);
    int f,prime=0;
    if(n>0&&n<5)
    {
     switch(n)
     {
     case 1:
         printf("enter the number you want factorial of:");
         fflush(stdin);
         scanf("%d",&f);
         int a=1;
         while(f>0)
         {
             a=a*f;
             f--;
         }
         printf("the factorial is:%d\n",a);
         goto x;
     case 2:
          printf("enter the number you want to check for prime:");
         fflush(stdin);
         scanf("%d",&f);
         for(int i=2;i<=f/2;i++)
         {
             if(f%i==0)
                prime=1;
         }
         if(prime==1)
            printf("the number is not prime\n");
         else printf("the number is prime\n");
         goto x;
     case 3:
               printf("enter the number you want to check for odd/even:");
         fflush(stdin);
         scanf("%d",&f);
         if(f%2==0) printf("the number is even\n");
         else printf("the number is odd\n");
         goto x;
     case 4:
         exit(1);
     }
    }
    else printf("invalid option selected");
    return 0;
}
