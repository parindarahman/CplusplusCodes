
long long bigMod(long long base, long long exp, long long mod) {
   if(exp == 0) return 1 % mod;
   if(exp % 2 == 1) {
       return base * bigMod(base, exp - 1, mod) % mod;
   } else {
       long long half = bigMod(base, exp / 2, mod);
       return half * half % mod;
   }
}

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    long long b; long long p; long long m;long long ans;
    while(cin>>b,cin>>p,cin>>m)
    {

        ans=bigMod(b,p,m);
        cout<<ans<<endl;
    }


}
