#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool isPrime(long long n) {
   if(n == 1) return false;
   if(n == 2) return true;
   for(long long i = 2; i * i <= n; i++) {
       if( n % i == 0) return false;
   }
   return true;
}


int main(){
    long long num;
    long long lastdig;long long a;
    while(cin>>num)
    {
        a=num;
        if (isPrime(num)==true)
        {
            long long rev=0;
            while(num>0)
            {
                lastdig=num%10;
                rev=(rev*10)+lastdig;
                num=num/10;
            }
            if (isPrime(rev)==true)
            {
                cout<<a<<" is emirp."<<endl;
            }
            else
            {
                cout<<a<<" is prime."<<endl;
            }
        }
        else
        {
            cout<<a<<" is not prime."<<endl;
        }
    }
    return 0;

}
