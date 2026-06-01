#include <iostream>
using namespace std;

void func(const int (&arr)[10]) //passing by reference and safe by making it read only
{

}
int main()
{
    int arr[10];
    func(arr);
    return 0;
}