#include "zoo.h"
#include <iostream>
using namespace std;
ZooAnimal::ZooAnimal()
{

}
void Create:: Create(char* n,int num,int date, int w){
    *name=n;
    cageNumber=num;
    weightDate=date;
    weight=w;
}
void Destroy::Destroy(){
    delete name;
}
char* reptName::reptName(){

}
int daysSinceLastWeighed::daysSinceLastWeighed(int x){
    return x-weightDate;
}
