#include <iostream>
using namespace std;
int sumOfDigit(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return (n%10+sumOfDigit(n/10));
    }
}
int main()
{
    cout<<"Enter a number"<<endl;
    int x;
    cin>>x;
    int result=sumOfDigit(x);
    cout<<"the answer is "<<result;
}
