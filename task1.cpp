#include<iostream>>
using namespace std;
int main(){
    int num1=5;
    int num2=8;
    int *p;
    p=&num1;
    cout<<*p<<endl;
    *p=10;
    cout<<*p<<endl;
    cout << "Line 1 : &num1 = "<< &num1 << " , p = "<< p << endl ;
    cout << "Line 2 : num1 = "<< num1 << " , p = "<< *p << endl ;
    p=&num2;
    cout<<*p<<endl;
    *p=2*(*p);
    cout<<*p<<endl;


}
