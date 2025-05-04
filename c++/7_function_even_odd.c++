#include<iostream>
using namespace std;

 void evenNumbers (int n){
        cout<<"even numbers ";
        for(int i=2;i<=n;i=i+2){
        cout<<i<<",";
        }
 }
        
        void oddNumbers(int n){
            cout<<"odd numbers ";
            for(int i=1;i<=n;i=i+2){
                 cout<<i<<",";
            }
        }
        
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    evenNumbers(n);
    cout<<"\n";
    oddNumbers(n);
   
    return 0;
    
}
