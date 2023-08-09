#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x1;
    long long y1;
    long long x2;
    long long y2;long long ans;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    ans=max(llabs(x1-x2),llabs(y1-y2));
    cout<<ans<<endl;

}
