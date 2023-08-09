#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <string>
class Account{
private:
    std::string name;
    int age;
    int balance;
public:
    Account(string,int);
    void printAll();
    void deposit(int);
    void withdraw(int);

};


#endif // ACCOUNT_H_INCLUDED
