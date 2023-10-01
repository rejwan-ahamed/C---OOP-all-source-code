#include <iostream>
using namespace std;

class animal
{
public:
    void barking()
    {
        cout << "Barking of animal" << endl;
    }
};

class human
{
public:
    void speaking()
    {
        cout << "human is speaking" << endl;
    }
};

// multiple inheritance

class hybrid : public animal, public human
{
};

int main()
{

    hybrid obj1;
    obj1.barking();
    obj1.speaking();

    return 0;
}