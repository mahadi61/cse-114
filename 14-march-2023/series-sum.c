#include <stdio.h>

int main()
{
    int number, sum = 0, a = 7;

    for (int i = 1; i <= 100; i = i + 1)
    {
        sum = sum + a;
        a = a + 13;
    }
    printf("The sum of the series is: %d", sum);

    return 0;
}