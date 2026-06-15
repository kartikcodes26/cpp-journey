#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {3, 1, 4, 5, 6};

    cout << vec.at(3) << '\n'; // With bounds checking
    cout << vec[5] << '\n';    // No bounds checking
    cout << vec.front() << "...." << vec.back() << '\n';

    cout << vec.empty() << '\n';
    cout << vec.size() << '\n';
    cout << vec.max_size() << '\n';
    vec.push_back(5);
    cout << vec.capacity() << '\n';
    vec.shrink_to_fit();

    vec.reserve(50); // Assigns a fixed size to a vector as in this case its 50 * 4 = 200 bytes
    cout << vec.capacity() << '\n';

    cout << "\n\n\n";
    for (auto element : vec)
    {
        cout << element << ' ';
    }

    for (size_t i = 0; i != vec.size(); ++i)
    {
        cout << vec.at(i) << ' ';
    }

    /* ----Another type of loop----- */
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << ' '; // Dereference because an iterator is a pointer to the data not the actual data
    }
    
    return 0;
}