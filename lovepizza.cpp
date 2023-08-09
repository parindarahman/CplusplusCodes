#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    long long n;string a;long long i;long long j;long long lena;
    long long mcount=0; long long acount=0; long long rcount=0;long long gcount=0;
    int icount=0; int tcount=0; long long nopiz=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a;
        lena=a.length();
        for(j=0;j<lena;j++)
        {
            if (a[j]=='M')
            {
                mcount=mcount+1;
            }
            else if (a[j]=='A')
            {
                acount=acount+1;
            }
             else if (a[j]=='R')
            {
                rcount=rcount+1;
            }
            else if (a[j]=='G')
            {
                gcount=gcount+1;
            }
            else if (a[j]=='I')
            {
                icount=icount+1;
            }
            else if (a[j]=='T')
            {
                tcount=tcount+1;
            }
            else
            {
                continue;
            }


        }

        if ((mcount>=1 && acount>=3) && (rcount>=2 && gcount>=1) && (icount>=1 && tcount>=1))
        {
            while((mcount>=1 && acount>=3) && (rcount>=2 && gcount>=1) && (icount>=1 && tcount>=1))
            {
                mcount=mcount-1;
                acount=acount-3;
                rcount=rcount-2;
                gcount=gcount-1;
                icount=icount-1;
                tcount=tcount-1;
                nopiz=nopiz+1;

            }
            cout<<nopiz<<endl;
            nopiz=0;
            mcount=0;
            acount=0;
            rcount=0;
            gcount=0;
            icount=0;
            tcount=0;
        }
        else
        {
            nopiz=0;
            cout<<nopiz<<endl;
        }


    }

}
