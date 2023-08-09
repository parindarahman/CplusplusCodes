#include <iostream>
#include "unsorted.h"
#include "unsortedtype.cpp"
#include "studentinfo.h"
using namespace std;
int main()
{
    UnsortedType<studentinfo>studentlist;
    studentinfo s1(123,"Parinda",3.9);
    studentinfo s2(345,"Emon",4);
    studentinfo s3(789,"Kekeke",2.8);
    studentlist.InsertItem(s1);
    studentlist.InsertItem(s2);
    studentlist.InsertItem(s3);
    studentinfo x;
    studentlist.DeleteItem(s3);
    studentlist.ResetList();
    for(int i=0;i<studentlist.LengthIs();i++)
    {
        studentlist.GetNextItem(x);
        x.printinfo();
    }
}
