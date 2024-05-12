#include <iostream>
#include "sortable.h"
#ifndef _USER_H_
#define _USER_H_

class User: public Sortable
{
public:
    User(const std::string &name, const std::string &lastname);

    std::string GetSortValue() const;
    void Display();

private:
    static int userCount;
    int id;
    std::string name;
    std::string lastname;
};
#endif