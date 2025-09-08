// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,sum = 0,ar[10];
    float avg;
    for(int i = 0 ; i <10 ; i++)
    {
        printf("enter the number %d\n" , i+1);
        scanf("%d",&ar[i]);
        sum += ar[i];
        avg = (float)sum/10;
    }
    
    
    printf("the sum of array elements i %d & avg is %f,sum,avg : ");
    

    return 0;
}
