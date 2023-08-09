#include "dynarr.h"
#include <iostream>
using namespace std;
template <class item>
dynArr<class item>::dynArr(item a)
{
    data=new item[a];
    size=0;
}
template<class item>
item
