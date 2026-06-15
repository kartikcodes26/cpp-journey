#include <iostream>
#include <string>
using namespace std;

bool isvowel(const char &a)
{
    const char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++)
    {
        if (a == vowels[i])
        {
            return true;
        }
    }
    return false;
}

void stats(const string &str)
{
    int vowels = 0;
    int consonants = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isvowel(str[i]))
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    cout << "Vowel : " << vowels << '\n';
    cout << "Consonant : " << consonants << '\n';
}

int main()
{

    string s = "ab";
    stats(s);
    return 0;
}