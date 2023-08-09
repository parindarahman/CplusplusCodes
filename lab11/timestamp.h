#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
class timeStamp
{
private:
    int seconds;
    int minutes;
    int hours;
public:
    timeStamp();
    timeStamp(int,int,int);
    void setTime(int,int,int);
    void printTime();
    int inSeconds();
     bool operator<(timeStamp);
     bool operator>(timeStamp);
     bool operator==(timeStamp);
     bool operator!=(timeStamp);
};

#endif // TIMESTAMP_H_INCLUDED
