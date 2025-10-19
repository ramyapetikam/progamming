/*
enter a number to print its multipliction table: 4

multiplication table of 4:
4 x 0 = 0
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40
*/
#include <stdio.h>

int main() {
    int num;
    printf("enter a number to print its multipliction table: ");
    scanf("%d",&num);
    
    printf("\nmultiplication table of %d:\n",num);
    
    for (int i = 0 ; i <= 10 ; i++){
        printf("%d x %d = %d\n",num,i,num * i);
        }
    

    return 0;
}
