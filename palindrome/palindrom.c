#include <stdio.h>

int main() {
   int i,d,q,a;
   printf("enter the number of terms you want to check");
   scanf("%d",&a);
   int n[a],rev[a],k[a];
     printf("enter the numbers");
     for(i=0;i<a;i++)
     {
     scanf("%d",&n[i]);
     k[i]=n[i];
     }
     for(i=0;i<a;i++)
     {
rev[i]=0;
    for(n[i];n[i]>0;)
     {
      d=n[i]%10;
     n[i]=n[i]/10;
     rev[i]=rev[i]*10+d;
     }
     if(k[i]==rev[i])
     {
     printf("%d is palindrome\n",k[i]);
     }
     else
     {
         printf("%d is not a  palindrome\n",k[i]);
     }
     }
     getch();
    return 0;
}
