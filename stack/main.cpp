#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;

int main()
{
    StackType<int> xlist;
    StackType<int> ylist;
    if (xlist.IsEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    xlist.Push(5);
    xlist.Push(7);
    xlist.Push(4);
    xlist.Push(2);
     if (xlist.IsEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
    }
    if (xlist.IsFull())
        {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        cout<<"Stack is not full"<<endl;
    }
    ylist.Push(xlist.Top());
    xlist.Pop();
    ylist.Push(xlist.Top());
    xlist.Pop();
    ylist.Push(xlist.Top());
    xlist.Pop();
    ylist.Push(xlist.Top());
    xlist.Pop();
    cout<<ylist.Top();
    ylist.Pop();
    cout<<ylist.Top();
    ylist.Pop();
    cout<<ylist.Top();
    ylist.Pop();
    cout<<ylist.Top();
    ylist.Pop();

    ylist.Push(2);
    ylist.Push(4);
    ylist.Push(7);
    ylist.Push(5);
      if (ylist.IsFull())
        {
        cout<<"Stack is not full"<<endl;
    }
    else
    {
        cout<<"Stack is full"<<endl;
    }

     ylist.Pop();
     ylist.Pop();


    cout<<ylist.Top();
    StackType<char>st;
    string str;
    cout<<endl;
    cin>>str;
    int flag=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='(')
        {
            st.Push(str[i]);
            flag=1;
        }
        if(!st.IsEmpty())
        {
          if (str[i] == ')') {
                if (st.Top() == '(')
                {
                    st.Pop();
                    continue;
                }
                else
                    break;
          }
            else {
            break;
            }

            }

        }


    if ((flag == 1) && st.IsEmpty())
        cout << "Not balanced" << endl;
    else
        cout << "Balanced" << endl;


}
