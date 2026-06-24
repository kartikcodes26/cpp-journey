#include <iostream>
using namespace std;

template<typename T, int size = 8>
void foo()
{
    for(int i = 1; i <= size; i++)
    {
        cout << i << '\n';
    }
}
int main()
{
    foo<int> ();
    return 0;
}