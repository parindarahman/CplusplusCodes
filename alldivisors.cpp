#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void divisors(long long n)
{
    vector<long long> v;
    for (long long i=1; i*i<=n; i++)
    {
        if (n%i==0)
        {
            long long j=n/i;
            if (j == i)
                cout<<i<<" ";
            else
            {
                cout<<i<<" ";
                v.push_back(j);
            }
        }
    }
    long long x=v.size()-1;

    for (long long i=x; i>=0; i--)
        printf("%d ", v[i]);
}
int main()
{
    long long num;
    cin>>num;
    divisors(num);
    return 0;
}
