#include <iostream>
#include <string.h>
using namespace std;

class super_hero
{
public:
    char *name;
    int power;
    char level;

    // if I want to create copy constructor first I need to create a default constructor the I can create custom constructor.
    // other wise the copy constructor will overwrite the default constructor and we will get an error

    // default constructor. default constructor all use shallow copy method
    super_hero()
    {
        name = new char[100];
        cout << "This is default constructor" << endl;
    }

    // my own copy constructor. we can use deep copy in custom constructor

    super_hero(super_hero &custom)
    {
        char *new_name = new char[strlen(custom.name) + 1];
        strcpy(new_name, custom.name);
        this->name = new_name;
        this->power = custom.power;
        this->level = custom.level;
    }

    void set_name(char name[])
    {
        this->name = name;
    }
};

int main()
{

    super_hero alpha1;
    char s[100] = "Rejwan";
    alpha1.name = s;
    alpha1.power = 33;
    alpha1.level = 'B';

    cout << "Default object name: " << alpha1.name << endl;
    cout << "Default object power: " << alpha1.power << endl;
    cout << "Default object level: " << alpha1.level << endl;

    // using copy constructor

    cout << endl;

    super_hero alpha2(alpha1);

    cout << "copy Default object name: " << alpha2.name << endl;
    cout << "copy Default object power: " << alpha2.power << endl;
    cout << "copy Default object level: " << alpha2.level << endl;

    // deep copy using copy constructor

    cout << endl;

    alpha1.name[0] = 'p';
    cout << "Default object name: " << alpha1.name << endl;
    cout << "copy Default object name: " << alpha2.name << endl;
    
    return 0;
}