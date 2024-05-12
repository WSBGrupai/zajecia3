#include "user.h"
#include "book.h"
#include "loan.h"
#include <chrono>
#include <ctime>
#include <iomanip>

int main()
{
    User a ("Adam", "Kowalski");
    Book b ("Szkoła Programowania", "Stephen Prata");
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    Loan l (now , now , &b , &a);
    l.Display();
}