#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i=0,x,y;
   printf("this is the intelligence table for some value\n");
   for(y=1;y<7;y++)
   {
       for(x=5.5;x<=12.5;x+=0.5)
       {
           i=2+(y+(0.5*x));
           printf("for y=%0.1f and x=%0.1f i will be %0.2f\n",y,x,i);
       }
   }
    return 0;
}
