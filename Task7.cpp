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
    cout<<"Enter a year"<<endl;
    int n;
    cin>>n;
    if(n%4==0 && n%100!=0){
        cout<<"The year is a leap year"<<endl;
    }
    else if (n%400){
        cout<<"The year is a leap year"<<endl;
    }
    else if((n%4==0 && n%100!=0)&&n%400){
         cout<<"The year is a leap year"<<endl;
    }
    else{
         cout<<"The year is not a leap year"<<endl;
    }

}
