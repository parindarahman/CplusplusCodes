
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;int m; int n;int i;long long tarea; long long farea;long long x;long long y;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        cin>>m;
        y=m-2;
        tarea=(n*n);
        farea=(n/2)*(n/2);
        if (m==1)
        {
           cout<<tarea<<endl;
        }
        else
        {
            x=(2*(tarea-farea))+(y*(tarea-(n*n/2)));
            cout<<x<<endl;

        }

    }
    return 0;

}
