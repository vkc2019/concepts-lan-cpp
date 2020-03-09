// static varaibles only initialized once

#include <iostream>

void increament()
{
    static int i = 0;
    i++;
    std::cout << "current value : " << i << std::endl;
}

int main()
{
    increament();
    increament();
    increament();
    increament();
}