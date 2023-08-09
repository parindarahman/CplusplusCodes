#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
bool inoneswap(string x,string y)
{
    int lenx=x.length();
    int leny=y.length(); int before= -1;int now = -1;
    if(lenx!=leny)
    {
        return false;
    }
    int c=0;
    for(int i=0;i<lenx;i++)
    {
        if(x[i]!=y[i]){

             c=c+1;
             if(c>2)
             {
                 return false;
             }
             before= now;
             now = i;

        }

    }
    if(c==2)
    {
        if(x[before]==y[now] && y[before]==x[now])
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}
int main(){
    string a;string b="";
    cin>>a;
    int le=a.length();
    for(int i=le-1;i>=0;i--)
    {
        b=b+a[i];
    }
    if (inoneswap(a,b)==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
