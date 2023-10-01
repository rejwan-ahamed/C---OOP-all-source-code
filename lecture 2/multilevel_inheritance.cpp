#include <iostream>
using namespace std;

class animal
{
public:
    int age;
    string name;
};

class dog : public animal
{
public:
    string color;
    string eye_color;

    void dog_speaking()
    {
        cout << "speaking from dog" << endl;
    }
};

class cat : public dog
{
public:
    int height;
    int wight;

    void cat_speaking()
    {
        cout << "speaking from cat" << endl;
    }
};

int main()
{
    cat Halabala;

    Halabala.age = 22;
    Halabala.eye_color = "green";

    cout << "age: " << Halabala.age << endl;
    cout << "eye color: " << Halabala.eye_color << endl;

    Halabala.dog_speaking();
    Halabala.cat_speaking();

    return 0;
}