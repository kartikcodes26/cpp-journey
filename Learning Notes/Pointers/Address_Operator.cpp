#include <iostream>
using namespace std;
void func()
{

}
int main()
{
    //Adresses are in the form of hexadeciaml numbers

    int a = 89;
    cout << &a << '\n';
    
    char b = 'z';
    cout << &b << '\n'; //C++ treats this as a string and thus does undefined behaviour

    cout << (void *) &b << '\n'; // We need to type caste it in order to print the memory address 

    //Functions also have memory locations

    cout << (void *) &func << '\n'; // we need to type cast them as well

    //Even main function has its address

    cout << (void *) &main << '\n';
    return 0;
}