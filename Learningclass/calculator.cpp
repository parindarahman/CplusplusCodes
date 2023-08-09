#include "calculator.h"
#include <iostream>
using namespace std;
int Calculator::sum(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}

 int Calculator::product(int num1,int num2){
     return num1*num2;
 }
 void Calculator::addition (int num1,int num2){
     cout<<" "<<num1+num2;
 }
 void Calculator::subtraction(int& sub_result, int n1,int n2){
     sub_result=n1-n2;
 }
 void Calculator:: divide(int& div_result){
     int n1=9;
     int n2=3;
     div_result=n1/n2;

 }
