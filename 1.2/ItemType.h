#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED
#include<fstream>
const int MAX_ITEMS=5;
enum RelationType{LESS,GREATER,EQUAL};
class ItemType
{
public:
    ItemType();
    RelationType ComparedTo(ItemType) const;
    void Print(std::ostream&) const;
    void Initialize(int number);
private:
    int value;
};


#endif // ITEMTYPE_H_INCLUDED
