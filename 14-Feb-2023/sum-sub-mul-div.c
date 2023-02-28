#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    int sum, sub, mul, div;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("The addition is :%d \n", sum);
    printf("The subtraction is :%d \n", sub);
    printf("The multiplication is :%d \n", mul);
    printf("The division is :%d \n", div);

    return 0;
}
