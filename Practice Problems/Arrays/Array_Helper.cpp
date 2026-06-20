#include <iostream>
using namespace std;

int largestNo(int arr[], int size)
{
    int temp = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}

int smallestNo(int arr[], int size)
{
    int temp = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}

double mean(int arr[], int size)
{
    double result{};
    for(int i = 0; i < size; i++)
    {
        result += arr[i];
    }
    return (result/size);
}

double median(int arr[], int size)
{
    if(size % 2 != 0)
    {
        return arr[(size/2)];
    }
    else
    {
        return (arr[(size/2)] + arr[(size/2 + 1)])/2;
    }
}
int main()
{
    int arr[5];
    cout << "Enter the array elements : ";
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "\n Average : " << mean(arr, 5) << '\n';
    cout << "\n Largest No : " << largestNo(arr, 5) << '\n';
    cout << "\n Smallest No : " << smallestNo(arr, 5) << '\n';
    cout << "\n median : " << median(arr, 5) << '\n';


    return 0;
}