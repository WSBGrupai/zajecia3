#include <iostream>
#include "sortable.h"

class Book: public Sortable
{
public:
    Book(const std::string& name, const std::string& title, const std::string& author);

    void ToggleLoanable();
    void Display();
    std::string GetSortValue() const;

private:
    std::string name;
    std::string title;
    std::string author;
    bool loanable;
};
