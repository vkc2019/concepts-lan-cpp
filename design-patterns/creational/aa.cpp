
#include <iostream>

#include <string>

using namespace std;

struct Creature
{
    string name;
    int attack;
    int defence;
    Creature(const string &name, const int attack, const int defence) : name(name), attack(attack), defence(defence)
    {
    }
    friend std::ostream &operator<<(std::ostream &os, const Creature &obj)
    {
        return os << " name " << obj.name << " attack: " << obj.attack << " defence : " << obj.defence;
    }
};

int main()
{
    Creature gobline{"Kishore", 1, 1};
    cout << gobline << endl;
    return 0;
}