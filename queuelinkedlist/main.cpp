//Parinda Rahman-1931804042
#include <iostream>
#include "queuelinkedlistheader.h"
#include "queuelinkedlist.cpp"
using namespace std;

int main()
{
    QueType<int>xque;
    for(int i=1;i<=5;i++)
    {
        xque.Enqueue(i);
    }
    int result;
    while(!xque.IsEmpty())
    {
        xque.Dequeue(result);
        cout<<result<<" "<<endl;
    }

}
