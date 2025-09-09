//code//
 enter n 4
 enter number 1:2
 enter number 2:6
 enter number 3:5
 enter number 4:4
The sum of 4 numbers is: 17
the average is: 4.25

//code//
=== Code Execution Successful ===
#include <iostream>
using namespace std;
int main() {
    int n,sum = 0;
    cout << " enter n " ;
    cin >> n;
    int ar[n];
    float avg;
    for(int i = 0 ; i < n ; i++)
    {
        cout << " enter number " << i+1 << ":" ;
        cin >>ar[i];
        sum = sum + ar[i];
       
    }
        avg = (float)sum/n;
        
    cout << "The sum of " << n << " numbers is: " << sum << endl;
    cout << "the average is: " << avg << endl;
return 0;
}
    // Write C++ code here
