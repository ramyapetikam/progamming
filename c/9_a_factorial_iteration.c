/*
enter n:5
factorial of 5 is 120
*/

#include <stdio.h>
int factorial (int n){
    int res=1;
    for(int i=n;i>0;i--){
        res=res*i;
    }
    return res;
}
    int main(){
        int n,res;
        printf("enter n:");
        scanf("%d,",&n);
        res=factorial(n);
        printf("factorial of %d is %d",n,res);
        return 0;
}
