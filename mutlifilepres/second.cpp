#include <iostream>
void foo ()
{ 
    std::cout << "Hello from foo \n"; 
}

class Foo{ //deklaracja klasy Foo
public:
    Foo()
    {
        std::cout<< "invocation of Foo ctr\n" ;
    }
    void Bar(); // deklaracja metody Bar
};

void Foo::Bar() // definicja metody Bar
{
    std::cout << "Hello from Bar metod \n"; 
}