#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    int age;
    float sal,x,y,z;
    printf("enter your name\n");
    scanf("%s",&name);
    printf("enter your age\n");
    scanf("%d",&age);
    printf("enter your salary\n");
    scanf("%f",&sal);
    if(age<60)
    {
     if(sal<=500000)
     {
         printf("no tax is applicable");
     }
     else if(sal>500000 && sal<=750000)
     {
         x=sal-500000;
         y=x*0.1;
         printf("your tax will be %f",y);
     }
     else if(sal>750000 && sal<1000000)
     {
        x=sal-750000;
         y=x*0.2;
         z=y+30000;
         printf("your tax will be %f",z);
     }
     else
     {
       x=sal-1000000;
         y=x*0.3;
         z=y+90000;
         printf("your tax will be %f",z);
     }
    }
    else
    {
        printf("wrong category");
    }

    return 0;
}
