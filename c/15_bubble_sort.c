/*
12456
*/
#include <stdio.h>

int main() {
    int array[]={1,4,5,2,6};
    int n=5;
    int temp;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if(array[j+1]<array[j]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d",array[i]);
    }

    return 0;
}
