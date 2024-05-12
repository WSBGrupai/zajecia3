#include <iostream>

void foo ()
{ 
    std::cout << "Hello from foo \n"; 
}
int main () 
{
    std::cout << " Hello from main" <<  std::endl;

    
    foo();
    
    return 0; 
}