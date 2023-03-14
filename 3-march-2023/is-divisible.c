#include <stdio.h>

int main()
{

    int number;
    printf("Enter the number:");
    scanf("%d", &number);

    if (number % 5 == 0)
    {
        printf("The number is divisible by 5");
    }
    else if (number % 11 == 0)
    {
        printf("The number is divisible by 11");
    }
    else
    {
        printf("The number is not divisible by 5 or 11");
    }

    return 0;
}