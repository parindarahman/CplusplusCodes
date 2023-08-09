#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    long long n;
    long long i;
    long long j,k;
    long long acount=0;
    long long bcount=0;
    long long mino=0;
    string pre;
    string s;
    string news;
    cin>>n;
    cin>>s;
    for (i=2;i<=n;i+2)
    {
        pre=s.substr(0,i-1);
        for(j=0;j<i;j++)
        {
            if (pre[j]=='a')
            {
                acount=acount+1;
            }
            else
            {
                bcount=bcount+1;
            }
            if(acount!=bcount)
            {
                if(pre[j]=='a' && pre[j+1]=='a')
                {
                    pre[j+1]='b';
                    mino=mino+1;
                }
                else if(pre[j]=='b' && pre[j+1]=='b')
                {
                    pre[j+1]='a';
                    mino=mino+1;
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


   }
   cout<<mino<<endl;
   cout<<pre<<endl;
}




