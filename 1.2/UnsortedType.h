#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include "ItemType.h"

class UnsortedType{
public:
    UnsortedType();

    void MakeEmpty();
    bool IsFull() const;
    int GetLength() const;
    ItemType GetItem (ItemType, bool&);
    void PutItem(ItemType item);
    void DeleteItem(ItemType item);
    void ResetList();
    ItemType GetNextItem();
private:

    int length;
    ItemType info[MAX_ITEMS}
    int currentPos;


};

#endif // UNSORTEDTYPE_H_INCLUDED
