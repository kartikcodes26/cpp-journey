#include <iostream>
#include <array>      // std::array
#include <iterator>   // begin(), end()
#include <numeric>    // iota()
#include <algorithm>  // fill()

using namespace std;

int main()
{
    /*
    =========================================
            C++ STL ARRAY NOTES
    =========================================

    std::array:
    - Fixed-size array from STL
    - Safer than raw arrays
    - Supports STL algorithms
    - Provides utility functions:
        size(), at(), begin(), end()

    Syntax:
        array<dataType, size> name;

    Example:
        array<int,100> arr1;
    */

    // Create STL array of size 100
    array<int,100> arr1;


    /*
    -----------------------------------------
    Fill array with consecutive values
    -----------------------------------------

    iota(start, end, starting_value)

    Fills array with increasing values.

    Example:
        iota(begin(arr1), end(arr1), 0);

    Result:
        {0,1,2,3,4,5,...99}
    */

    iota(begin(arr1), end(arr1), 0);


    /*
    -----------------------------------------
    Element Access
    -----------------------------------------

    arr1[index]
        - Fast access
        - No bounds checking

    arr1.at(index)
        - Bounds checking enabled
        - Throws exception if index invalid
    */

    cout << "Element at index 5: "
         << arr1.at(5)
         << "\n\n";


    /*
    -----------------------------------------
    Range-Based Loop
    -----------------------------------------

    Copies each element into variable
    */

    cout << "Range loop:\n";

    for(int element : arr1)
    {
        cout << element << " ";
    }


    /*
    -----------------------------------------
    auto keyword
    -----------------------------------------

    Compiler automatically detects datatype
    */

    cout << "\n\nUsing auto:\n";

    for(auto element : arr1)
    {
        cout << element << " ";
    }


    /*
    -----------------------------------------
    auto&
    -----------------------------------------

    Uses reference:
    - Avoids copying
    - Better performance
    - Can modify original values
    */

    cout << "\n\nUsing auto&:\n";

    for(auto& element : arr1)
    {
        cout << element << " ";
    }


    /*
    -----------------------------------------
    fill()
    -----------------------------------------

    fill(start,end,value)

    Replaces every element with value
    */

    fill(begin(arr1), end(arr1), 9);

    cout << "\n\nAfter fill():\n";

    for(auto element : arr1)
    {
        cout << element << " ";
    }

    return 0;
}