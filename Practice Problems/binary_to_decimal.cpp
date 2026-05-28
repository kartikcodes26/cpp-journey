#include <iostream>
using namespace std;

int power(int digit, int pow)
{
    int result = 1;
    for(int i = 1; i <= pow; i++)
    {
        result *= digit;
    }
    return result;
}

int convert(int arr[], int size)
{
    if (size <= 0)
    {
        return 0;
    }

    int result = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] !=0 && arr[i]!=1)
        {
            cout << "Invalid bit \n";
            return -1;
        }
        result += arr[i] * power(2, size - i -1);
    }

    return result;
    
}
int main()
{
    int bin[] = {1, 1, 5, 1, 0};
    cout << convert(bin, 5);
    return 0;
}