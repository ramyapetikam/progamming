/*
enter n 6
1,2,3,4,5,6,
*/
#include<stdio.h>
int main(){
int i=1;
int n;
printf("enter n ");
scanf("%d",&n);
for(int i=1;i<=n;i=i+1){
    printf("%d,",i);
}   
    return 0;
}    
