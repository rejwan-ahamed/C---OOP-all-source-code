#include <iostream>
#include <string.h>
using namespace std;

class super_hero
{
public:
    char *name;
    int power;
    char level;

    super_hero()
    {
        this->name = new char[100];
    }

    super_hero(super_hero &custom)
    {
        char *new_name = new char[100];
        strcpy(new_name, custom.name);
        this->name = new_name;
        this->power = custom.power;
        this->level = custom.level;
    }
};

int main()
{

    super_hero babbar;

    char name[] = "Babbar";
    babbar.name = name;
    babbar.power = 36;
    babbar.level = 'C';

    cout << "name: " << babbar.name << endl;

    super_hero Tina(babbar);

    cout << "name: " << Tina.name << endl;

    babbar.name[0] = 'r';

    cout << endl;

    cout << "name: " << babbar.name << endl;
    cout << "name: " << Tina.name << endl;

    cout << endl;
    babbar.level = 'B';

    cout << "Level: " << babbar.level << endl;
    cout << "Level: " << Tina.level << endl;

    return 0;
}