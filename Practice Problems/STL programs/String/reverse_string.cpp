#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str)
{
    for(int i = 0; i < str.size()/2; i++)
    {
        swap(str[i], str[str.size() - i -1]);
    }
}

int main()
{
    string name = "Kartik";
    //reverseString(name);
    name.reverse();
    cout << name << '\n';

    
    return 0;
}