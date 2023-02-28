#include<stdio.h>

int main(){

int c, d, temp;

printf("Enter the value of C:");
scanf("%d", &c);

printf("Enter the value of D:");
scanf("%d", &d);

temp = c;
c = d;
d = temp;

printf("After interchanging the value of c is: %d\n", c);
printf("After interchanging the value of d is: %d", d);



return 0;
}
