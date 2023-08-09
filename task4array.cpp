#include <iostream>
using namespace std;
int main(){

    int *firstArray;
    int *secondArray;

    firstArray= new int[10];
    for(int i=0;i<10;i++)
    {
        firstArray[i]=i+1;
    }
    cout<<"Shallow Copy"<<endl;
    secondArray=firstArray;
    for(int i=0;i<10;i++)
    {
        cout<<secondArray[i]<<" ";
    }
    delete [] firstArray;

    cout<<endl<<"Deep Copy"<<endl;
    firstArray=new int[10];
    secondArray=new int[10];
    for(int i=0;i<10;i++)
    {
        firstArray[i]=i+1;
    }
    for(int j=0;j<10;j++)
    {
        secondArray[j]=firstArray[j];
    }
    delete [] firstArray;

    for(int i=0;i<10;i++)
    {
        cout<<secondArray[i]<<endl;
    }

}
