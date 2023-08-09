#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;int b=-1;
    int i;string s;
    cin>>n;
    map<string,int>x;

    for(i=0;i<n;i++)
    {
        cin>>s;
        x[s]++;

       b=max(b,x[s]);
    }
    map<string,int>::iterator itr;
    for(itr=x.begin();itr!=x.end();itr++)
    {
        if(itr ->second == b)
        {
            cout<<itr->first<<endl;
        }
    }
}
