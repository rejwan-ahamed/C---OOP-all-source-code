#include <iostream>
using namespace std;

class super_hero
{
public:
    char *name;
    int power;
    char level;

    // default constructor. default constructor all use shallow copy method
    super_hero()
    {
        name = new char[100];
        cout << "This is default constructor" << endl;
    }

    void set_name(char name[])
    {
        this->name = name;
    }
};

int main()
{

    super_hero rahi;
    rahi.power = 98;
    char name[10] = "Rejwan";
    rahi.set_name(name);
    rahi.level = 'A';

    // printing the object data
    cout << rahi.name << endl;
    cout << rahi.power << endl;
    cout << rahi.level << endl;

    cout << endl;

    // copy the object to another object. *** this will be the shallow copy
    super_hero raisa(rahi);
    cout << "this is shallow copy output:" << endl;
    cout << "copy output name : " << raisa.name << endl;
    cout << "copy output power : " << raisa.power << endl;
    cout << "copy output level: " << raisa.level << endl;

    rahi.name[0] = 'P';

    cout << endl;
    // main object output
    cout << "main object output: " << rahi.name << endl;
    cout << "shallow copy object output: " << raisa.name << endl;

    return 0;
}