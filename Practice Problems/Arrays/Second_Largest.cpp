#include <iostream>
#include <CLIMITS>
using namespace std;

int largestNo(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}

int secondLargest(int arr[], int size)
{
    int largest = largestNo(arr, size);
    int sLargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > sLargest && arr[i] != largest)
        {
            sLargest = arr[i];
            cout << sLargest << '\n';
        }
    }
    return sLargest;
}

int main()
{
    int arr[] = {5, 3, 4, 2, 6};
    cout << "Second Largest : " << secondLargest(arr, 5);
    return 0;
}