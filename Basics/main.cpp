#include <iostream>

using namespace std;

int main()
{
    cout << "Parinda" << endl;
    int num;int i;int flag=0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(i=2;i<num;i++){
        if(num%i==0){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        cout<<"Not a prime"<<endl;
    }
    else if(num==1){
       cout<<" Neither prime or not prime"<<endl;
    }
    else{
        cout<<"The number is prime"<<endl;
    }
}
