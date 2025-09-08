#include <iostream>
using namespace std;
int main() {
    int n,first = 0, second = 1, next;
    cout<<"enter the number of fibonacci numbers sequence  ";
    cin>>n;
    cout<<"fibonacci series ";
    for(int i = 0; i<n; i++) {
        cout<<first<<", ";
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}

