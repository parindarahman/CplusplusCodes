

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    map<string,int>m;
    long long q;string x;int y;long long i;int ty;int a;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>ty;
        if(ty==1)
        {
            cin>>x;
            cin>>y;
            m.insert(make_pair(x,y));
            m[x]+=y;

        }
        else if(ty==2)
        {
            cin>>x;
            m.erase(x);
        }
        else
        {
            cin>>x;
            a=m[x];
            cout<<a<<endl;



        }

    }
}
