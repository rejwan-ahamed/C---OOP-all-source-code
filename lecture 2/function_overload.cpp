#include <iostream>
using namespace std;

// function overload in polymorphism

class test
{
public:
    void say_my_name()
    {
        cout << "Your name is Rejwan" << endl;
    }

    void say_my_name(string name)
    {
        cout << "Your name is " << name << endl;
    }
};

int main()
{
    test obj1;
    obj1.say_my_name("Rejwan Ahamed");
    obj1.say_my_name();
    return 0;
}