// Second Largest in one traversal

#include <iostream>
using namespace std;

int secondLargest(int arr[], int size)
{
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] != largest) 
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int main()
{
    int arr[] = {10, 5, 8};
    cout << "Second Largest : " << secondLargest(arr, 3);
    return 0;
}