#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yos,sal=0;
    char qual,g;
    printf("enter your year of service, gender and qualification(g for graduate and p for post graduate)\n");
    scanf("%d %c %c",&yos,&g,&qual);
    if(g=='m')
    {
        if((yos>=10&&qual=='g')||(yos<10&&qual=='p'))
            sal=10000;
        else if(yos>=10&&qual=='p')
            sal=15000;
        else
            sal=7000;
    }
    else if(g=='f')
    {
         if(yos>=10&&qual=='p')
            sal=12000;
        else if(yos>=10&&qual=='g')
            sal=9000;
        else if(yos<10&&qual=='p')
            sal=10000;
        else
            sal=7000;
    }
    else
        printf("you have entered wrong gender");
    if(sal!=0)
    printf("your salary will be %d",sal);
    return 0;
}
