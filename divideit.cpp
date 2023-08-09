
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int q; long long n;int i;
    cin>>q;
    for(i=0;i<q;i++)
    {
        loop:cin>>n;
        long long minno=0;
        while (n!=1)
        {
            if (n%5==0)
            {
                n=(4*n)/5;
                minno=minno+1;
            }
            else if (n%3==0)
            {
                n=(2*n)/3;
                minno=minno+1;
            }
            else if (n%2==0)
            {
                n=(n)/2;
                minno=minno+1;

            }
            else
            {
                minno=-1;
                break;

            }

        }
        cout<<minno<<endl;

    }

}
