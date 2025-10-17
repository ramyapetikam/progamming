/*
enter number of elements: 5
enter 5 elements:
22
31
4
7
34
smallest number = 4
largest number = 34
*/
#include <stdio.h>

int main() {
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for (int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int smallest =  arr[0];
    int largest  =  arr[0];
     for (int i = 1 ; i < n ; i++){
         if (arr[i] < smallest){
             smallest = arr[i];
         } 
         if (arr[i] > largest){
             largest = arr[i];
         }
     }
     printf("smallest number = %d\n",smallest);
     printf("largest number = %d\n",largest);
     

    return 0;
}
