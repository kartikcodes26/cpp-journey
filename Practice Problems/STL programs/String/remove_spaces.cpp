#include <iostream>
#include <string>
using namespace std;


void removeSpace(string &str)
{
    for (int i = 0; i < str.size(); )
    {
        if (str[i] == ' ')
        {
            str.erase(i, 1);
        }
        else
        {
            i++;  //Important, as deleting already brings the next character to the pointer
        }
    }
}

int main()
{
    string line = "Hello i am coder";
    removeSpace(line);
    cout << line;
    return 0;
}