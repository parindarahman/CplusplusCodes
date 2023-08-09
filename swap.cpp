#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;int i;int temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if (std::is_sorted(arr, arr + n)) {
        std::cout << "YES" << std::endl;
    }
    else
    {
        temp=arr[n-1];
        int temp2=arr[0];
        arr[0]=temp;
        arr[n-1]=temp2;
        if (std::is_sorted(arr, arr + n))
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }

    }
}
