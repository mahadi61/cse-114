#include <stdio.h>

int main()
{
    int number, factorial = 1;
    printf("Enter the number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i = i + 1)
    {
        factorial = i * factorial;
    }
    printf("The factorial of %d is: %d", number, factorial);

    return 0;
}