

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    long long t; long long d; long long m; long long qy;
    long long i;long long y;long long j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>d;
        cin>>m;
        cin>>y;
        cin>>qy;
        long long nobday=0;
        if (d==29 && m==2 )
        {
            for(j=y;j<=qy;j++)
            {


                if ((j % 4 == 0) && (j % 100 != 0))
                {
                    nobday=nobday+1;
                }
                else if (j%400)
                {
                    nobday=nobday+1;
                }
                else
                {
                    continue;
                }

            }
            cout<<"Case "<<i+1<<" "<<":"<<nobday<<endl;

        }

//        else
//        {
//            nobday=qy-y;
//            cout<<"Case "<<i+1<<" "<<":"<<nobday<<endl;
//        }
    }

}
