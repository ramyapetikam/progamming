/*
merged two arrays: 12345678910
*/
#include <stdio.h>

int main() {
    int arr1[5]={1 ,3 ,5 ,7 ,9 };
    int arr2[5]={2 ,4 ,6 ,8 ,10};
    int merged[10];
    
    int i=0,j=0,k=0;
    int n1=5,n2=5;
    
    while( i < n1 && j < n2 ){
        if(arr1[i]< arr2[j]){
            merged[k]=arr1[i];
            i++;
    } else {
            merged[k]=arr2[j];
            j++;
    }
        k++;
        }
        while( i < n1 ){
            merged[k]=arr1[i];
            i++;
            k++;
        }
        while( j < n2 ){
            merged[k]=arr2[j];
            j++;
            k++;
        }
    // Write C code here
    printf("merged two arrays: ");
    for(int x=0;x<n1+n2;x++){
        printf("%d",merged[x]);
    }
    

    return 0;
}
