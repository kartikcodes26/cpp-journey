#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void move(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i] == 0)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[] = {2, 3, 0, 0, 9, 8};
    move(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " , ";
    }
    return 0;
}