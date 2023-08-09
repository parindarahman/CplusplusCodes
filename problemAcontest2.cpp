#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long army1;
    long long army2;

    while((cin>>army1 && cin>>army2)
    {
        if(army1>army2)
        {
            cout<<army1-army2<<endl;
        }
        else
        {
            cout<<army2-army1<<endl;
        }
    }

}
