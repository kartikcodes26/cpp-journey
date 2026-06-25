#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
    return a + b;
}

template<typename T>
T mul(T a, T b)
{
    return a * b;
}

int main()
{
    cout << add(2,2) << '\n';
    cout << mul(4,4) << '\n';

    int (*op) (int, int);  // Function pointer, signatures should match
    op = add;

    cout << op(2,3) << '\n';
    op = mul;
    cout << op(9,3) << '\n';
    return 0;
}