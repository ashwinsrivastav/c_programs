#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date,month,mdays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("enter your birth day\n");
    scanf("%d",&date);
    printf("enter your birth month(1 to 12)\n");
    scanf("%d",&month);
    if(month<1||month>12)
    {
        printf("invalid date");
        return 0;
    }
    if(date<=mdays[month])
    {
        printf("your zodiac sign: ");
    switch(month)
    {
    case 1:
        if(date<=19)
            printf("capricorn");
        else
        printf("aquarius");
        break;
    case 2:
        if(date<=17)
            printf("aquarius");
        else
        printf("pisces");
        break;
    case 3:
        if(date<=19)
            printf("pisces");
        else
        printf("aries");
        break;
    case 4:
        if(date<=19)
            printf("aries");
        else
        printf("taurus");
        break;
    case 5:
        if(date<=20)
            printf("taurus");
        else
        printf("gemini");
        break;
    case 6:
        if(date<=20)
            printf("gemini");
        else
        printf("cancer");
        break;
     case 7:
        if(date<=22)
            printf("cancer");
        else
        printf("leo");
        break;
     case 8:
        if(date<=22)
            printf("leo");
        else
        printf("virgo");
        break;
     case 9:
        if(date<=22)
            printf("virgo");
        else
        printf("libra");
        break;
     case 10:
        if(date<=22)
            printf("libra");
        else
        printf("scorpio");
        break;
     case 11:
        if(date<=21)
            printf("scorpio");
        else
        printf("sagittarius");
        break;
    case 12:
        if(date<=21)
            printf("sagittarius");
        else
        printf("capricorn");
        break;
    }
    }
     else
        printf("invalid date");

    return 0;
}
