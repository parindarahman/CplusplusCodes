/*
Name Parinda Rahman
ID 1931804042
Course cse225L section2
Date 04/11/2020
*/
#include <iostream>
using namespace std;

int main()
{
    int a;int b; char o;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Enter operator"<<endl;
    cin>>o;
    switch(o){
    case '+':
        cout<<"The sum is: "<<a+b<<endl;
        break;
    case '-':
        cout<<"The difference is: "<<a-b<<endl;
        break;
    case '*':
        cout<<"The product is: "<<a*b<<endl;
        break;
    default:
        cout<<"The division is: "<<a/b<<endl;
    }


}
