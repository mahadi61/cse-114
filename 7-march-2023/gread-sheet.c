#include <stdio.h>

int main()
{

    int social_science, english, math, science, islam;

    printf("Enter your social science subject number:");
    scanf("%d", &social_science);

    printf("Enter your English subject number:");
    scanf("%d", &english);

    printf("Enter your Math subject number:");
    scanf("%d", &math);

    printf("Enter your science subject number:");
    scanf("%d", &science);

    printf("Enter your islam subject number:");
    scanf("%d", &islam);

    int total_number, percentage;

    total_number = social_science + english + math + science + islam;

    percentage = (total_number * 100) / 500;

    printf("%d", percentage);
    if (percentage >= 90)
    {
        printf("Your Grade is : A");
    }

    else if (percentage >= 80 && percentage < 90)
    {
        printf("Your Grade is : B");
    }

    else if (percentage >= 70 && percentage < 80)
    {
        printf("Your Grade is : C");
    }

    else if (percentage >= 60 && percentage < 70)
    {
        printf("Your Grade is : D");
    }

    else if (percentage >= 40 && percentage < 60)
    {
        printf("Your Grade is : E");
    }

    if (percentage < 40)
    {
        printf("Your Grade is : F");
    }

    // printf("%d", total_number);

    return 0;
}