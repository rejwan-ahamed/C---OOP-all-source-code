#include <iostream>
using namespace std;

class A
{
public:
    void fun()
    {
        cout << "Calling A";
    }
};

class B
{
public:
    void fun()
    {
        cout << "Calling B";
    }
};

// multiple inheritance

class C : public A, public B
{
};

int main()
{
    C obj;
    
    // inheritance ambiguity
    obj.B::fun();

    return 0;
}