#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;int k;int i;int a;int xcount=0;
    cin>>n;
    cin>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=INT_MAX;
        cin>>a;
        if (k%a==0)
        {
            xcount=xcount+1;
            arr[i]=(k/a);
        }
        else
        {
            continue;
        }

    }
    sort(arr,arr+n);
    cout<<arr[0]<<endl;
}
