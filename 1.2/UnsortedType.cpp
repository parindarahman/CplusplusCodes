#include "UnsortedType.h"

UnsortedType::UnsortedType(){
    length=0;
}
bool UnsortedType::IsFull() const
{
   return(length==MAX_ITEMS)
}
int UnsortedType::GetLength const
{
    return length;
}
ItemType UnsortedType::GetItem (ItemType item, bool& found)
{
    bool moreToSearch;
    int location=0;
    found=false;
    moreToSearch=(location<length);
    while(moreToSearch&& !found)
    {
        switch(item.ComparedTo(info[Location]))
        {
            case LESS:
            case GREATER::

        }
    }
}
void UnsortedType::MakeEmpty()
{
    length=0;
}
