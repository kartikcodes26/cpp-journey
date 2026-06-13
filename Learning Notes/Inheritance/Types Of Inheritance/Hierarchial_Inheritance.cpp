#include <iostream>
using namespace std;

class parentClass
{
    public:
        int x;
        int y;
        int z;
};

class childClass1:public parentClass 
{   
    public:
        int a;
};

class childClass2:public parentClass
{
    public:
        int b;
};

int main()
{
    childClass1 c1;
    childClass2 c2;
    return 0;
}