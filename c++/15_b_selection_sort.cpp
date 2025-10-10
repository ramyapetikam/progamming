/*
12456
*/
#include <iostream>
using namespace std;

int main() {
    int array[]={1,4,5,2,6};
    int n = 5;
    for (int i = 0; i < n-1 ; i++){
        int minIndex = i;
        
        for (int j = i+1 ; j < n ; j++){
            if (array [j] < array[minIndex]){
                minIndex=j;
            }
        }
    
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
        
        for(int i = 0 ; i < n ; i++){
            cout<<array[i];
        }
    


    return 0;
}
