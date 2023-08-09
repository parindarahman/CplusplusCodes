#include <iostream>
#include "timestamp.h"
#include "timestamp.cpp"
using namespace std;

int main()
{
    timestamp<int>xlist;
    xlist.InsertItem(15);
    xlist.InsertItem(34);
    xlist.InsertItem(23);
    xlist.InsertItem(13);
     xlist.InsertItem(13);
    xlist.InsertItem(02);
    xlist.InsertItem(43);
    xlist.InsertItem(45);
     xlist.InsertItem(12);
    xlist.InsertItem(25);
    xlist.InsertItem(36);
    xlist.InsertItem(17);
     xlist.InsertItem(52);
    xlist.InsertItem(02);
    xlist.InsertItem(20);
    xlist.DeleteItem(25);
    xlist.ResetList();
    xlist.DeleteItem(36);
    xlist.ResetList();
    xlist.DeleteItem(17);
    xlist.ResetList();
    int a,b,c,d,e,f,g,h,i,j,k,l;
    xlist.GetNextItem(a);
    xlist.GetNextItem(b);
    xlist.GetNextItem(c);
    cout<<d<<":"<<e<<":"<<f<<endl;
    xlist.GetNextItem(d);
    xlist.GetNextItem(e);
    xlist.GetNextItem(f);
    cout<<d<<":"<<e<<":"<<f<<endl;
    xlist.GetNextItem(g);
    xlist.GetNextItem(h);
    xlist.GetNextItem(i);
    cout<<g<<":"<<h<<":"<<i<<endl;
    xlist.GetNextItem(j);
    xlist.GetNextItem(k);
    xlist.GetNextItem(l);
    cout<<j<<":"<<k<<":"<<l<<endl;
}
