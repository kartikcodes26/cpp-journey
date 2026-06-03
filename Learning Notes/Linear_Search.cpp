#include <iostream>
using namespace std;

// Basic Linear Search
void search(int arr[], int size, int num)
{
    bool foundOnce = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num && foundOnce == false)
        {
            cout << num << " found at index " << i << '\n';
            foundOnce = true;
        }
        else if (arr[i] == num)  //No need of foundOnce true argument
        {
            cout << num << " also found at index " << i << '\n';
            foundOnce = true;
        }
    }
    if(!foundOnce)
    {
        cout << num << " was not found in the array :( \n";
    }
}
int main()
{
    int arr[] = {3, 1, 5, 7, 9, 0, 1};
    const int size = sizeof(arr) / sizeof(arr[0]);

    search(arr, size, 1);

    return 0;
}