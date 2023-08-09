#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    long long k;long long l;long long c;long long d;long long p;long long nl;long np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int arr[3];
    arr[0]=k*l/nl;
    arr[1]=c*d;
    arr[2]=p/np;
    sort(arr,arr+3);
    cout<<arr[0]/n<<endl;
}

