#include <iostream>
#include "calculator.h"
using namespace std;

int main(){
    Calculator a;int n1=3;int n2=6;
    //cout<<" "<<a.sum(2,4);
    a.addition(3,6);
    int sub_result;int div_result;
    a.subtraction(sub_result,n1,n2);
    cout<<"the subtracted result is: "<<sub_result<<endl;
    a.divide(div_result);
    cout<<"the div result is: "<<div_result<<endl;


}


