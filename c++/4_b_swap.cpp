#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter num1 ";
    cin>>num1;
    cout<<"enter num2 ";
    cin>>num2;
    num2=num1+num2;
    num1=num2-num1;
    num2=num2-num1;
    cout<<"swapped values are"<<num1<<"and"<<num2;
    return 0;
}
