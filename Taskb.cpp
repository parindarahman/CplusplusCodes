#include <iostream>
using namespace std;
class MyInfo
{
    private:
        int x;
    public:
        void set(int a);

        int get();

};
void MyInfo :: set(int a)
{
    x=a;
}
int MyInfo :: get()
{
    return x;
}
int main()
{
    MyInfo obj;
    obj.set(5);
    cout<<obj.get();
    return 0;
}
