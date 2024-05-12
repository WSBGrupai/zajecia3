#include "book.h"

Book::Book(const std::string& name, const std::string& title, const std::string& author)
:name(name), title(title), author(author), loanable(true){};

void Book::Display()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Loanable: " << loanable << std::endl;
}

void Book::ToggleLoanable()
{
    loanable = !loanable;
}

std::string Book::GetSortValue() const
{
    return title;
}

bool Book::GetLoanable() const
{
    return loanable;
}