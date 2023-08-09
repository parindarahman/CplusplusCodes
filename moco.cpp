#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long t;long long n;long long i;long long j;string p;
    cin>>t;
    for(i=0;i<t;i++)
    {
        if(n==0)
        {
            cout<<"Imran"<<endl;
        }
        else if(n==1)
        {
            cout<<"Imran"<<endl;
        }
        else
        {

            for(j=2;n>0;j++)
            {
                if(j%2==0)
                {
                    n=n-j;
                    p="Imran";

                }
                else
                {
                    n=n-j;
                    p="Aminul";
                }
            }
            cout<<p<<endl;

        }

    }
}
