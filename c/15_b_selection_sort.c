/*
12456
*/
#include <stdio.h>

int main() {
    int arr[]={1,4,5,2,6};
    int n = 5; 
    
    for (int i = 0 ; i < n-1 ; i++){
        int minIndex = i;
        
        for(int j = i + 1 ; j < n ; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for (int i = 0 ; i < n ; i++){
        printf("%d",arr[i]);
    }
    

    return 0;
}
