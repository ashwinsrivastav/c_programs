#include<stdio.h>
int main()
{
 int u;
 float x,y,z,j;
 printf("enter number of units consumed");
 scanf("%d",&u);
 if(u<=50)
 {
     x=u*0.50;
     y=x*0.20;
     z=x+y;
 }
 else if (u>50 && u<=150)
 {
     j=u-50;
     x=j*0.75;
     x=x+25;
     y=x*0.20;
     z=x+y;
 }
 else if(u>150 && u<=300)
 {
     j=u-150;
     x=j*1.20;
     x=x+100;
     y=x*0.20;
     z=x+y;
 }
     else
 {
      j=u-300;
     x=j*1.50;
     x=x+280;
     y=x*0.20;
     z=x+y;
 }
  printf("your total bill after additional 20 percentage surcharge will be %.2f",z);
    return 0;
}
