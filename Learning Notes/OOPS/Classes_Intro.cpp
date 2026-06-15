#include <iostream>
using namespace std;

class laptop
{
public:
    // constructor : Always runs when an instance i.e. an object is created
    laptop(int m_ram)
    {
        this->m_ram = m_ram;  //'this' stores the address of members of current object
        cout << "Congrats on your new machine \n";
    }

    // Destructor : Always runs when an instance i.e. an object gets out of scope
    ~laptop()
    {
        cout << "Sorry for the loss of your machine \n";
    }

public:
    int m_ram; // m_name is a standard convection
    void printspecs()
    {
        cout << "Ram : " << m_ram << '\n';
    }
};
int main()
{
    // laptop asus(16);
    // asus.printspecs();
    laptop *macbook = new laptop(8); // i dont understand this
    /*
    1. Create laptop object somewhere in heap memory
    2. Get its address
    3. Store address inside macbook
    */

    macbook -> printspecs();  //Both do the same task
    (*macbook).printspecs();
    delete macbook;               // Now calls destructor
    
    return 0;
}