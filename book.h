#include <iostream>
#include "sortable.h"
#ifndef _BOOK_H_
#define _BOOK_H_

class Book: public Sortable
{
public:
    Book(const std::string& title, const std::string& author);

    void ToggleLoanable();
    void Display();
    std::string GetSortValue() const;
    bool GetLoanable() const;

private:
    std::string title;
    std::string author;
    bool loanable;
};

#endif