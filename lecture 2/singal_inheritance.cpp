#include <iostream>
using namespace std;

class animal
{
public:
    int height;
    string color;

    void speaking()
    {
        cout << "Speaking" << endl;
    }
};

class dog : public animal
{
};

int main()
{
    dog hemal;
    hemal.speaking();

    return 0;
}