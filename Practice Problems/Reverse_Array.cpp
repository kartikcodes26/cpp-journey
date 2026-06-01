#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reverseArray(int arr[], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
}

int main()
{
    int arr[4] = {1, 2};
    reverseArray(arr, 2);
    for(int i = 0; i < 2;i++)
    {
        cout << arr[i] << " , ";
    }
    return 0;
}