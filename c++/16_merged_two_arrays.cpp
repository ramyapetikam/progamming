/*
    int arr1[]={1 ,3 ,5 ,7 ,9,12,15 };
    int arr2[]={2 ,4 ,6 ,8 ,10};
    
merged two arrays: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 15, 
*/
#include <iostream>
using namespace std;

int main() {
    int arr1[]={1 ,3 ,5 ,7 ,9,12,15 };
    int arr2[]={2 ,4 ,6 ,8 ,10};
    
    int i=0,j=0,k=0;
    int n1=sizeof(arr1)/sizeof(arr1[0]),n2=sizeof(arr2)/sizeof(arr1[0]);
    int merged[n1+n2];
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
    cout<<"merged two arrays: ";
    for(int x=0;x<n1+n2;x++){
        cout<<merged[x]<<", ";
    }
    

    return 0;
}
