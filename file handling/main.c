#include <stdio.h>
#include <stdlib.h>

int main() {
   int i,d,a;
   FILE *fptr;
   printf("enter the number of terms you want to check");
   scanf("%d",&a);
   int n[a],rev[a],k[a];
     printf("enter the numbers");
     for(i=0;i<a;i++)
     {
     scanf("%d",&n[i]);
     k[i]=n[i];
     }
     fptr = fopen("palindrom.txt","a");
     for(i=0;i<a;i++)
     {
rev[i]=0;
    for(n[i];n[i]>0;n[i])
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
      fprintf(fptr,"number is=%d\n",k[i]);
      if(k[i]==rev[i])
     {
     fprintf(fptr,"%d is palindrome\n",k[i]);
     }
     else
     {
         fprintf(fptr,"%d is not a  palindrome\n",k[i]);
     }
     }
     fclose(fptr);
     getchar();
    return 0;
}
