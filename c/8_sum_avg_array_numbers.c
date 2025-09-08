
#include <stdio.h>

int main() {
    int n,sum = 0;
    printf("enter n ");
    scanf("%d",&n);
    int ar[n];
    float avg;
    for(int i = 0 ; i < n ; i++)
    {
        printf("enter the number %d: " , i+1);
        scanf("%d",&ar[i]);
        sum = sum + ar[i];
       
    }
        avg = (float)sum/n;
    
    
    printf("the sum of array elements is %d & avg is %f",sum,avg  );
    

    return 0;
}
