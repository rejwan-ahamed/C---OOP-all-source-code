#include <iostream>
using namespace std;

class super_hero
{
public:
    char level;
    int power;

    // default constructor or simple constructor

    super_hero()
    {
        cout << "Calling default constructor" << endl;
    }

    // parameterized constructor

    super_hero(char level, int power)
    {
        this->level = level;
        this->power = power;
    }

    // copy constructor

    // this copy constructor will use dynamic allocation
    super_hero(super_hero &custom)
    {
        this->power = custom.power;
        this->level = custom.level;
    }

    void print()
    {
        cout << this->level << endl;
        cout << this->power << endl;
    }

    ~super_hero()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    super_hero jack('A', 12);
    super_hero sumi(jack);

    sumi.print();
    super_hero *b = new super_hero;
    delete b;
    
    return 0;
}