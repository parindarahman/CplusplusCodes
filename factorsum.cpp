#include <iostream>
using namespace std;
int main(){
    long long n;
    while(cin>>n)
    {
        long long sum=0;
        if (n<=1)
        {
            cout<<0<<endl;
        }
         else {

                for (int i = 2; i*i <= n; i++)
                {

                        if (n % i == 0)
                        {

                            if (i == (n / i))
                                sum += i;
                            else
                                sum += (i + n/i);
                        }
                }

                 cout<<sum+1<<endl;
            }

    }
    return 0;

}
