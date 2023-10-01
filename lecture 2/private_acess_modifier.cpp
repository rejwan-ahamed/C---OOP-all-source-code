#include <iostream>
using namespace std;

class human
{
public:
    char name;
    int age;
};

class male : private human
{
public:
    male()
    {

        cout << name << enget_agedl;
        cout << "testing";
    }
    int get_age()
    {
        return this->age;
    }
};

int main()
{
    male azer;
    cout<<azer.get_age();

    return 0;
}