/*
enter n: 5
1,2,3,4,5,
*/
#include<stdio.h>
int main(){
    int i=1;
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    while(i<=n){
    printf("%d,",i);
    i=i+1;}
return 0;
}
