#include<stdio.h>
int main()
{
 int m,n,p,i,j,k;
printf("enter the no of rows and columns for the first matrix:");
scanf("%d%d",&m,&n);
printf("enter the no of rows and colums for the second matrix:");
scanf("%d%d",&n,&p);
int matrix1[m][n],matrix2[n][p], product[m][p];
printf("enter the elements of matrix1:\n");
for(i=0;i<m;i++) {
for(j=0;j<n;j++) {
scanf("%d",&matrix1[i][j]);
}
}
printf("enter elements of matrix2:\n");
for(i=0;i<n;i++) {
for(j=0;j<p;j++) {
scanf("%d",&matrix2[i][j]);
}
}
for(i=0;i<m;i++) {
for(j=0;j<p;j++) {
product[i][j]=0;
for(k=0;k<n;k++) {
product[i][j]+=matrix1[i][k]*matrix2[k][j];
}
}
}
printf("product of the matrices:\n");
for(i=0;i<m;i++) {
for(j=0;j<p;j++) {
printf("%d",product[i][j]);
}
printf("\n");
}
return 0;
}
