/*
enter a number: 6
composite
*/
#include <iostream>
using namespace std;

int main() {
    int n , i , flag = 0;
    cout<<"enter a number: ";
    cin>>n;
    if (n <= 1){
        cout<<"Neither prime nor composite" <<endl;
        return 0;
    }
    for (i = 2 ; i <= n/2 ; i++){
        if (n % i == 0){
            flag = 1;
            break;
        }
    }
    
    if (flag == 0 )
         cout<<"prime"<<endl;
    else
         cout<<"composite"<<endl;

    return 0;
}
