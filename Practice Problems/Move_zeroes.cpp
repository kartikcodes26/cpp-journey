#include <iostream>
using namespace std;


int main()
{
    int arr[] = {5, 9, 0, 2, 1, 0, 1, 0, 0, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n] = {};

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    while (j < n)
    {
        temp[j] = 0;
        j++;
    }

    for (int j = 0; j < n; j++)
    {
        cout << temp[j] << " ";
    }
    return 0;
}