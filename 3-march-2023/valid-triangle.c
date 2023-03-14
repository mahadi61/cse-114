#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);

    if (a + b > c)
    {
        printf("The ");
    }
    else if (a + c> b)
    {
        printf("The number is divisible by 11");
    }
    else
    {
        printf("The number is not divisible by 5 or 11");
    }

    return 0;
}