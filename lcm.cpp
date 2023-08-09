#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long gcd(long long y,long long z)
{
    long long p;
    p=__gcd(y, z);
    return p;

}

int main(){
    int t;long long a;long long b; long long c;long long q;long long anspt1;long long pt2;
    long long finans;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        q= gcd(b,c);
        if (q==0)
        {
            cout<<"Case "<<i<<": "<<"impossible"<<endl;
        }
        else
        {
            anspt1=(b/q)*c;
            pt2=gcd(a,anspt1);
            if (pt2==0)
            {
                cout<<"Case "<<i<<": "<<"impossible"<<endl;
            }
            else
            {
                finans=(a/pt2)*anspt1;
            }
            cout<<"Case "<<i<<": "<<finans<<endl;

        }


    }
}
