#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    long long k;long long i;long long sum=0;int dig;long long ct;
    long long a;
    cin>>k;
    for(i=1;;i++)
    {
        a=i;
        while(a>0)
        {
            dig=a%10;
            sum=dig+sum;
            a=a/10;
        }
        if(sum==10)
        {
            ct=ct+1;
            if(ct==k)
            {
                cout<<a<<endl;
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


return 0;
}
