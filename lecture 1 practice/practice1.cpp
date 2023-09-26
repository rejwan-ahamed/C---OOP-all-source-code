#include <iostream>

using namespace std;

// creating a class

class super_hero
{
    // private access modifier
    char level;

    // public access modifier
public:
    int power;
    int mission_complete;

    // we can access the private access modifier by using getter and setter

    // set level

    void set_level(char a)
    {
        this->level = a;
    }

    // get level

    char get_level()
    {
        return this->level;
    }
};
int main()
{
    // creating an object

    super_hero rejwan;

    rejwan.power = 83;
    rejwan.mission_complete = 22;

    // printing the output

    cout << "power: " << rejwan.power << endl;
    cout << "mission complete: " << rejwan.mission_complete << endl;

    cout << endl;

    // setting and getting private modifier data

    // set data
    char level = 'A';

    rejwan.set_level(level);

    // get data
    cout <<"level: "<< rejwan.get_level() << endl;
}