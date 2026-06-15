#include <iostream>
#include <string>
using namespace std;

void largestWord(string str)
{
    int counter = 0;
    int largest = INT_MIN;
    int largestIndex;
    
    int i = 0;
    while (i < str.size())
    {

        if (str[i] == ' ')
        {
            if (counter > largest)
            {
                largest = counter;
                largestIndex = i - largest;
                counter = 0;
            }
        }
        else
        {
            counter++;
        }
        i++;
    }

    if (counter > largest)
    {
        largest = counter;
        largestIndex = i - largest;
        counter = 0;
    }


    for (int i = largestIndex; i < largestIndex + largest; i++)
    {
        cout << str[i];
    }
}
int main()
{
    string s = "I love cpp programming";
    largestWord(s);
    return 0;
}