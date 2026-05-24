#include <iostream>
using namespace std;

int extractDigit(int num)
{
    return abs(num) % 10;  
}

int reverseNum(int num)
{
    int temp = 0;
    while(num != 0)
    {
        temp = temp * 10 + extractDigit(num);
        num /= 10;
    }
    return temp;
}

int main()
{
    int num{};
    cout << "Enter a number : ";
    cin >> num;
    int temp = abs(num);

    if(temp == reverseNum(num))
    {
        cout << "Palindrome !!";
    }
    else
    {
        cout << "Not Palindrome :(";
    }
    return 0;
}