#include "timeStamp.h"
#include <iostream>

using namespace std;
timeStamp::timeStamp()
{
    seconds=0;
    minutes=0;
    hours=0;
}
timeStamp::timeStamp(int s, int m, int h)
{
    seconds=s;
    minutes=m;
    hours=h;
}

void timeStamp::setTime(int s, int m, int h)
{
    seconds=s;
    minutes=m;
    hours=h;
}

void timeStamp::printTime()
{
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}

int timeStamp::inSeconds()
{
    return (hours*3600)+(minutes*60)+seconds;
}

bool timeStamp::operator>(timeStamp r)
{
    return this->inSeconds()>r.inSeconds();
}

bool timeStamp::operator<(timeStamp r)
{
    return this->inSeconds()<r.inSeconds();
}
bool timeStamp::operator==(timeStamp r)
{
    return this->inSeconds()==r.inSeconds();
}
bool timeStamp::operator!=(timeStamp r)
{
    return this->inSeconds()!=r.inSeconds();
}
