#include <iostream>
using namespace std;
int main()
{
    int *intarray;
    int arraysize;
    cin>>arraysize;
    intarray=new int[arraysize];
    for (int i=0;i<arraysize;i++)
    {
        intarray[i]=i+1;
    }
    for (int i=0;i<arraysize;i++)
    {
        cout<<intarray[i]<<endl;
    }
    cout<<endl;
    for (int i=0;i<arraysize;i++)
    {
        cout<<*(intarray+i)<<endl;
    }
    delete [] intarray;
    cout<<endl;


}
