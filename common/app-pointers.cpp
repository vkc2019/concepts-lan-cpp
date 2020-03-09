#include <iostream>

/**
 * Learnigns
 *
 *  - NULL is type of integer and is manifest constant and can be assigned to a pointer because of implicit conversion
 *  - nullptr is a keyword and self-defined type and can be converted into a pointer not integer
 */

void showRelations()
{
    int *p = new int(10);
    std::cout << "p " << p << std::endl;                // 0x5575d4be2e70 holds the address of *p
    std::cout << "&p    " << &p << std::endl;           // 0x4595d4be2e70  address of p
    std::cout << "*(&p) " << *(&p) << std::endl;        // 0x5575d4be2e70  value which is stored at &p
    std::cout << "*p    " << *p << std::endl;           // 10  value which is hold at p
}

int main()
{

    // int a[] = {1, 4, 6, 8, 12, 14, 16};

    // int *q = a;

    // a[0] = 2;

    // std::cout << " *++q " << *++q << std::endl;
    // std::cout << " *q " << *q << std::endl;

    int *p = NULL;
    std::cout << " p " << p << std::endl; // 0x5575d4be2e70
    // std::cout << " *p " << *p << std::endl;
    // std::cout << " &p " << &p << std::endl;
    int *q = nullptr;
    std::cout << " q " << q << std::endl;
    // std::cout << " *q " << *q << std::endl;
    // std::cout << " &q " << &q << std::endl;

    std::cin.get();
}