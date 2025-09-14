#include <iostream>
using namespace std;
int factorial (int n){
    int res=1;
    for(int i=n;i>0;i--){
        res=res*i;
    }
    return res;
}
    int main(){
        int n,res;
        cout<<"enter n";
        cin>>n;
        res=factorial(n);
        cout<<"factorial of"<<n<<"is"<<res;
        return 0;
}
