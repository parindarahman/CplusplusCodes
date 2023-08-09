#include <iostream>
#include "myArray.h"
using namespace std;
myArray::myArray(int number)
{
    data=new int[number];
    size=number;
}
myArray::~myArray()
{
    delete [] data;
}
void myArray::setValue(int index,int value)
{
    data[index]=value;
}
void myArray::printValue()
{
    for(int i=0;i<size;i++)
    {
        cout<<i<<" "<<data[i]<<endl;
    }
}
int myArray::getValue(int index)
{
    return *data[index];
}
