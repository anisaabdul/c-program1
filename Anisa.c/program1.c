#include<stdio.h>
#include<math.h>

int main()
{
 double x,y,z,w,result;
 printf("enter a value for x:");
 scanf("%lf",&x);
 printf("enter a value for y:");
 scanf("%lf",&y);
 printf("enter avalue for w:");
 scanf("%lf",&w);
 result=(pow(x+y,2)*(x+z))/w;
 printf("the result is: %.2lf \n",result);
 return 0;
}
