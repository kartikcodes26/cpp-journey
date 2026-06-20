#include <iostream>
using namespace std;

int convert(int arr[], int size)
{
    if (size <= 0)
    {
        return 0;
    }

    int result = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0 && arr[i] != 1)
        {
            cout << "Invalid bit \n";
            return -1;
        }
        result = result * 2 + arr[i];
    }

    return result;
}
int main()
{
    int bin[] = {1, 0, 1, 0};
    cout << convert(bin, 4);
    return 0;
}