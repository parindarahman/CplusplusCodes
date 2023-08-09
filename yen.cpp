#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){


    long long i;string a;long long account=0;long long wacount=0;
    long long tlecount=0;long long racount=0;long long n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if (a=="AC")
        {
            account=account+1;
        }
        else if (a=="WA")
        {
            wacount=wacount+1;
        }
        else if (a=="TLE")
        {
            tlecount=tlecount+1;
        }
        else
        {
            racount=racount+1;
        }
    }
    cout<<"AC x "<<account<<endl;
    cout<<"WA x "<<wacount<<endl;
    cout<<"TLE x "<<tlecount<<endl;
    cout<<"RE x "<<racount<<endl;




}
