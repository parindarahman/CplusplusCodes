#include <iostream>
using namespace std;
int fib(int x)
{
    if((x==1)|| (x==0))
    {
        return x;
    }
    else{
        return fib(x-1)+fib(x-2);
    }
}
int main()
{
    int x;
    int i=0;
    cout<<"Enter no of terms";
    cin>>x;
    cout<<"The series is: ";
    while(i<x)
    {
        cout<<" "<<fib(i);
        i++;
    }

}
