#include<iostream>
using namespace std;
int main()
{
    int *p;
    int *q;
    p=new int;
    *p=34;
    cout<<*p<<endl;
    q=p;
    cout<<q<<" "<<*q<<endl;
    *q=45;
    cout<<*q<<endl;
    cout<<*p<<endl;
    p=new int;
    *p=18;
    cout<<*p<<endl;
    cout<<*q<<endl;
    delete q;
    q=NULL;
    q=new int;
    *q=62;
    cout << "Line 7 : p = "<< p << " ,*p="<< *p <<endl ;
    cout << "Line 8 : q = "<< q << " ,* q="<< *q <<endl;

}
