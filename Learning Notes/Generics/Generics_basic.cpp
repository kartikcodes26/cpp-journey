#include <iostream>
using namespace std;


// Instatiations : Generation of overloaded functions
template <typename T>
T cube(T num)
{
    return num * num * num;
}

// Abbreviated function template : auto keyword
auto multiply(auto num1, auto num2)
{
    return num1 * num2;
}

int main()
{
    cout << cube(3) << '\n';
    cout << cube(3.7) << '\n';
    cout << cube(1.2f) << '\n';
    cout << multiply(1.1, 5.0) << '\n';

    /* ------ Type casting using angle brackets ---------- */

    cout << cube<float>(4) << '\n';
    cout << cube<float>(4.12) << '\n';
    return 0;
}