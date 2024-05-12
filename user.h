#include <iostream>
#include "sortable.h"

class User: public Sortable
{
public:
    User(const std::string &name, const std::string &lastname);

    std::string GetSortValue() const;
    void Display();
    
private:
    std::string id;
    std::string name;
    std::string lastname;
};