#include "user.h"

int main()
{
    User a ("Adam", "Kowalski"), b = User("Mateusz", "Nowicki");

    a.Display();
    b.Display();
}