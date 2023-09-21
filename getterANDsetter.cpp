#include <iostream>
using namespace std;

class superhero
{
private:
    char name[100];
    int age;

public:
    int power;
    int mission;
    // passing the private access modifier value using function

    int get_age()
    {
        return age;
    };
    void set_age(int a)
    {
        age = a;
    }
};

int main()

{
    superhero walter;
    walter.power = 35;
    cout << "The power of walter is: " << walter.power << endl;

    walter.set_age(24);
    cout << "The age is: " << walter.get_age();

    return 0;
}