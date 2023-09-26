#include <iostream>
using namespace std;

class super_hero
{
public:
    char level;
    int power;
};

int main()
{
    // static allocation

    super_hero rejwan;
    rejwan.level = 'A';

    // dynamic allocation

    super_hero *b = new super_hero;

    b->level = 'B';

    cout <<"Static level: "<<rejwan.level<<endl;
    // cout <<"Dynamic level: "<<(*b).level<<endl;
    cout <<"Dynamic level: "<<b->level<<endl;

    return 0;
}