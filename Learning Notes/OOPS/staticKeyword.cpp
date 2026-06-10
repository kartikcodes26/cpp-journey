#include <iostream>
using namespace std;

class bottle
{
    public:
        static bool hasCap;
};

bool bottle::hasCap = true;  // This is a global data member for the class that is shared among all the objects. It belongs to the particular class as a whole

// Useful for functionalities such as Time Remaining, passing marks, Subjects etc
int main()
{
    cout << bottle::hasCap << '\n';

    bottle dmartBottle;

    cout << dmartBottle.hasCap << '\n'; //Not recommended

    //we can also change it and it will change it for everyone

    bottle b1;
    bottle b2;

    b2.hasCap = false;

    cout << b1.hasCap << '\n';
    return 0;
}