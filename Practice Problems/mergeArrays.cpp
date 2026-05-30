#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {2, 4, 1, 9, 0, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {3, 5, 6, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2];
    for(int i = 0; i < size1; i++)
    {
        merged[i] = arr1[i];
    }
   
    for(int i = size1; i < size1 + size2; i++)
    {
        merged[i] = arr2[i - size1];
    }
    for(int j = 0; j < size1+size2; j++)
    {
        cout << merged[j] << " , ";
    }

    return 0;
}