#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Rotate array left n times
void rotateArraryLeft(int arr[], int n, int size)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[] = {5, 2, 3, 4, 5, 7};
    const int size = sizeof(arr) / sizeof(arr[0]);
    rotateArraryLeft(arr, 6, size);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " , ";
    }
    return 0;
}