#include <iostream>
using namespace std;


int main()
{
    int arr[] = {7,8,9,0,1,6,7};
    int* px = arr; //Automatically decays into &arr[0]
    //arrays are always passed around as the address of thier first element thus they are always pass by reference that can manuplate the original array

    cout << px << '\n';
    cout << *px << '\n'; //dereferencing prints the first element

    px++;

    cout << px << '\n';  //Increments by 4 as int size is 4. This is called array offset
    cout << *px << '\n'; //Shows the next element

    cout << "----------------------------------------------- \n";

    cout << *(px + 0) << '\n'; //same as *arr[0 + 0]
    cout << *(px + 1) << '\n'; //same as *arr[0 + 1]
    cout << *(px + 2) << '\n'; //same as *arr[0 + 2]
    cout << *(px + 3) << '\n'; //same as *arr[0 + 3]

    //also all of these are same as the below. as the variable array itself points to the memory location of first element of the array

    cout << *(arr + 0) << '\n'; //same as arr[0 + 0]
    cout << *(arr + 1) << '\n'; //same as arr[0 + 1]
    cout << *(arr + 2) << '\n'; //same as arr[2]
    cout << *(arr + 3) << '\n'; //same as arr[3]
    cout << *(arr + i) << '\n'; // same as arr[i]

    /*
    This is essentially moving forward the array by base_address + (sizeof(int) * offset)
    As in this case its
    0 * 4 = 0
    1 * 4 = 4
    2 * 4 = 8
    3 * 4 = 12
    4 * 4 = 16
    */

    //So the ultimate conclusion is [] is just dereferencing the array

    return 0;
}