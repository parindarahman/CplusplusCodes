#include <iostream>
#include "ItemType.h"
using namespace std;

int main()
{
    ItemType b;
    ItemType a;
    a.Initialize(5);
    b.ComparedTo(a);
}
