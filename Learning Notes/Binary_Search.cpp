#include <iostream>
using namespace std;

void search(int arr[], int size, int num)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (num == arr[mid])
        {
            cout << "Found at " << mid;
            break;
            
        }
        else if (num < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    
}

int main()
{
    int arr[] = {3, 5, 7, 7, 9, 10, 11, 45};
    const int size = sizeof(arr) / sizeof(arr[0]);
    search(arr, size, 7);
    return 0;
}