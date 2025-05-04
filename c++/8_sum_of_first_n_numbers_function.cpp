#include <iostream>
using namespace std;

int sum(int n){
    int res = 0;
    for(int i=1;i<n+1;i++){
        res=res+i;
    }
    return res;
}


int main(){
    int n,res=0;
    cout<<"enter n ";
    cin>>n;
    
    res = sum(n);
    cout << "sum of first "<<n<<" numbers is "<<res;

    return 0;
}
