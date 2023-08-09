#include<iostream>
using namespace std;
int main()
{
    int value1=25;
    int* ptr1;
    int** pptr1;
    ptr1=&value1;
    pptr1=&ptr1;
    cout<<value1<<" "<<*ptr1<<**pptr1<<endl<<endl;

    int value2=15;
    int* ptr2;
    int **pptr2;
    ptr2=&value2;
    pptr2=&ptr2;
    cout<<value2<<" "<<*ptr2<<" "<<**pptr2<<endl;
    ptr2=ptr1;
    cout<<value2<<" "<<*ptr2<<" "<<**pptr2<<endl;

}
