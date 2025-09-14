/*
enter a number: 6
factorial of 6 is 720
*/
#include <iostream>
using namespace std;
int factorial(int n){
  if (n == 1)
  return 1;
return n * factorial(n-1);
}
int main() {
    int n,fa;
    cout<<"enter n: ";
    cin>>n;
    fa=factorial(n);
    cout<<"factorial of"<<n<<"is"<<fa;
    return 0;
}
