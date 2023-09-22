#include <iostream>
using namespace std;

class super_hero
{
public:
    int power;
    char level;

    super_hero(int power, char level)
    {
        this->power = power;
        this->level = level;
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

    return 0;
}