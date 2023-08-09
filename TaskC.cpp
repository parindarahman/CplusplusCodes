
#include <iostream>
using namespace std;
template <class T>
class Calculator
{
private:
    T num1;
    T num2;
public:
    Calculator(T n1,T n2);
    T add();
    T multiply();
    void display();
};
template <class T>
Calculator<T>::Calculator(T n1, T n2){
    num1=n1;
    num2=n2;
}
template <class T>
T Calculator<T>::add(){
        return num1+num2;
    }
template <class T>
    T Calculator<T> ::multiply(){
        return num1*num2;
    }
template <class T>
void Calculator<T> ::display(){
        cout<<"Numbers: "<<num1<<" and "<<num2;
        cout<<"\n\t Add : "<<add();
        cout<<"\n\t Multiply : "<<multiply();
    }

int main(){
    Calculator<int> a(2,4);
    Calculator<float>b(2.2,4.1);
    a.display();
    b.display();
    return 0;
}
