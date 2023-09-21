#include <iostream>
using namespace std;

// creating a class

class suer_powers
{
public:
    int types;
    int power;

    // its a constructor
    // property of constructor are
    // 1. no return type
    // 2. invoke when object created
    // 3. no input/output

    // it's a default constructor
    suer_powers()
    {
        cout << "This is calling from user define constructor" << endl;
    };
};

int main()
{
    // creating object statically
    suer_powers ramesh;

    // creating object dynamically
    suer_powers *sp = new suer_powers;
    // another method of calling
    suer_powers *sp2 = new suer_powers();

    return 0;
}