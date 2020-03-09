#include <iostream>
#include <vector>

void printItem(int x)
{
    std::cout << "yes" << x << std::endl;
}

void forEach(std::vector<int> list, void (*func)(int))
{

    for (auto it : list)
    {
        func(it);
    }
}

int main()
{

    std::vector<int> list = {1, 4, 6, 7, 8, 9};

    forEach(list, printItem);

    std::cin.get();
}