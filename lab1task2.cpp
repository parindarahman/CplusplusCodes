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
    int rowsize;int i;int columnsize;int j;
    cout<<"enter row size of the array"<<endl;
    cin>>rowsize;
    cout<<"enter column size of the array"<<endl;
    cin>>columnsize;
    char** arr = new char*[rowsize];
   for(int i = 0; i < rowsize; ++i){
        arr[i] = new char[columnsize];
   }
   for(int i = 0; i < rowsize; ++i){
        for(int j=0;j<columnsize;j++){
                cin>>arr[i][j];

        }
   }
   for(int i = 0; i < rowsize; ++i){
        for(int j=0;j<columnsize;j++){
                cout<<arr[i][j]<<" ";

        }
        cout<<endl;
   }
   delete [] arr;


}
