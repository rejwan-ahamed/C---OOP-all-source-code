#include <iostream>
using namespace std;

class super_hero
{
public:
    int power;
    char level;

    // simple constructor
    super_hero()
    {
        cout << "Simple constructor" << endl;
    }

    // parameterized constructor
    super_hero(int power, char level)
    {
        cout << "parameterized constructor called " << endl;
        this->power = power;
        this->level = level;
    }

    // copy constructor
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
    // parameterized constructor
    super_hero r(67, 'A');
    r.print();

    // copy constructor
    super_hero s(r);
    s.print();

    // parameterized constructor
    super_hero delta(89, 'A');
    delta.print();

    // copy constructor
    super_hero alpha(delta);
    alpha.print();

    return 0;
}