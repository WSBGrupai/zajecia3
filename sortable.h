#include <iostream>
#ifndef _SORTABLE_H_
#define _SORTABLE_H_

class Sortable{
public:
    virtual std::string GetSortValue() const = 0;
};
#endif