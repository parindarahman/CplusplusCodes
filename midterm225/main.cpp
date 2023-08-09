#include <iostream>
#include "ItemType.h"
#include "UnsortedType.h"
using namespace std;

int main()
{

    ItemType i1;
    i1.Intialize(5);
    ItemType i2;
    i2.Intialize(10);
    UnsortedType xlist();
    xlist.PutItem(i1);
    while(!xlist.IsFull){
        cout<<xlist.GetItem();
    }
}
