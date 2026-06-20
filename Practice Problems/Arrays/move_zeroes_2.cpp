#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[] = {5, 9, 0, 2, 1, 0, 1, 0, 0, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}       