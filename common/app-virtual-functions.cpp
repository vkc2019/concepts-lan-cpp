// override

#include <iostream>

class Person
{
public:
    Person()
    {
    }
    virtual void speek()
    {
        std::cout << "Person " << std::endl;
    }
};

class Bose : public Person
{

public:
    void speek() override
    {
        std::cout << "Bose" << std::endl;
    }
};

// int main()
// {
//     Person aa;
//     aa.speek();
//     Bose bb;
//     bb.speek();

//     Person cc = &bb;

//     std::cin.get();
// }