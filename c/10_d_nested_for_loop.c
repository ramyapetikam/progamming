
enter no of lines 6
6
65
654
6543
65432
654321


=== Code Execution Successful ===
#include <stdio.h>
void printStarPattern(int l){
    for(int i=0;i<l;i++){
        for(int j=0;j<i+1;j++){
            printf("%d",l-j);
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
