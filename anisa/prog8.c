#include<stdio.h>
int main()
{
int level,baseSalary, hra,da,grossSalary;
printf("enter the employee level (1, 2, or 3):\n");
printf("1: junior\n");
printf("2: Mid-level\n");
printf("3: senior\n");
scanf("%d",&level);
switch(level)

{
case1:
baseSalary=2000;
hra=0.2*baseSalary;
da= 0.5*baseSalary;
break;

case2:
baseSalary= 40000;
hra=0.25*baseSalary;
da=0.6*baseSalary;
break;

case3:
baseSalary=60000;
hra=0.3*baseSalary;
da=0.7*baseSalary;
break;
default:
printf("invalid level entered.\n");
return 1;
}

grossSalary=baseSalary+hra+da;
printf("base salary:%d\n",baseSalary);
printf("hra:%d\n",hra);
printf("da:%d\n",da);
printf("gross salary:%d\n",grossSalary);
return 0;
}
