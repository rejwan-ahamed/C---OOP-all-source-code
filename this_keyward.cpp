#include <iostream>
using namespace std;

// creating a class

class suer_powers
{
public:
    int types;
    int power;

    // it's a default constructor
    suer_powers(int power)
    {
        // (*this).power = power;
        this->power = power;
        cout << "this: " << this << endl;
        cout << "This is calling from user define constructor: " << power << endl;
    };
};

int main()
{
    // creating object statically
    suer_powers ramesh(301);

    // another method of calling
    suer_powers *sp2 = new suer_powers(20);

    cout << ramesh.power << endl;
    cout << sp2->power;

    return 0;
}