#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
template<class item>
class dynArr{
private:
    item *data;
    item size;

public:
    dynArr(item);
    ~dynArr();
    void setvalue(item,item);
    void getvalue(item);

};


#endif // DYNARR_H_INCLUDED
