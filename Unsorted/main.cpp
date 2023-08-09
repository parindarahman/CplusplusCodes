#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    UnsortedType<int>xlist;
    int a=5;
    int b=7;
    int c=6;
    int d=9;
    int e=1;
    int w,x,y,z,k;bool p;int s=4;int q=5;int t=9;int l=10;
    xlist.InsertItem(5);
    xlist.InsertItem(7);
    xlist.InsertItem(6);
    xlist.InsertItem(9);
    xlist.GetNextItem(w);
    xlist.GetNextItem(x);
    xlist.GetNextItem(y);
    xlist.GetNextItem(z);
    cout<<w<<" "<<x<<" "<<" "<<y<<" "<<z<<endl;
    cout<<xlist.LengthIs()<<endl;
    xlist.InsertItem(e);
    xlist.GetNextItem(k);
    cout<<w<<" "<<x<<" "<<" "<<y<<" "<<z<<" "<<e<<endl;
    cout<<xlist.LengthIs()<<endl;
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
    xlist.RetrieveItem(t,p);
    if(p==0)
    {
        cout<<"item is not found"<<endl;
    }
    else{
        cout<<"item is found"<<endl;
    }
    xlist.RetrieveItem(l,p);
    if(p==0)
    {
        cout<<"item is not found"<<endl;
    }
    else{
        cout<<"item is found"<<endl;
    }
    if(xlist.IsFull()==1)
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }
    xlist.DeleteItem(a);
    if(xlist.IsFull()==1)
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }
    xlist.DeleteItem(e);
    xlist.ResetList();
    xlist.GetNextItem(w);
    xlist.GetNextItem(x);
    xlist.GetNextItem(y);
    cout<<w<<" "<<x<<" "<<" "<<y<<endl;
    xlist.DeleteItem(c);
    xlist.ResetList();
    xlist.GetNextItem(w);
    xlist.GetNextItem(x);

    cout<<w<<" "<<x<<" "<<" "<<endl;











}
