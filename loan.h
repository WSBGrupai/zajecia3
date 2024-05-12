#ifndef _LOAN_H_
#define _LOAN_H_

#include <chrono>
#include "book.h"
#include "user.h"

using TimePoint = std::chrono::system_clock::time_point;

class Loan
{
public:
    Loan(const TimePoint&, const TimePoint&, Book*, User*);
    void Display();

private:
    TimePoint startDate;
    TimePoint endDate;
    Book* bookPtr;
    User* userPtr;
};
#endif