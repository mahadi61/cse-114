#include<stdio.h>

int  main(){

int number, a, b, c, d, reverse, first_digit_last_digit_sum, total_sum;

printf("Enter the four digits number:");
scanf("%d", &number);

a = number % 10;
number = number / 10;

b = number % 10;
number = number / 10;

c = number % 10;
number = number /10;

d = number % 10;


reverse = (a*1000) + (b*100) + (c*10) + d;

first_digit_last_digit_sum = d + a;
total_sum = a + b + c + d;


printf("The reverse number is:%d\n", reverse);
printf("The sum of first and last digit is: %d\n", first_digit_last_digit_sum);
printf("Total sum is:%d",total_sum);



return 0;
}
