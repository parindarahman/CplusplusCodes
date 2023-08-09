#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;string a; string b;long long i;int c;int x;int j;
    int p;int q;
    cin>>n;
    cin>>a;
    cin>>b;
    int arr[n];
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            c=a[i]-b[i];
            p=b[i]+10-a[i];

        }
        else
        {
            c=b[i]-a[i];
            p=a[i]+10-b[i];

        }
        if (p<c)
        {
            arr[i]=p;
        }
        else
        {
            arr[i]=c;
        }

    }
    int sum=0;
    for(j-0;j<n;j++)
    {
        sum=sum+arr[j];
    }
    cout<<sum<<endl;

}
