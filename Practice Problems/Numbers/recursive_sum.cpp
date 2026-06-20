#include <iostream>
using namespace std;

double sum(int n)
{
    //base case
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
int main()
{
    cout << sum(5);
    return 0;
}