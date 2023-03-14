#include<stdio.h>

int main(){

int total_selling_price, total_profit,total_cost, one_item_cost;

printf("Enter 15 items total selling price:");
scanf("%d", &total_selling_price);

printf("Enter total profit:");
scanf("%d", &total_profit);

total_cost = total_selling_price - total_profit;

one_item_cost = total_cost / 15;

printf("One item cost is: %d", one_item_cost);





return 0;
}
