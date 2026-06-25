#include <iostream>
using namespace std;

int main()
{
    // A pointer stores the adress of another data

    int a = 10;
    int *b = &a; //b is a pointer which stores the address of a

    cout << b << '\n';

    //Dereferencing is the process of egtting the value present in the location pointed by the pointer variable
    a = 9;
    cout << *b << '\n';

    //Assigning values to dereferenced pointers

    *b = 2;
    cout << a << '\n';

    //Dereferencing just goes inside the memory adress and when the dereferenced variable is manupliated the value it points to gets manuplated
    return 0;
}