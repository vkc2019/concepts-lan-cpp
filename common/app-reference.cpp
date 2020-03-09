// reference is to the pointer
#include <iostream>



int main()
{
    int a = 5;

    int &c = a;

    c++;

    int *b = &a;

    std::cout << b << std::endl;
    std::cout << *b << std::endl;
    std::cout << c << std::endl;
}