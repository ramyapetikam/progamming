/*
enter n 9
9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 
*/
#include <stdio.h>

int main() {
   int n;
   printf("enter n ");
   scanf("%d",&n);
  for(int i=n;i>=1;i=i-1){
      printf("%d , ",i);
  }// Write C code here
    return 0;
}
