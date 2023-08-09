#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
bool isprime(long long x)
{
    bool flag=true;
    if(x==1)
    {
        return false;
    }
    else{
            for(long long j=2;j<=x/2;j++)
            {
                if(x%j==0)
                {
                    flag=false;
                    break;
                }
            }
            return flag;

        }
}

bool isrevprime(long long y)
{
    long long p;
    p=y;
    long long rev=0;long long rem;
    while(y!=0)
    {
        rem=y%10;
        rev=(rev*10)+rem;
        y=y/10;
    }
        bool flag=true;
    if(rev==1)
    {
        return false;
    }
    else{
            for(long long j=2;j<=rev/2;j++)
            {
                if(rev%j==0)
                {
                    flag=false;
                    break;
                }
            }
            return flag;

        }

}
using namespace std;
int main(){
    long long a;long long primecount=0;long long i;
    long long b;
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++)
    {
        if(isprime(i)==true && isrevprime(i)==true)
        {
            primecount=primecount+1;
        }
        else
        {
            continue;
        }
    }
    cout<<primecount<<endl;
}
