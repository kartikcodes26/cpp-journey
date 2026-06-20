#include <iostream>
using namespace std;

int pow(int num, int power)
{
    if(power == 0)
    {
        return 1;
    }
    return num * pow(num, power - 1);
}
int main()
{
    cout << pow(2, 3);
    return 0;
}