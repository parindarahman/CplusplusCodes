#include "Account.h"
#include <iostream>
using namespace std;
int main(){
    Account obj("Parinda",19);
    obj.printAll();
    obj.deposit(10);
    obj.withdraw(5);
    obj.printAll();


}
