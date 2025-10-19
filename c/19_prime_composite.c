/*
enter a number: 2
prime
*/
#include <stdio.h>

int main() {
    int n , i , flag = 0;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n <= 1){
        printf("Neither prime nor composite\n");
        return 0;
    }
    for (i = 2 ; i <= n/2 ; i++){
        if (n % i == 0){
            flag = 1;
            break;
        }
    }
    
    if (flag == 0 )
         printf("prime\n");
    else
         printf("composite\n");

    return 0;
}
