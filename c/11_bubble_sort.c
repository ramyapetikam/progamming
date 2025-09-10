
13457

=== Code Execution Successful ===

#include <stdio.h>
int main() {
    int arr[]={1 ,4 ,5 ,3 ,7};
    int n = 5;
    int temp;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j+1] < arr[j]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++) {
        printf("%d", arr[i]);
    }

    return 0;
}
