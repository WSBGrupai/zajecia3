#include "user.h"

User::User(const std::string &name, const std::string &lastname)
    :name(name), lastname(lastname){};

void User::Display()
{
    std::cout << "User ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Lastname: " << lastname << std::endl;
}

std::string User::GetSortValue() const
{
    return lastname;
}