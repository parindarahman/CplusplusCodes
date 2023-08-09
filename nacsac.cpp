#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long t;long long i;long long  a=1;long long b=1;long long n;long long ans;;long long j;string p;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        char bi[n];
        cin>>bi;
        for(j=0;j<(n);j++)
        {
            if(bi[j]=='0')
            {
                a=a*2;
            }
            else
            {
                b=b*3;
            }
        }
        ans=a+b;
        if (ans<100003)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans%100003<<endl;
        }

    }
}
