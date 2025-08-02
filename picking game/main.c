#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user,computer,n=21;
    printf("This is a game where there are 21 matchsticks and you have to pick between 1 to 4 \n");
    while(n>1)
    {
        printf("choose the number");
    scanf("%d",&user);
    printf("your have chosen %d\n",user);
    computer=5-user;
    printf("my choice is %d\n",computer);
    n=n-5;
    }
    printf("");

    return 0;
}
