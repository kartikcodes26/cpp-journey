#include <iostream>
using namespace std;

// int * returnMemory()
// {
//     int result = 41;
//     return &result;
// }

int main()
{
    // int *ptr = nullptr;
    // *ptr = 42;

    // int* arr = new int[1000];

    // int* ptr = returnMemory(); // Does not work as the local variable goes out of scope
    // //But it works for global variables

    // cout << ptr << '\n';

    // Double free or Double delete
    int *arr = new int[10];
    delete arr;
    delete arr;
    
    return 0;
}