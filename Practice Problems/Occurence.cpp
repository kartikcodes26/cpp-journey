#include <iostream>
using namespace std;

int occurence(int arr[], int data, int size)
{
    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == data)
        {
            counter += 1;
        }
    }
    return counter;
}
int main()
{
    int arr[] = {2, 4, 4, 6, 3, 4};
    int const size = sizeof(arr) / sizeof(arr[0]);
    cout << occurence(arr, 4, size);
    return 0;
}