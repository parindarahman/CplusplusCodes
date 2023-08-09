#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include "ItemType.h"
struct NodeType;
class UnsortedType
{
public:
    UnsortedType();
    ~UnsortedType();
    void MakeEmpty();
    bool IsFull() const;
    int GetLength() const;
    ItemType GetItem(ItemType& item,bool& found); void
    PutItem(ItemType item);
    void DeleteItem(ItemType item);
    void ResetList();
    ItemType GetNextItem();


    private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};


#endif // UNSORTEDTYPE_H_INCLUDED
