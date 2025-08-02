#include<stdio.h>
#include<conio.h>
int main()
{
int r,g;
float b,c;
printf("enter number of digits");
scanf("%d",&r);
float a[r];
printf("now enter the digits\n");
for(int i=0;i<r;i++)
{
scanf("%f",&a[i]);
g=a[i];
b=b+g;
}
c=b/r;
printf("the avarage %f",c);
return 0;
}
