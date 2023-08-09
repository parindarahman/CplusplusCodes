#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long totalval(long long a)
{
    long long dig; long long sum=0;
    while(a>0)
        {
            dig=a%10;
            sum=dig+sum;
            a=a/10;
        }
        return sum;

}
int main()
{
    long long i;
    long long k;
    long long p;
    long long ct=0;
    cin>>k;
    for(i=1;;i++)
    {
        p=totalval(i);
        if (p==10)
        {
            ct=ct+1;
            if (ct==k)
            {
                cout<<i<<endl;
                exit(0);
            }
            else
            {
                continue;
            }
        }
        else
        {
            continue;
        }
    }
}
