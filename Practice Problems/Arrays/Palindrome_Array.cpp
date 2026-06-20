#include <iostream>
using namespace std;
bool palindrome(const int arr[], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        if(arr[i] != arr[size - 1 - i])
        {
            return false;
        }
    }
    return true;

}
int main()
{
    const int size = 5;
    int arr[size] = {1,2,10,2,1};
    if(palindrome(arr, size))
    {
        cout << "The array is palindrome !";
    }
    else
    {
        cout << "The array is not a palindrome !";
    }
    return 0;
}