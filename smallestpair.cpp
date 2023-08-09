#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
// C++ program to print the sum of the minimum pair
#include <bits/stdc++.h>
using namespace std;
long long smallest_pair(long long a[], long long  n)
{
    long long min = INT_MAX, secondMin = INT_MAX;long long q;
    for ( q = 0; q < n; q++) {

        if (a[q] < min) {


            secondMin = min;

            min = a[q];
        }

        else if ((a[q] < secondMin) && a[q] != min)

            secondMin = a[q];
    }
    return (secondMin + min);
}

int main()
{
    long long t; long long n;
    long long i;long long j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        long long arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cout<<smallest_pair(arr,n)<<endl;
    }
}
