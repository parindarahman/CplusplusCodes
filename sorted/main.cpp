#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
using namespace std;

int main()
{
    SortedType<int>xlist;
    cout<<xlist.LengthIs()<<endl;
    xlist.InsertItem(5);
    xlist.InsertItem(7);
    xlist.InsertItem(4);
    xlist.InsertItem(2);
    xlist.InsertItem(1);
    int w,x,y,z,k;
    xlist.GetNextItem(w);
    xlist.GetNextItem(x);
    xlist.GetNextItem(y);
    xlist.GetNextItem(z);
    xlist.GetNextItem(k);
    cout<<w<<" "<<x<<" "<<" "<<y<<" "<<z<<" "<<k<<endl;
    bool p;int s=6;int q=5;
    xlist.RetrieveItem(s,p);
    if(p==0)
    {
        cout<<"item is not found"<<endl;
    }
    else{
        cout<<"item is found"<<endl;
    }
    xlist.RetrieveItem(q,p);
    if(p==0)
    {
        cout<<"item is not found"<<endl;
    }
    else{
        cout<<"item is found"<<endl;
    }
    xlist.DeleteItem(1);
    xlist.ResetList();
    xlist.GetNextItem(w);
    xlist.GetNextItem(x);
    xlist.GetNextItem(y);
    xlist.GetNextItem(z);
    cout<<w<<" "<<x<<" "<<" "<<y<<" "<<z<<" "<<endl;

    if(xlist.IsFull()==false)
    {
        cout<<"List is not full"<<endl;
    }
    else{
         cout<<"List is full"<<endl;
    }


}
