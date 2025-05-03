#include<iostream>
using namespace std;
int main(){
    int num1,num2,temp;
    cout<<"enter num1 ";
    cin>>num1;
    cout<<"enter num2 ";
    cin>>num2;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"swapped values are"<<num1<<"AND"<<num2;
    return 0;
}