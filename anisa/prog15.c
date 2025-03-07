#include<stdio.h>
int main(){
int m,n,i,j;
printf("enter the number of rows and columns:");
scanf("%d%d",&m,&n);
int matrix1[m] [n],matrix2[m] [n],sum[m] [n];
printf("enter limits of matrix 1:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&matrix2[i] [j]);
}
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
dum[i] [j]=matrix1[i] [j]+matrix2[i] [j];
}
}
printf("sum of the matrices:\n"):
for(i=0;i<m;i++){
for(j=0,j<n;j++){
printf("%d",dum[i] [j]);
}
printf("\n")
}
return 0;
}
