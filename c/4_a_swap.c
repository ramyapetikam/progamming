/*
enter num1 5
enter num2 4
swapped values4,5
*/
#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("enter num1 ");
    scanf("%d",&num1);
    printf("enter num2 ");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("swapped values%d,%d",num1,num2);
    return 0;
}    
