#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    int rowSize[rows];
    int **arr=new int*[rows];
    for (int i=0;i<rows;i++){
        cout<<"enter the number of elements in row"<<i+1<<endl;
        cin>>rowSize[i];
        arr[i]=new int[rowSize[i]];
    }
    cout<<"enter values to be inputted"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rowSize[i];j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The values inputted are"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rowSize[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<rows;i++){
        delete []arr[i];
    }
    delete []arr;




}
