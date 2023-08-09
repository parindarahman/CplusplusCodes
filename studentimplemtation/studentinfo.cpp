#include"studentinfo.h"
#include <iostream>
#include <string>
using namespace std;
studentinfo::studentinfo()
{
    ID=0;
    name="";
    gpa=0.0;
}
studentinfo::studentinfo(int x,std::string y,double z)
{
    ID=x;
    name=y;
    gpa=z;
}
void studentinfo::printinfo()
{
    cout<<" "<<ID<<" "<<name<<" "<<gpa;
}
bool studentinfo::operator==(studentinfo x)
{
    bool p;
    if(name==x.name && ID==x.ID && gpa==x.gpa)
    {
        p=1;
        return p;
    }
    else
    {
        p=0;
        return p;
    }
}
bool studentinfo::operator !=(studentinfo x)
{
     bool p;
    if(!(name==x.name && ID==x.ID && gpa==x.gpa))
    {
        p=1;
        return p;
    }
    else
    {
        p=0;
        return p;
    }
}
