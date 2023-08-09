#include<iostream>
using namespace std;
int main()
{
    int **myArray=new int* [5];
    for(int i=0;i<5;i++)
    {
        myArray[i]=new int[10];
    }
    for(int j=0;j<10;j++)
    {
        myArray[j]=new int[10];

    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            myArray[i][j]=i+j+1;

        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<myArray[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<*(*(myArray+i)+j)<<" ";

        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<5;i++)
    {
        delete [] myArray[i];
    }
    delete [] myArray;


}
