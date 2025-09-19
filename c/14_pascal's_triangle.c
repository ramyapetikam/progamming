/*
enter number of rows: 6
             1
           1   1
         1   2   1
       1   3   3   1
     1   4   6   4   1
   1   5  10  10   5   1
*/
#include <stdio.h>

int main() {
    int rows;
    printf("enter number of rows: ");
    scanf("%d",&rows);
    for (int i = 0 ; i < rows ; i++){
        int value=1;
        for (int s = 0 ; s < rows -i-1 ; s++){
            printf("  ");
        }
        for (int j = 0 ; j <= i; j++){
            printf("%4d",value);
            value = value *(i - j)/(j + 1);
        }
        printf("\n");
        
    }

    return 0;
}
