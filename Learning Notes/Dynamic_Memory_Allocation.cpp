#include <iostream>
using namespace std;

int main()
{
    int* p = new int;
    // Stack memory allocation + Heap memory allocation
    // total bytes consumed = 8 + 4 = 12
    // Stack memory allocation = Static allocation
    // Heap memory allocation = Dynamic allocation

    //Array allocation
    int *arr = new int[5];
    //Bytes consumed = 8 + 5 * 4 = 28 bytes


    //Variable Array
    int n;
    int *vArr = new int[n];



    return 0;
}