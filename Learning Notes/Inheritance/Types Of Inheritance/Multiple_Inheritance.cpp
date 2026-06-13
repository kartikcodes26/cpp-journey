#include <iostream>
using namespace std;

class parentClass1
{
public:
    int x;
    int y;
    int z;

    void func()
    {
        cout << "c1" << '\n';
    }
};

class parentClass2
{
public:
    int a;
    void func()
    {
        cout << "c2" << '\n';
    }
};

class childClass : public parentClass1, public parentClass2
{
};

int main()
{
    childClass c1;
    c1.x = 20;
    c1.a = 40;

    //Function Ambiguity can be solved by using score resolution operator as below
    c1.parentClass1 :: func();
    c1.parentClass2 :: func();
    return 0;
}