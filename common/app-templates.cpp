#include <iostream>

// void printLog(int a)
// {
//     std::cout << a << std::endl;
// }

// void printLog(std::string a)
// {
//     std::cout << a << std::endl;
// }

template <typename T>
void printLog(T a)
{
    std::cout << a << std::endl;
}

int main()
{

    printLog(1);
    printLog("Kishore");
}