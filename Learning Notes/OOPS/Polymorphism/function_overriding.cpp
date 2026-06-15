#include <iostream>
using namespace std;

class human
{
    public:
        void speak()
        {
            cout << "Speaking \n";
        }
};

class dog:public human
{
    public:
        void speak()
        {
            cout << "Barking \n";
        }
};

/*
rules:
1) Name of the function must be same
2) Inheritance is required
*/


int main() 
{
    human h1;
    h1.speak();

    dog d1;
    d1.speak();
    return 0;
}