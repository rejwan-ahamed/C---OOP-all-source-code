#include <iostream>
using namespace std;

class super_hero
{
public:
    int power;
    char level;
    static int time_to_complete;
};

// initialize a static data type (::)-> scope regulation operator
int super_hero ::time_to_complete = 5;

int main()
{
    super_hero rahi;

    rahi.power = 67;
    rahi.time_to_complete = 22;

    cout << super_hero::time_to_complete << endl;
    cout << "Calling from a object: " << rahi.time_to_complete << endl;
    return 0;
}