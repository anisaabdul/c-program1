#include<stdio.h>
int main()
{
 float basic,bonus,commission,totalSales,totalSalary;
 int itemsSold;
 printf("enter the basic salary:");
 scanf("%f",&basic);
 printf("enter the bonus per item:");
 scanf("%f",&bonus);
 printf("enter the commission percentage:");
 scanf("%f",&commission);
 printf("enter the number of items sold:");
 scanf("%d",&itemsSold);
 printf("enter the toatal monthly sales:");
 scanf("%f",&totalSales);
 bonus=itemsSold*bonus;
 commission=(commission/100)*totalSales;
 totalSalary=basic+bonus+commission;
 printf("the toal salary of the salesman is:%.2f\n",totalSalary);
 return 0;
 }
