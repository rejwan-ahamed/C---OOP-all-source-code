#include <iostream>
using namespace std;

class A
{
public:
    void callA()
    {
        cout << "calling A" << endl;
    }
};

class B : public A
{
public:
    void callB()
    {
        cout << "calling B" << endl;
    }
};

class C : public A
{
public:
    void callC()
    {
        cout << "calling C" << endl;
    }
};

int main()
{
    A object1;
    B object2;
    C object3;

    object1.callA();
    object2.callA();
    object2.callB();
    object3.callA();
    object3.callC();

    return 0;
}