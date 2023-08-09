#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;long long i;
    long long k; string a;long long x;
    cin>>n;
    cin>>k;
    cin>>a;
    long long fre[k]={0};

    for(i=0;i<n;i++)
    {
       if(a[i]>='A' && a[i]<='Z')
       {
           x=a[i]-'A';
           fre[x]++;
       }

    }
    sort(fre,fre+k);
    cout<<fre[0]*k<<endl;
}
