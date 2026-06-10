#include <iostream>
using namespace std;

class C
{
    
private:
    int x;
    int y;
    int z;

public:
    C(int i, int j, int k) : x(i), y(j), z(k)
    {
        cout << x << '\n';
        cout << y << '\n';
        cout << z << '\n';
    }
};
int main()
{
    C boj1(1, 2, 3);
    return 0;
}