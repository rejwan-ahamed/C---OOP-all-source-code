#include <iostream>
using namespace std;

class super_hero
{
public:
    int power;
    char level;

    super_hero(int power, char level)
    {
        cout << "Default constructor called " << endl;
        this->power = power;
        this->level = level;
    }

    // my custom constructor

    super_hero(super_hero &custom)
    {
        cout << "Copy constructor called" << endl;
        this->power = custom.power;
        this->level = custom.level;
    }

    void print()
    {
        cout << "Power: " << this->power << endl;
        cout << "level: " << this->level << endl;
    }
};

int main()
{
    super_hero r(67, 'A');
    r.print();

    // copy constructor
    super_hero s(r);
    s.print();

    super_hero delta(89, 'A');
    delta.print();

    super_hero alpha(delta);
    alpha.print();

    return 0;
}