#include <stdio.h>

int main()
{

    int a;

    printf("Enter the number:");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Negative number");
    }
    else if (a > 0)
    {
        printf("Positive number");
    }
    else
    {
        printf("Number is zero");
    }

    return 0;
}
