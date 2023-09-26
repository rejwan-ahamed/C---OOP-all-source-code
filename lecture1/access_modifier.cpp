#include <iostream>
// #include "hero.cpp"
using namespace std;

// we are making a class. It's a user define data type

class hero
{
    //  it's properties
    // **** access modifier. here we are going to use public access modifier
    // here health is a private access modifier. we can access it only in the class
    int health;

public:
    // here level and name are public access modifier because we can access it from any where
    char level;
    char name[100];
    int power;

    // here we are going to use health to print inside a function. because it is a private access modifier

    void print()
    {
        cout << "The size of health is :" << sizeof(health);
    };
};

int main()
{

    // here we going to use the class
    // init a class

    hero one_punch_man;

    one_punch_man.power = 920;

    cout << "The size of the class is :" << sizeof(one_punch_man.level) << endl;
    cout << "Power is :" << one_punch_man.power << endl;
    cout << "Test output";

    return 0;
}