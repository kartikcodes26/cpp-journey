#include <iostream>
using namespace std;

class book
{
    public:
        int pages;
        int area;
        int price;
};

/*
syntax:

class derivedClass:access-specififer base-class
{
    data members;

};

*/
class notebook:public book
{
    public:
        int size;
};

int main()
{
    notebook n1;
    n1.pages = 200;
    n1.size = 10;
    cout << n1.pages << '\n';
    cout << n1.size << '\n';
    return 0;
}