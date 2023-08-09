#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int i;
    int t;int n;int ans;int j;int x;int flag;
    cin>>t;
    int arr1[t];
    for(i=0;i<t;i++)
    {
        cin>>arr1[i];
    }
    for(j=0;j<t;j++)
    {
        for(i=0;i<=(t-1);i++)
        {
            x=abs(arr1[j]-arr1[i+1]);
            if(x<2)
            {
                if(x==1)
                {
                    flag=1;
                }
                else
                {
                    flag=1;
                }
            }
            else if((x%2)!=0)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            ans=j;
            break;
        }
        else
        {
            continue;
        }

    }
    cout<<ans+1<<endl;

  return 0;
}
