#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    set<long long>s;
    long long t;long long x;long long y;long long i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>y;
        cin>>x;
        if (y==1)
        {
            s.insert(x);
        }
        else if (y==2)
        {
           if(s.size()!=0)
           {
               s.erase(x);
           }
           else
           {
               continue;
           }
        }
        else
        {
            set<long long>::iterator itr=s.find(x);
            if(itr==s.end())
            {
                cout<<"No \n"<<endl;
            }
            else
            {
                cout<<"Yes \n"<<endl;
            }

        }

    }


}

