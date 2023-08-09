//Parinda Rahman-1931804042-CSE225-Section 2
#include <iostream>
#include "complex.h"
using namespace std;
int main()
{
    Complex num1(2,3);
    Complex num2 (4,5);
    Complex sum=num1+num2;
    Complex pro=num1*num2;
    pro.Print();
    sum.Print();
    bool x=num1!=num2;
    cout<<x;


}
