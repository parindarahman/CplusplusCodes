int willstop(long long n)
{
    while (n > 1)
    {
        if (n%2 ==0)
        {
            n=n/2;
        }

        else
        {
            n=3*(n+3);
        }

    }
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    long long p;
    int x;
    cin>>p;
    x=willstop(p);

    if(x==0)
    {
        cout<<"TAK"<<endl;
    }
    else
    {
        cout<<"NIE"<<endl;
    }


}
