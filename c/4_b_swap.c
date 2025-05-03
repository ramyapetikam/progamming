#include<stdio.h>
int main(){
    printf("enter num1 ")
    scanf("%d",&num1)
    printf("enter num2 ")
    scanf("d",&num2)
    num2=num1+num2
    num1=num2-num1
    num2=num2-num1
    printf("swapped values%d,%d",num1,num2);
    return 0;
}