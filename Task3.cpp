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
    int aa;
    int bb;
    cout<<"The the first number: "<<endl;
    cin>>aa;
    cout<<"The the first number: "<<endl;
    cin>>bb;
    cout<<"The value of aa before swap : "<<aa<<endl;
    cout<<"The value of bb before swap : "<<bb<<endl;
    int temp;
    temp=aa;
    aa=bb;
    bb=temp;

    cout<<"The value of aa after swap : "<<aa<<endl;
    cout<<"The value of bb after swap : "<<bb<<endl;

}
