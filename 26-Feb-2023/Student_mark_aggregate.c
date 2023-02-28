
#include<stdio.h>

int main(){

int bangla, english, math, islam, science, aggregate, parcentage;

printf("Enter the mark of Bangla:");
scanf("%d", &bangla);

printf("Enter the mark of English:");
scanf("%d", &english);

printf("Enter the mark of Math:");
scanf("%d", &math);

printf("Enter the mark of Islam:");
scanf("%d", &islam);

printf("Enter the mark of Science:");
scanf("%d", &science);

aggregate = bangla + english + math + islam + science;
parcentage = (aggregate / 500) * 100;

printf("The aggregate of five subject is:%d \n", aggregate);
printf("The parcentage of five subject is:%d", parcentage);


return 0;
}
