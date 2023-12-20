#include <stdio.h>
int main() {
 int a1[2][2],a2[2][2],c[2][2],i,j,k,a,b;
 printf("Enter the size of the square matrix\n");
 scanf("%d",&a);
 b=a;
 printf("You have the enter the matrix elements in row wise fashion\n");
 for (i=0;i<a;i++)
 {
   for (j=0;j<b;j++)
   {
      printf("\nEnter the next element in the 1st martrix= ");
      scanf("%d",&a1[i][j]);
   }
 }
 for (i=0;i<a;i++)
 {
   for (j=0;j<b;j++)
   {
    printf("\n\nEnter the next element in the 2nd martix=");
    scanf("%d",&a2[i][j]);
   }
 }
 printf("\n\nEntered martrics are\n");
 for (i=0;i<a;i++)
 {
  printf("\n");
  for (j=0;j<b;j++)
  printf("%d",a1[i][j]);  
 }
 printf("\n");
 for(i=0;i<a,i++;)
 {
  printf("\n");
  for (j=0;j<b;j++)
  printf("%d",a2[i][j]);
 }
 printf("\n\nProduct of the two matrices is \n");
 for(i=0;i<a;i++)
 for(j=0;j<b;j++)
{
  c[i][j]=c[i][j]+a1[i][j]+a2[i][j];
}
for(i=0;i<a;i++)
{
  printf("\n");
  for(j=0;j<b;j++)
  printf("%d",c[i][j]);
}
   return 0;
   
}
