/*
enter a number: 5
factorial of 5 is 120
*/
#include <stdio.h>
int factorial(int n){
  if (n == 1)
  return 1;
return n * factorial(n-1);
}
int main() {
    int n,fa;
    printf("enter a number: ");
    scanf("%d",&n);
    fa=factorial(n);
    printf("factorial of %d is %d",n,fa);
    return 0;
}
