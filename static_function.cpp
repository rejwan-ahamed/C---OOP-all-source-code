#include <iostream>
using namespace std;

class super_hero
{
public:
    int power;
    char level;
    static int time_to_complete;

    // static function
    // static function can only access static members

    static int random()
    {
        return time_to_complete;
    }
};

int super_hero::time_to_complete = 9;

int main()
{

    // calling static function with out calling object
    cout << super_hero::random() << endl;

    return 0;
}