
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;long long dig;long long a=0;long long b=0;
    cin>>n;
    while (n>0)
    {
        dig=n%10;
        n=n/10;
        if(dig==7)
        {
            a=a+1;
        }
        else if(dig==4)
        {
            b=b+1;
        }
        else
        {
            continue;
        }
    }
    cout<<a<<endl;
    cout<<b<<endl;
    if ((a+b)==7 || (a+b)==4 )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
