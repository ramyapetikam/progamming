#include<stdio.h>
int main(){
    float num1,num2,sum,sub,multiple,divide,remainder;
    printf("enter num1 ");
    scanf("%f",&num1);
    printf("enter num2 ");
    scanf("%f",&num2);
    sum=num1+num2;
    sub=num1-num2;
    multiple=num1*num2;
    divide=num1/num2;
    printf("sum of %f and %f is %.2f\n",num1,num2,sum);
    printf("sub of %f and %f is %.2f\n",num1,num2,sub);
    printf("multiple of %f and %f is %.2f\n",num1,num2,multiple);
    printf("divide of %f and %f is %.2f\n",num1,num2,divide);
    return 0;
}
