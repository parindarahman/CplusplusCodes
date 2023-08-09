//Parinda Rahman-1931804042
#include <iostream>
#include "zoo1.h"

using namespace std;

int main()
{

    ZooAnimal obj;
    char x='l';
    char *ptr=&x;
    obj.Create(ptr,2,20,25112020);
    obj.reptName();
    obj.daysSinceLastWeighed(30);
    obj.Destroy();
}
