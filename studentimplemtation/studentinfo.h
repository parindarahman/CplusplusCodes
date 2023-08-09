#include <string>
#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
using namespace std;
class studentinfo{
private:
    int ID;
    std::string name;
    double gpa;
public:
    studentinfo();
    studentinfo(int,std::string,double);
    void printinfo();
    bool operator==(studentinfo);
    bool operator!=(studentinfo);

};

#endif // STUDENTINFO_H_INCLUDED
