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
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void checkMissing(int arr[], int size)
{
    int expectedNo = arr[0];
    int i = 0;
    while(i < size)
    {
        if(arr[i] != expectedNo)
        {
            cout << expectedNo << " , ";
            
        }
        else
        {
            i++;
        }
        expectedNo++;
    }
}
int main()
{
    int arr[] = {1,2,5,9};
    const int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    checkMissing(arr, size);
    return 0;
}