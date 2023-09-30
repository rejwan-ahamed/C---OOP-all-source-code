#include <iostream>
using namespace std;

class human
{
public:
    string name;
    int age;
    int height;
    int width;
};

// child class for inheritance

// syntax--> class, child class name, : , mode of inheritance, super class name

/* in protected access modifier or the mode of inheritance the child class can access the patent class properties indite the child class.
we can bypass it by using getter and setter concept.
*/

class male : protected human
{
public:
    string eye_color;
    int money;

    int get_age()
    {
        return this->age;
    }

    void set_age(int a)
    {
        this->age = a;
    }
};

int main()
{

    male harsh;
    harsh.set_age(202);
    harsh.eye_color = "green";
    cout << harsh.get_age() << endl;
    cout << harsh.eye_color << endl;

    return 0;
}