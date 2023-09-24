#include <iostream>
using namespace std;

// object

class super_hero
{
public:
    int power;
    char level;

    // default constructor
    super_hero()
    {
        cout << "Default constructor called" << endl;
    }

    // destructor
    ~super_hero()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // static object
    super_hero rahi;

    // dynamic object
    super_hero *b = new super_hero;
    // we need to call manually destructor for the dynamic object
    delete b;

    return 0;
}