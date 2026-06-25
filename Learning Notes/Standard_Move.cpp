#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Foxy";
    string newName;
    newName = move(name); // Moves the contents of name into new name

    cout << "Name : " << name << '\n'; // name is now empty
    cout << "New name : " << newName << '\n';

    // Name still existis in some Valid form
    // It maybe contains a null pointer
    return 0;
}