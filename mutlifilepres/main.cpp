#include <iostream>

void foo ();
int main () 
{
    std::cout << " Hello from main" <<  std::endl;
    foo();
    return 0; 
}
void foo ()
{ 
    std::cout << "Hello from foo \n"; 
}