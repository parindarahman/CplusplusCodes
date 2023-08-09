#include "Account.h"
#include <iostream>
using namespace std;
Account::Account(std::string n,int a)
{
    name=n;
    age=a;
    balance=0;
}
void printAll::printAll()
{
    cout<<"The name of the account holder is "<<name;
    cout<<"The age of the account holder is "<<age;
    cout<<"The balance is "<<balance;
}
void deposit::deposit(int x)
{
    balance=balance+x;
}
void withdraw::withdraw(int x)
{
    if (balance>0){
         balance=balance-x;
    }
    else
    {
        cout<<"insufficient funds"<<endl;
    }

}

