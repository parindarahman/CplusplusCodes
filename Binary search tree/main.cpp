#include <iostream>
#include "quetype.h"
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
using namespace std;
int main()
{
    TreeType<int>xtree;
    if(xtree.IsEmpty())
    {
        cout<<"Tree is empty"<<endl;
    }
    else
    {
        cout<<"Tree is not empty"<<endl;
    }
    int x;
    for(int i=0;i<10;i++)
    {
       cin>>x;
       xtree.InsertItem(x);
    }
    if(xtree.IsEmpty())
    {
        cout<<"Tree is empty"<<endl;
    }
    else
    {
        cout<<"Tree is not empty"<<endl;
    }
    cout<<"The length is "<<xtree.LengthIs()<<endl;
    int y;
    cout<<"Enter item to retrieve"<<endl;
    cin>>y;
    bool found;
    xtree.RetrieveItem(y,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }
    int z;
    cout<<"Enter item to retrieve"<<endl;
    cin>>z;

    xtree.RetrieveItem(z,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }
    int p;
    cout<<"Enter item to retrieve"<<endl;
    cin>>p;

    xtree.RetrieveItem(p,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }
    xtree.ResetTree(PRE_ORDER);
    int q; bool s;
    for(int i=0;i<xtree.LengthIs();i++)
    {
        xtree.GetNextItem(q,PRE_ORDER,s);
        cout<<q<<endl;
    }





}
