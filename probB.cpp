#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;int i;int j;int m;int x;int y;long long sum=0;
    set<int>a;
    set<int>b;
    set<int>:: iterator itra;
    set<int>:: iterator itrb;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.insert(x);
    }
    cin>>m;
    for(j=0;j<m;j++)
    {
        cin>>y;
        b.insert(y);
    }
    set<int>:: iterator it;
    set<int>:: iterator ib;
    for(it = a.begin();it!=a.end();it++)
    {
         for(ib = b.begin();ib!=b.end();ib++)
         {
             sum=*it+*ib;
             itra=a.find(sum);
             itrb=b.find(sum);
             if(itra==a.end() && itrb==b.end())
             {
                 cout<<*it<<" "<<*ib<<endl;

                 exit(0);
             }
             else
             {
                 continue;
             }


         }

    }



}
