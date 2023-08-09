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
    int n1,n2,n3;
    cout<<"Enter first number"<<endl;
    cin>>n1;
    cout<<"Enter second number"<<endl;
    cin>>n2;
    cout<<"Enter third number"<<endl;
    cin>>n3;
    if(n1>n2 && n1>n3){
        cout<<"The first number "<<n1<<" is the maximum."<<endl;
    }
    else if(n2>n1 && n2>n3){
        cout<<"The second number "<<n2<<" is the maximum."<<endl;
    }
    else{
         cout<<"The third number "<<n3<<" is the maximum."<<endl;
    }

}
