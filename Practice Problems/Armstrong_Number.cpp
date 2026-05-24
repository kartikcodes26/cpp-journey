#include <iostream>
using namespace std;

int numberOfDigits(int num)
{
    num = abs(num);
    int count{};
    if(num == 0)
    {
        return 1;
    }
    while(num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int power(int digit, int pow)
{
    int result = 1;
    for(int i = 1; i <= pow; i++)
    {
        result *= digit;
    }
    return result;
}

int extractDigit(int num, int count)
{
    int digit = num % 10;
    return power(digit, count);  //return digit to the power number of digits
}

void updateNumber(int &num)
{
    num = num / 10;  //Update the number to extract the next digit
}


int main()
{
    int num{};
    cout << "Enter a number : ";
    cin >> num;

    const int n = numberOfDigits(num);

    int temp = num; // For comparison
    int result{};

    while(num != 0)
    {
        result += (extractDigit(num, n));
        updateNumber(num);
    }

    if(result == temp)
    {
        cout << temp << " is an Armstrong Number" << endl;
    }
    else
    {
        cout << temp << " is not an Armstrong Number" << endl;
    }

    return 0;
}