#include <iostream>
#include <ctime>
#include <iomanip>
#include "loan.h"

Loan::Loan(const TimePoint&s, const TimePoint&e, Book*b, User*u)
: startDate(s), endDate(e), bookPtr(b), userPtr(u)
{

}
void printTimePoint(const std::chrono::system_clock::time_point& tp) {
    // Konwersja time_point na time_t    
    std::time_t time = std::chrono::system_clock::to_time_t(tp);

    // Konwersja na czas lokalny    
    std::tm* local_time = std::localtime(&time);

    // Formatowanie i wyświetlanie czasu    
    std::cout << std::put_time(local_time, "%Y-%m-%d %H:%M:%S") << std::endl;
}

void Loan::Display()
{
    std::cout << "Data pozyczenia: ";
        printTimePoint(startDate);
    std::cout << "Data oddania: "; 
        printTimePoint(endDate);
    std::cout << "Pożyczona książka: " ; 
    bookPtr->Display();
    std::cout << "Osoba która pożyczyła: ";
    userPtr->Display();
}