#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    long long n; long long coinno=0; long long i;long long s;
    long long j;
    cin>>n;
    cin>>s;
    long long arrA[n];
    for(i=1;i<=n;i++)
    {
        arrA[i-1]=i;
    }
                for(j=n-1;j>=0;j--)
                {

                    while(s>=arrA[j])
                    {
                        s=s-arrA[j];
                        coinno=coinno+1;
                        if(s==0)
                        {
                            cout<<coinno<<endl;
                            exit(0);
                        }
                        else
                        {
                            continue;
                        }
                    }
                }

}
