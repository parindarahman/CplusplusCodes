//Parinda Rahman-1931804042-CSE225-Section 2
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
public:
    Complex ();
    Complex (double,double);
    Complex operator+(Complex);
    Complex operator*(Complex );
    bool operator!=(Complex);
    void Print();
private:
    double Real,Imaginary;

};

#endif // COMPLEX_H_INCLUDED
