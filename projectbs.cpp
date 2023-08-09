#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    std::string s = "C,C++,Java,";
    std::string p = "123";
    stringstream parinda(p);
    int x;int y=1;
    parinda>>x;
    cout<<x+y;


    return 0;
}

