
#include <iostream>

class A
{
public:
    int a;
    int b;
    A() : A(2, 4)
    {
    }
    A(int a, int b) : a(a), b(b)
    {
    }

    void show()
    {
        std::cout << "a :" << a << std::endl;
        std::cout << "b :" << b << std::endl;
    }
};

int main()
{
    A a(2, 3);
    a.show();

    A b;
    b.show();

}