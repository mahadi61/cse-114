#include <stdio.h>

int main()
{

    int selling_price, buying_price;

    printf("Enter the selling price:");
    scanf("%d", &selling_price);

    printf("Enter the buying price:");
    scanf("%d", &buying_price);

    if (selling_price > buying_price)
    {
        printf("You got benefitted!!!");
    }
    else if (selling_price < buying_price)
    {
        printf("You loss in your bussiness !!!");
    }
    else
    {
        printf("NO profit or loss");
    }

    return 0;
}