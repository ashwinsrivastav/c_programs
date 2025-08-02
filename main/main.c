#include <stdio.h>

int main() {
    int a,b,temp;
    printf("enter the value to swap \n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;

    printf("value of a is %d and b is %d",a,b);


     return 0;
}
/*
  i+=3 this will add 3  to i
  i++ this will add 1.. this is called post increment
  ++i pre-increment
  && and gate
  || or gate
  | this means
  if we have two numbers let's see
    17 and 25
    17-> 1 0 0 0 1
    25-> 1 1 0 0 1
    ---------------
         1 1 0 0 1-> 25
         & this means
  if we have two numbers let's see
    17 and 25
    17-> 1 0 0 0 1
    25-> 1 1 0 0 1
    ---------------
         1 0 0 0 1-> 17

         x<<3 which is left shift operator
         x>>3 which is right shift operator
         if x=16
         in left x<<3
         16-> 10000. it will shift the number to left
         10000000->128
         15-> 1111
         15<<2
         111100
*/
