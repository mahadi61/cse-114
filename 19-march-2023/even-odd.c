#include <stdio.h>

int main()
{
    // int number, condition;
    // printf("Enter a number:");
    // scanf("%d", &number);

    // if (number % 2 == 0)
    // {
    //     printf("This is even number");
    // }
    // else
    // {
    //     printf("This is odd number");
    // }

    // condition = number % 2;
    // switch (condition)
    // {
    // case 0:
    //     printf("Even number");
    //     break;
    // case 1:
    //     printf("Odd number");
    //     break;
    // default:
    //     break;
    // }

    int a;
    printf("Enter a number:");
    scanf("%d", &a);

    if (a % 5 == 0 || a % 11 == 0)
    {
        printf("The number is divisible by 5 or 11");
    }
    else
    {
        printf("The number can not divisible by 5 or 11.");
    }

    return 0;
}