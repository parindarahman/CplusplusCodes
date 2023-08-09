#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;int i;int j;int a;int m;
    cin>>n;
    int arrA[n];
    for (i=0;i<n;i++)
    {
        cin>>arrA[i];
    }
    cin>>m;
    int arrB[m];
    for (j=0;j<m;j++)
    {
        cin>>arrB[j];
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            a=arrA[i]+arrB[j];
                if (a!=arrA[i] && a!=arrB[j])
                {
                    cout<<arrA[i]<<endl;
                    cout<<arrB[j]<<endl;
                    break;

                }
                else
                {
                    continue;
                }


        }
    }


}
