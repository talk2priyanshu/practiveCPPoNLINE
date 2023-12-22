#include <stdio.h>
int sum (int a, int b){
    return a+b;
}
int main() {
    int a,b;
    printf("Enter the number");
  scanf("%d %d",&a,&b);
  printf ("The sum of two number is %d",sum ( a, b));
    return 0;
}