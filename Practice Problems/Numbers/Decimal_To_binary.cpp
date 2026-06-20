#include <iostream>
using namespace std;

void convert(int n)
{
    if(n == 0)
    {
        cout << 0;
        return;
    }
    
    int i = 0;
    while (n != 0)
    {
        temp[i] = n % 2;
        n = n / 2;
        i++;
    }

    temp[i] = n;

    int size = sizeof(temp) / sizeof(temp[0]);
    for(int j = i-1;j>=0 ;j--)
    {
        cout << temp[j] << " ";
    }
}

int main()
{
    convert(5);
    return 0;
}