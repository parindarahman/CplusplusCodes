#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;long long k;long long t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        cin>>k;
    }
}
for(i=0;i<n;i++)
    {
        if (arr[i]==arr[0])
        {
            fre1=fre1+1;
        }
        else
        {
            continue;

        }
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]==arr[fre1])
        {
            fre2=fre2+1;
        }
        else
        {
            continue;
        }
    }
    sum=(arr[0]*fre1)+(arr[0]*fre2);
