

#include <iostream>

void constData()
{
    const int *data = new int(50);
    std::cout << "location  : " << data << " data:" << *data << std::endl;
    // *data = 60;  fails as data is const
    // std::cout << *data << std::endl;
    data++; // can be done as pointer is not const
    std::cout << "location  : " << data << " data:" << *data << std::endl;
}

void constPointer()
{
    int *const data = new int(50);
    std::cout << "location  : " << data << " data:" << *data << std::endl; // preset location and current value
    *data = 60;                                                            // data changed
    std::cout << "location  : " << data << " data:" << *data << std::endl; // preset location and current value
    (*data)++;                                                             // can be done as pointer is not const
    std::cout << "location  : " << data << " data:" << *data << std::endl;
}

class User
{
public:
    int x;
    int y;
    User() : x(0), y(0)
    {
    }
    int getX() const
    {
        // x++; // does not work as you proimised const
        return x;
    }
};

constexpr int x = 0;

void classConst()
{
    User user;

    std::cout << user.getX() << std::endl;
}

int main()
{
    std::cout << x++ << std::endl;
    // constData();
    // constPointer();
    classConst();

    std::cin.get();
}
