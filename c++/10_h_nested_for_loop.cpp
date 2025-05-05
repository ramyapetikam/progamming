/*
enter no of lines 3
    1 
  1 2 
1 2 3 

*/

#include <iostream>
using namespace std;
void printStarPattern(int l){
    for(int i=0;i<l;i++){
        for(int s=0;s<l-i-1;s++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<"\n";
        }
}
int main(){
    int l;
    cout<<"enter no of lines ";
    cin>>l;
    printStarPattern(l);

    return 0;
}
