#include <stdio.h>

int main()
{

    for (int i = 1; i <= 4; i++)
    {

        for (int a = 4; a >= i; a--)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}