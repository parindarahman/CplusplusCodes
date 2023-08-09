#include <iostream>

using namespace std;

class myArray{
    int size;
    int *data;
public:
    myArray(int);
    myArray();
    void setValue(int,int);
    int getValue(int);
    void printValue();

};
myArray:: myArray(int number)
{
    data=new int[number];
    size=number;
}
myArray:: myArray()
{
    delete [] data;
}
void myArray:: setValue(int index,int value){
    data[index]=value;
}
void myArray::printValue(){
    for(int i=0;i<size;i++){
        cout<<i<<" "<<data[i]<<endl;
    }
}
int myArray::getValue(int index)
{
    return data[index];
}

int main()
{
    myArray a(5),b(200);
    a.setValue(0,100);
    a.setValue(1,200);
    cout<<a.getValue(0)<<endl;
    cout<<a.getValue(1)<<endl;
    a.printValue();
    return 0;

}
