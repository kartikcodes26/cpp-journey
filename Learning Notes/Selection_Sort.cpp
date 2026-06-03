#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int arr[], int size)
{
    int minindex;
    for (int i = 0; i < size - 1; i++)
    {
        minindex = i;
        for (int j = i; j < size; j++)
        {
            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}
int main()
{
    int arr[] = {5, 6, 1, 3, 0, 9};

    const int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}