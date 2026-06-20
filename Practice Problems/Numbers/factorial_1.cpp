#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n < 0)
    {
        cout << "Factorial of negative numbers dosen't exist \n";
        return -1;
    }
    else if(n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}
int main()
{
    cout << factorial(-5);
    return 0;
}   