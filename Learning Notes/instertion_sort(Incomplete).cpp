#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//insertion sort not complete TBD
void sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        temp = arr[i];
        for (int j = i - 1; j >= 0; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
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