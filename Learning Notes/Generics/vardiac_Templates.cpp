#include <iostream>
using namespace std;

template<typename T>
T sum(T start)
{
    return start;
}

template<typename T, typename... Arg>
T sum(T start, Arg... args)
{
    return start + sum(args...);
}

int main()
{
    cout << sum(1,5,10);
    return 0;
}