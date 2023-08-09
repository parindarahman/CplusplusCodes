#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

bool check(int y)
{
    int arr[6];int j;int i=0;int lastdig=0;

        while(y!=0)
        {
            lastdig=y%10;
            arr[i]=lastdig;
            i=i+1;
            y=y/10;
        }
        sort(arr,arr+i);

    for(j=0;j<i-1;j++){
        if(arr[j]==arr[j+1])
        {
            return false;

        }
    }
    return true;
}
int main(){
    int year;int x;
    cin>>year;
    x=year+1;
    while (1)
    {
        if (check(x)==true)
        {

            cout<<x<<endl;
            break;
        }
        else
        {
            x=x+1;

        }
    }
}
