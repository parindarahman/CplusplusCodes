#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main()
{
    long long t;long long x;long long i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x;
       long long sum=0;long long exp=0;long long a;
        sum=(x*(x+1))/2;
        while(pow(2,exp)<=x)
        {
            a=pow(2,exp);
            sum=sum-a+(-1*a);
            exp=exp+1;
        }
        cout<<sum<<endl;

    }

    return 0;
}
