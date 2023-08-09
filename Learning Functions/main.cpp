#include <iostream>

using namespace std;

void printinganything();
int sumfunc(){
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    return num1+num2;
}
int sumfuncnew(int a,int b){
    return a+b;
}
void sumfuncnew2(int a,int b){
    cout<<"The sum is "<<a+b;
}
int main()
{
    int a;int n1; int n2;
    cin>>n1;
    cin>>n2;
    a=sumfunc();
    cout<<"The sum is "<<a<<endl;
    cout<<"The sum is "<<sumfuncnew(n1,n2)<<endl;
    sumfuncnew2(n1,n2);
    return 0;
}
void printinganything(){
    cout<<"Yes I can Print"<<endl;

}
