#include <iostream>
using namespace std;

class parentClass
{
public:
    int x;
    int y;
    int z;
};

class childClass : public parentClass
{
public:
    int a;
};

class grandChildClass : public childClass
{
    // contails all a, x, y, z
};
int main()
{
    grandChildClass gc1;
    gc1.a = 20;
    gc1.x = 25;
    return 0;
}