#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

long long bigmod(long long p,string x)
{
    long long s=0;long long i;long long ab;
    for(i=0;i< (x.size());i++)
    {
        ab= x[i]-'0';
        s=((s*10)+ab)%p;
    }

    return s;
}
int main()
{
    string a;
    long long b;int j;
    int t;
    cin>>t;
    for(j=0;j<t;j++)
    {

        cin>>a;
        cin>>b;
        if(b<0)
        {
            b=b*-1;
        }
        if (a[0]=='-')
        {
            a=a.substr(1, a.size()-1);

        }

        if (bigmod(b,a)==0)
        {
            cout<<"Case "<<j+1<<":"<<" divisible"<<endl;
        }
        else
        {
            cout<<"Case "<<j+1<<":"<<" not divisible"<<endl;
        }
    }
}
