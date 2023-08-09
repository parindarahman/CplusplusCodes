#include <fstream>
#include <iostream>
#include "ItemType.h"
ItemType::ItemType()
{
    value=0;
}
RelationType ItemType::ComparedTo(ItemType otheritem) const{
    if(value<otheritem.value)
    {
        return LESS;
    }
    else if(value>otheritem.value)
    {
        return GREATER;
    }
    else
    {
        return EQUAL;
    }
}
void ItemType::Intialize(int number)
{
    value=number;
}
void ItemType::Print(std::ostream& out) const
{
    out<<value;
}
