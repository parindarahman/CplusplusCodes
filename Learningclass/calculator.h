#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED
class Calculator
{
private:
    int num1;
    int num2;
public:
    int sum(int,int);
    int product(int,int);
    void addition(int,int);
    void subtraction(int&,int,int);
    void divide(int&);
};


#endif // CALCULATOR_H_INCLUDED
