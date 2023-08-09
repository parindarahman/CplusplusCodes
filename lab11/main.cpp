#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timestamp.h"
using namespace std;

int main()
{
    int temp, searchitem;
    bool found=false;

    SortedType<timeStamp> timeList;


    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52,02,20);


    timeList.InsertItem(t1);
    timeList.InsertItem(t2);
    timeList.InsertItem(t3);
    timeList.InsertItem(t4);
    timeList.InsertItem(t5);

    timeList.DeleteItem(t4);

    timeStamp tTemp;
    timeList.ResetList();
    for(int i=0;i<timeList.LengthIs();i++)
    {
        timeList.GetNextItem(tTemp);
        tTemp.printTime();
    }
    cout<<endl;



    return 0;
}
