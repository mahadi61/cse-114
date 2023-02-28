#include<stdio.h>

int  main(){

int number, a, b, c, d, reverse;

printf("Enter the five digits number:");
scanf("%d", &number);

a = number % 10;
number = number / 10;

b = number % 10;
number = number / 10;

c = number % 10;
number = number /10;

d = number % 10;


reverse = (a*1000) + (b*100) + (c*10) + d;
printf("%d", reverse);



return 0;
}
