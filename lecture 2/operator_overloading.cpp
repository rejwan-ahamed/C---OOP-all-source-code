#include <iostream>
using namespace std;

class super_class
{
public:
    int a;
    int b;

    void operator+(super_class &custom)
    {
        cout << "output is: " << this->a - custom.a << endl;
    }

    void operator*()
    {
        cout << "Hi I am a pointer" << endl;
    }

    void operator-()
    {
        cout << "Hi I am a decrement" << endl;
    }

    void operator()()
    {
        cout << "Hi I am first bracket" << endl;
    }
};

int main()
{

    super_class obj1, obj2;

    obj1.a = 4;
    obj2.a = 2;

    obj1 + obj2;

    *obj1;
    -obj1;
    obj1();

    return 0;
}