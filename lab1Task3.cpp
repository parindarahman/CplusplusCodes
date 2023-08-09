/*
Name Parinda Rahman
ID 1931804042
Course cse225L section2
*/
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"enter the number of rows of the array"<<endl;
    cin>>rows;
    int arrSize[rows];
    int **arr= new int*[rows];
    for(int i=0;i<rows;i++){
        cout<<"enter size of row"<<endl;
        cin>>arrSize[i];
        arr[i]=new int[arrSize[i]];
    }
    cout<<"input values"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<arrSize[rows];j++){
                cin>>arr[i][j];
            }
    }
    for(int i=0;i<rows;i++){
            for(int j=0;j<arrSize[rows];j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
    }
     for(int i=0;i<rows;i++){
        delete []arr[i];
    }
    delete [] arr;
    return 0;

}
