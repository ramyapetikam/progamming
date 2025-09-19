/*
enter the number of fibonacci numbers sequence:  6
fibonacci series 0,1,1,2,3,5,
*/
#include <stdio.h>
int main() {
    int n,first = 0, second = 1, next;
    printf("enter the number of fibonacci numbers sequence:  ");
    scanf("%d",&n);
    printf("fibonacci series ");
    for(int i = 0; i<n; i++) {
        printf("%d,",first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}
