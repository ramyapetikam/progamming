/*
enter number of rows: 6
             1
           1   1
         1   2   1
       1   3   3   1
     1   4   6   4   1
   1   5  10  10   5   1
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int rows;
    cout<<"enter number of rows: ";
    cin>>rows;
    for (int i = 0 ; i < rows ; i++){
        int value=1;
        for (int s = 0 ; s < rows -i-1 ; s++){
            cout<<"  ";
        }
        for (int j = 0 ; j <= i; j++){
            cout<<setw(4)<<value;
            value = value *(i - j)/(j + 1);
        }
        cout<<"\n";
        
    }

    return 0;
}
