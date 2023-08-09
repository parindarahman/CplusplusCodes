#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;long long k; long long t;long long i;long long j;long long rs;long long ts=0;long long ints;double ans;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        cin>>k;
        ints=n*k;
        for(j=0;j<n;j++)
        {
            cin>>rs;
            ts=ts+rs;
        }
        ans=((ints-ts)/(k*1.0));
        if (abs(ans-int(ans))>0)
        {
            ans=floor(ans)+1;
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }


    }


}
