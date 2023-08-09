#include <iostream>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType<int>xque(5);
    if(xque.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }
    xque.Enqueue(5);
    xque.Enqueue(7);
    xque.Enqueue(4);
    xque.Enqueue(2);
     if(xque.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }

    xque.Enqueue(6);

    int result;
    while(!xque.IsEmpty())
    {
        xque.Dequeue(result);
        cout<<result<<" ";
    }
    xque.Enqueue(5);
    xque.Enqueue(7);
    xque.Enqueue(4);
    xque.Enqueue(2);
    xque.Enqueue(6);


    if(xque.IsFull())
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<"Queue is not full"<<endl;
    }
    //xque.Enqueue(8);
    cout<<"Queue overflow"<<endl;

    xque.Dequeue(result);
    xque.Dequeue(result);
    while(!xque.IsEmpty())
    {
        xque.Dequeue(result);
        cout<<result<<" ";
    }
    if(xque.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
        //xque.Dequeue(result);
        cout<<"Queue underflow"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }
    int n;
    cin>>n;
     QueType<string>yque;
     yque.Enqueue("1");
     string x;char y='1';
     for(int i=0;i<n;i++)
     {
         yque.Dequeue(x);
         cout<<x<<endl;
         yque.Enqueue(x+"0");
         yque.Enqueue(x+"1");
     }







}
