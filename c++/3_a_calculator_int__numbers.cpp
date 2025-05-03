#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum,sub,multiple,divide,remainder;
    cout<<"enter num1 ";
    cin>>num1;
    cout<<"enter num2 ";
    cin>>num2;
    sum=num1+num2;
    sub=num1-num2;
    multiple=num1*num2;
    divide=num1/num2;
    remainder=num1%num2;
    cout<<"sum of"<<num1<<"and"<<num2<<"is"<<sum;
    cout<<"sub of"<<num1<<"and"<<num2<<"is"<<sub;
    cout<<"multiple of"<<num1<<"and"<<num2<<"is"<<multiple;
    cout<<"divide of"<<num1<<"and"<<num2<<"is"<<divide;
    cout<<"remainder of"<<num1<<"and"<<num2<<"is"<<remainder;
    return 0;
}
