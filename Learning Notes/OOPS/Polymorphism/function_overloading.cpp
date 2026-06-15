#include <iostream>
using namespace std;

void fun1()
{
    cout << "This is from func1 \n";
}

void fun2(int n)
{
    cout << "This is from func2 \n";
}

// int fun1()
// {
//     // Not allowed as functions differing in just return types cannot be overloaded
// }

void fun3(int i, int j, int k)
{
    cout << "This is from fun3 \n";
}

// Datatype of the argument can be different
void fun4(double n)
{
    cout << "This is from fun4 \n";
}

// Default argument
int fun5(int a, int b, int c = 0, int d = 0)
{
    return a + b + c + d;
}

int main()
{
    cout << fun5(1, 2); // if c and d are not provided they default to 0
    return 0;
}