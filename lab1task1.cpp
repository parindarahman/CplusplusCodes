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
    int arrsize;int i;int input;
    cout<<"enter the size of the array"<<endl;
    cin>>arrsize;
    int *arr =new int[arrsize];
    for(i=0;i<arrsize;i++){
        cout<<"enter input to the array"<<endl;
        cin>>input;
        arr[i]=input;
    }
    for(i=0;i<arrsize;i++){
        cout<<arr[i]<<endl;

    }
    delete [] arr;
}
