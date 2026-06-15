#include <iostream>
using namespace std;

void bubblesort(string &str)
{
    for (int i = 0; i < str.size() -1 ; i++)
    {
        for (int j = 0; j < str.size() - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                swap(str[j], str[j + 1]);
            }
        }
    }
}

bool isAnagram(string str1, string str2)
{
    if(str1.size() != str2.size())
    {
        cout << "Not Anagram";
        return false;
    }
    bubblesort(str1);
    bubblesort(str2);
    if(str1 == str2)
    {
        cout << "Anagram";
        return true;
    }
    else
    {
        cout << "Not Anagram";
        return false;
    }
}


int main()
{
    isAnagram("kartik", "kctrak");
    return 0;
}