#include<stdio.h>
int main()
{
 float basic,bonus,commision.totalSales,totalSalary;
 int itemsSold;
 printf("enter the basic salary:");
 scanf("%f",&basic);
 printf("enter the bonus per item");
 scanf("%f",&bonus);
 printf("enter the commision percentage:");
 scanf("%f",&commission);
 printf("enter the number of items sold:");
 scanf("%d",&itemsSold);
 printf("enter the toatal monthly sales:");
 scanf("%f",&totalSales);
 bonus=itemsSold*bonus;
 commision=(commision/100)*totalSales;
 printf("the toal salary of the salesman is:%.2f\n",totalSalary);
 return 0;
 }
