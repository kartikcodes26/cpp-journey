#include <iostream>
#include <string>
using namespace std;

void removedublicates(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str.size(); j++)
        {
            if (str[i] == str[j] && i != j)
            {
                str.erase(j, 1);
            }
        }
    }
}
int main()
{
    string s ="kartik";
    removedublicates(s);

    cout << s;
    return 0;
}