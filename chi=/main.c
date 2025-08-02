// WAP in C to check given number is prime or not

#include <stdio.h>

int main()
{
    int n, check = 1, i;
    printf("Enter a number:\n");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Number is not prime");
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                check = 0;
                break;
            }
        }

        if (check == 1)
        {
            printf("Number is prime");
        }
        else
        {
            printf("Number is not prime");
        }
    }

    return 0;
}
