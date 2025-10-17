/*
 enter the number of elements: 4
 enter 4elements: 
33
22
6
55
smallest number = 6
largest number  = 55
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<" enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout<<" enter " << n << "elements: " << endl;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int smallest = arr[0];
    int largest  = arr[0];
    
    for (int i = 1 ; i < n ; i++) {
        if (arr[i] < smallest){
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout <<"smallest number = " << smallest << endl;
    cout <<"largest number  = " << largest << endl;
    

    return 0;
}
