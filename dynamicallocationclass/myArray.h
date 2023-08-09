#ifndef MYARRAY_H_INCLUDED
#define MYARRAY_H_INCLUDED
class myArray{
    int size;
    int *data;
    public:
        myarray(int);
        ~myArray();
        void setValue(int,int);
        void getValue(int);
        void printValue();


};

#endif // MYARRAY_H_INCLUDED
