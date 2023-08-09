#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
const int MAX_ITEMS=50;
template <class ItemType>

class timestamp{
    public :
    timestamp();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&,
    bool&);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

#endif // TIMESTAMP_H_INCLUDED
