#include <iostream>
using namespace std;

class super_hero
{
public:
    int power;
    char level;

    static int time_to_complete;

    static int random()
    {
        return time_to_complete;
    }
};

int super_hero ::time_to_complete;

int main()
{
    super_hero rahi;
    rahi.time_to_complete = 30;

    cout << rahi.time_to_complete << endl;
    cout << rahi.random() << endl;

    return 0;
}