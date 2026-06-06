#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << '\n';
}

void bubblesort(int arr[], int size)
{
    int comparisons = 0;
    int swaps = 0;
    for (int i = 0; i < size - 1; i++)
    {
        cout << "step " << i << " : ";
        printArray(arr, size);
        for (int j = 0; j < size - i - 1; j++)
        {
            
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                cout << "step " << j << " : ";
                printArray(arr, size);
                swaps++;
            }
            comparisons++;
        }
    }
    cout << "\n\nTotal Comparisons : " << comparisons << '\n';
    cout << "Total swaps : " << swaps << '\n';
}


int main()
{
    int arr[] = {6,4,1,9,0,7};
    const int size = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, size);
    return 0;
}