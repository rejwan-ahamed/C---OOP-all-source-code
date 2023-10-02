#include <iostream>
using namespace std;

class B
{
public:
    int a;
    int b;

    void operator+(B &obj)
    {
        int value1 = this->a; // curent object
        int value2 = obj.a;

        cout << "output is: " << value2 - value1 << endl;
        cout << "Hello Rejwan Ahamed" << endl;
    }

    void operator()()
    {
        cout << "Testing the overload operator" << endl;
    }
};

int main()
{

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    obj1();

    return 0;
}