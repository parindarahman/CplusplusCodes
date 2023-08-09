#include <iostream>

using namespace std;

int main()
{
  int *intArray;
  int arraySize;

  cout<<"Enter array size: ";
  cin>> arraySize;
  cout<<endl;
  intArray= new int[arraySize];
  for ( int i = 0 ; i < arraySize;i++)
  {
    intArray[i]= i + 1 ;
  }
  for ( int i = 0 ; i < arraySize;i++)
  {
    cout<<intArray[i]<<" ";
  }
  cout<<endl<<endl;
  for ( int i = 0 ; i < arraySize;i++)
  {
    cout<<*(intArray+i)<<" ";
  }
  delete []intArray;
  cout<<endl;
  return 0;


}
