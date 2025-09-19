/*
enter num1 3
enter num2 7
sum of 3 and 7 is 10
sub of 3 and 7 is -4
multiple of 3 and 7 is 21
divide of 3 and 7 is 0
remainder of 3 and 7 is 3
*/
#include<stdio.h>
int main(){
    int num1,num2,sum,sub,multiple,divide,remainder;
    printf("enter num1 ");
    scanf("%d",&num1);
    printf("enter num2 ");
    scanf("%d",&num2);
    sum=num1+num2;
    sub=num1-num2;
    multiple=num1*num2;
    divide=num1/num2;
    remainder=num1%num2;
    printf("sum of %d and %d is %d\n",num1,num2,sum);
    printf("sub of %d and %d is %d\n",num1,num2,sub);
    printf("multiple of %d and %d is %d\n",num1,num2,multiple);
    printf("divide of %d and %d is %d\n",num1,num2,divide);
    printf("remainder of %d and %d is %d\n",num1,num2,remainder);
    return 0;
}
