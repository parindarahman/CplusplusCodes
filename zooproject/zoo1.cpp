//Parinda Rahman-1931804042
#include "zoo1.h"
#include <iostream>
#include<string>
using namespace std;

void ZooAnimal:: Create(char* n,int num,int date, int w){
    *name=*n;
    cageNumber=num;
    weightDate=date;
    weight=w;
}
void ZooAnimal ::Destroy(){
    delete name;
}
char* ZooAnimal ::reptName(){
    return name;

}
int ZooAnimal::daysSinceLastWeighed(int x){
//    string p=to_string(x);
//    string d= p.substr(0,2);
//    string m=p.substr(2,4);
//    string y=p.substr(4,6);
    int b=x-weightDate;
    return b;
}
