#include <iostream>
#include <string>
using namespace std;

void printstring(const string &a)
{
    cout << a << '\n';
}
int main()
{
    /* ----- Basics ----*/

    string z = "Kartik";  //Copy initialisation
    string s("Asus"); //Direct Initialisation using constructor

    cout << s.size() << '\n';
    cout << s.capacity() << '\n';  //The space allocated to the string
    //In my compiler the minimum capacity is 15

    s.shrink_to_fit();  //Requests to reduce the capacity to the size

    s+= " Laptop"; //Adds this substring to the end of main string

    printstring(s);
    cout << s.c_str() << '\n'; //c style string

    cout << z.find('a') << '\n';

    /*---- Manuplating a string -----*/

    s[0] = 'K';
    printstring(s);


    /*--- Iterating over a string ----*/

    //Method 1
    for(auto element: s)
    {
        cout << element;
    }
    cout << '\n';

    //Method 2
    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    return 0;
}