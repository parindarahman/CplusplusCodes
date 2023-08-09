#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;long long u;long long i;int a=0;
    cin>>u;
    for(i=0;i<u;i++)
    {
          cin>>n;

          for(i=1;n!=0;i++)
          {
            if (n==0)
            {
                cout<<"Imran"<<endl;
                break;
             }
            else if(n==1)
            {
                cout<<"Aminul"<<endl;
                break;
            }
            else
            {
                n=n-i;
                a+=1;
            }
          }
          if (a%2==0)
          {
              cout<<"Imran"<<endl;
          }
          else
          {
              cout<<"Aminul"<<endl;
          }


    }
    return 0;

}
