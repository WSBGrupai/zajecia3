#include <iostream>


class Library{
public:
    Library(std::string name);
    void DisplayAllBooks();
    void DisplayAllUsers();
    void DisplayAllLoans();
    void AddBook();
    void AddUser();
    void AddLoan();
    void RemoveBook();
    void RemoveUser();

private:
    void PickBook();
    void PickUser();
};
