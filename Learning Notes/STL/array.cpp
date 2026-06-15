#include <iostream>
#include <string>
#include <array>
using namespace std;

void arraySize(array<int, 5> arr)
{
    cout << arr.size();
}
/*
Benefit of std::array over C-Style arrays:
1) They dont decay into pointer when passed into function
2) Has useful member functions
3) Stack Allocated Memory
*/

int main()
{
    array<int, 5> arr;
    // arr.fill(0);
    cout << arr.at(1) << '\n';
    arraySize(arr) << '\n';


    for(const int &element: arr)
    {
        cout << element << ' ';
    }

    string s = "abcde";
    s.to_array();
    return 0;
}