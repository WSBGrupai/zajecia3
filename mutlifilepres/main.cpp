#include <iostream>
#include "second.h"

class Foo{ //deklaracja klasy Foo
public:
    Foo()
    {
        std::cout<< "invocation of Foo ctr\n" ;
    }
    void Bar() // deklaracja metody Bar
    {
        std::cout << "Hello from Bar metod \n"; // definicja metody Bar
    }
};

void Bar(); //deklaracja funkcji

int main () 
{
    std::cout << " Hello from main" <<  std::endl;
    Bar();
    // typ = int ; nazwa = x ; przypisanie wartości 7
    int              x               =7;
    Foo y; 
    y.Bar();    //wywołanie metody
    return 0; 
}

void Bar()  // definicja funkcji
{
    std::cout << "Hello from Bar function \n";
}