#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
    int n;
    while(true)
    {
        cin>>n;
        if (n==0)
        {
            exit(0);
        }
        else
        {
               long long g=0;
               for (int i=1;i<n;i++)
               {
                   for(int j=i+1;j<=n;j++)
                   {
                       g=g+ __gcd(i,j);

                   }
               }
               cout<<g<<endl;

        }
    }
}

