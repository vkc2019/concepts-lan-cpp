
#include <iostream>

#include <string>

using namespace std;

class Widget
{
public:
    Widget() {}
    virtual void draw() = 0;
};

class LinuxButton : public Widget
{
public:
    LinuxButton() {}
    void draw() { std::cout << "Linux Button " << std::endl; }
};

class LinuxMenu : public Widget
{
public:
    LinuxMenu() {}
    void draw() { std::cout << "Linux Menu " << std::endl; }
};

class WindowsButton : public Widget
{
public:
    WindowsButton() {}
    void draw() { std::cout << "Windows Button " << std::endl; }
};

class WindowsMenu : public Widget
{
public:
    WindowsMenu() {}
    void draw() { std::cout << "Windows Menu " << std::endl; }
};

class Factory
{
public:
    virtual Widget *create_button() = 0;
    virtual Widget *create_menu() = 0;
};

class LinuxFactory : public Factory
{
public:
    Widget *create_button()
    {
        return new LinuxButton;
    }

    Widget *create_menu()
    {
        return new LinuxMenu;
    }
};

class WindowsFactory : public Factory
{
public:
    Widget *create_button()
    {
        return new WindowsButton;
    }

    Widget *create_menu()
    {
        return new WindowsMenu;
    }
};

// Client
class Client
{

    Factory *factory;

public:
    Client(Factory *f)
    {
        factory = f;
    }

    void draw()
    {
        Widget *w[] = {factory->create_button(), factory->create_menu()};
        w[0]->draw();
        w[1]->draw();
    }
};

int main()
{
    Factory *factory;
#ifdef OS_WIN
    factory = new LinuxFactory();
#else
    factory = new WindowsFactory();
#endif
    Client *client = new Client(factory);
    client->draw();
}