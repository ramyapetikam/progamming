
enter no of lines 6
          * 
        * * 
      * * * 
    * * * * 
  * * * * * 
* * * * * * 


=== Code Execution Successful ===
#include <stdio.h>
void printStarPattern(int l){
    for(int i=0;i<l;i++){
        for(int s=0;s<l-i-1;s++){
            printf("  ");
        }
        for(int j=0;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
        }
}
int main(){
    int l;
    printf("enter no of lines ");
    scanf("%d",&l);
    printStarPattern(l);

    return 0;
}
