#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,disc,root1,root2,realPart,imaginaryPart;
printf("enter coefficients a, b and c:");
scanf("%f%f%f",&a,&b,&c);
disc=b*b-4*a*c;
if(disc>0)
{
root1=(-b+sqrt(disc))/(2*a);
root2=(-b-sqrt(disc))/(2*a);
printf("roots are real and different.\n");
printf("root1=%.2f\n",root1);
printf("root2=%.2f\n",root2);
}
else if(disc==0)
{
root=-b/(2*a);
printf("roots are real and the same.\n");
printf("root1=root2=%.2f\n"'root1);
}
else
{
 realPart=sqrt(-disc)/(2*a);
 printf("roots are complex and different.\n");
 printf("root1=%.2f+%.2fi\n"realPart,imaginaryPart);
 printf("root2= %.2f-%.2fi\n"realPart,imaginaryPart);
 }
 return 0;
 }
