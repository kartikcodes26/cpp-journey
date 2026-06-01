#include <iostream>
#include <windows.h>
using namespace std;

int countdown(int n)
{
    if(n == 0)
    {
        Sleep(1000);
        cout << "Boom";
        Beep(2000, 5000);
        return 0;
    }

    Sleep(1000);
    Beep(2000, 500);
    cout << n << '\n';
    return countdown(n - 1);
}
int main()
{
    countdown(5);
    return 0;
}