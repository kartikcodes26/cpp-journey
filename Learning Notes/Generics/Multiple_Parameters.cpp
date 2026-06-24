#include <iostream>
#include <TYPEINFO> 
using namespace std;

template<typename t1, typename t2>
void foo(t1 inp1, t2 inp2)
{
    cout << typeid(inp1).name() << '\n';
    cout << typeid(inp2).name() << '\n';
}

template<typename t1, size_t N>
void foo2(t1 inp1)
{
    for(int i = 0; i < N; i++)
    {
        cout << typeid(inp1).name() << '\n';
    }
}


int main()
{
    foo<char, double>('z', 3.14);
    foo2<char, 5>('a');
    return 0;
}