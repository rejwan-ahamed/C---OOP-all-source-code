#include <iostream>
using namespace std;

class human
{
public:
    string name;
    int age;
    int height;
    int weight;
};

// inheritance of the class in to another class

class male : public human
{
public:
    string color;
    int money;
};

int main()
{

    // accessing data from inherited object

    male aplha1;

    aplha1.name = "Rezwan";
    aplha1.color = "white";
    aplha1.money = 123333121;
    aplha1.height = 20;

    cout << "appha1 name: " << aplha1.name << endl;
    cout << "appha1 color: " << aplha1.color << endl;
    cout << "appha1 money: " << aplha1.money << endl;
    cout << "appha1 height: " << aplha1.height << endl;

    human aplha2;

    cout << endl;

    aplha2.name = "Test human 432";
    aplha2.age = 22;
    cout << "appha2 name: " << aplha2.name << endl;
    cout << "appha2 age: " << aplha2.age << endl;

    return 0;
}