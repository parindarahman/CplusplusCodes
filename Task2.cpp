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
    int num1;int num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is : "<<num1+num2<<endl;
    if(num1>num2){
       cout<<"The product is : "<<num1*num2<<endl;
       cout<<"The difference is : "<<num1-num2<<endl;
       cout<<"The quotient is : "<<num1/num2<<endl;
       cout<<"The remainder is : "<<num1%num2<<endl;
    }
    else if (num2>num1){
        cout<<"The product is : "<<num1*num2<<endl;
        cout<<"The difference is : "<<num2-num1<<endl;
        cout<<"The quotient is : "<<num2/num1<<endl;
       cout<<"The remainder is : "<<num2%num1<<endl;
    }
    else{
            cout<<"The product is : "<<num1*num2<<endl;
       cout<<"The difference is : "<<num1-num2<<endl;
       cout<<"The quotient is : "<<num1/num2<<endl;
       cout<<"The remainder is : "<<num1%num2<<endl;

    }







}
