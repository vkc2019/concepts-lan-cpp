#include <iostream>

class MutableDevice
{
public:
    int x;
    mutable int y;
    MutableDevice()
    {
        x = 4;
        y = 10;
    }
    // void increaseX() const  // fails
    // {
    //     x++;
    // }
    void increaseY() const
    {
        y++;
    }
};
int main()
{
    const MutableDevice t1;
    t1.increaseY();
    std::cout << t1.y << std::endl;
    t1.y = 20;
    std::cout << t1.y << std::endl;
    return 0;
}