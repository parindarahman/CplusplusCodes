#include <iostream>

using namespace std;

int main()
{
    int s;int x;
    cout<<"Enter size"<<endl;
    cin>>s;
    int *data;
    data=new int[s];
    for(int i=0;i<s;i++)
    {
        cout<<"Enter a value"<<endl;
        cin>>x;
        *(data+i)=x;
    }
    for(int i=0;i<s;i++)
    {
        cout<<*(data+i);
    }
    delete []data;
}
