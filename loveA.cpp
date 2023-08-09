#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    string x;
    cin>>x; int strsize;double minA;int acount=0;int i;
    strsize=x.length();
    if (strsize==1)
    {
       cout<<strsize<<endl;
       exit(0);
    }
    else
    {
        minA=ceil(1+strsize/2);
    }
    for(i=0;i<strsize;i++)
    {
        if(x[i]=='a')
        {
            acount=acount+1;
        }
        else
        {
            continue;
        }
    }
    if (acount>=minA)
    {
        cout<<strsize<<endl;
    }
    else
    {
        while(acount<minA && strsize!=0)
        {
            strsize=strsize-1;
            minA=ceil(1+strsize/2);
        }
        cout<<strsize<<endl;
    }
}
