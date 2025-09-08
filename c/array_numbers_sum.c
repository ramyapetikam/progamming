// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,sum = 0,ar[5];
    printf("enter array element : ");
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&ar[i]);
    }
        for(i = 0 ; i < 5 ; i++)
        {
        sum = sum + ar[i];
        }
    printf("sum of array element is :%d",sum);

    return 0;
}
