#include <iostream>
using namespace std;

void reverseArray(int arr[], int size, int start, int end)
{
    int size = end - start;
    for(int i = start; i < size/2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
}

//rotaye array left by n
void rotateArrayLeft(int arr[], int n, int size)
{
    reverseArray(arr, n);
    reverseArray(arr, size - n);
}
int main()
{

    return 0;
}