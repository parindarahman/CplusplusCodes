//Parinda Rahman-1931804042-CSE225-Section 2
#include <iostream>
#include "complex.h"
using namespace std;
Complex::Complex()
{
    Real=0;
    Imaginary=0;
}
Complex::Complex(double r, double i)
{
    Real=r;
    Imaginary=i;
}
Complex Complex ::operator+(Complex a)
{
    Complex t;
    t.Real=Real+ a.Real;
    t.Imaginary=Imaginary+a.Imaginary;
    return t;

}
Complex Complex ::operator*(Complex a)
{
    Complex t;
    t.Real=(Real* a.Real)-(Imaginary*a.Imaginary);
    t.Imaginary=(Real*a.Imaginary)+(a.Imaginary*a.Real);
    return t;

}
bool Complex ::operator!=(Complex a)
{
    if (a.Real==Real && a.Imaginary==Imaginary){
            return true;

    }
    else
    {
        return false;
    }

}
void Complex::Print()
{
    cout<<Real<<endl;
    cout<<Imaginary<<endl;
}
