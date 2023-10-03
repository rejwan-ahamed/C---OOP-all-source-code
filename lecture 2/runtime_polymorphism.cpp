#include <iostream>
using namespace std;

class animal
{
public:
    void speak()
    {
        cout << "speaking" << endl;
    };
};

class dog : public animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    dog bob;
    bob.speak();

    return 0;
}