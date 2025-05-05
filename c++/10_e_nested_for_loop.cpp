#include <iostream>
using namespace std;
void printStarPattern(int l){
    for(int i=0;i<l;i++){
        for(int j=0;j<i+1;j++){
            cout<<2*(j+1)<<"  ";
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
