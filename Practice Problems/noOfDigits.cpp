#include <iostream>
using namespace std;

int noOfDigits(long long int num)
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
int main()
{
    long long int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Number of digits : " << noOfDigits(num);
    return 0;
}