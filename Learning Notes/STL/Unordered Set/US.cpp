#include <iostream>
#include <unordered_set>
using namespace std;

void printSet(const unordered_set<int> &d1)
{
    cout << "Set : ";
    for (const auto &element : d1)
    {
        cout << element << ' ';
    }
    cout << '\n';
}

void eraseElement(unordered_set<int> &s ,int key)
{
    if(s.erase(key) == 1)  //returns the number of elements removed
    {
        cout << "Successfully removed " << key << '\n';
    }
    else
    {
        cout << "The key does not exist" << '\n';
    }
}

int main()
{
    unordered_set<int> u1{1, 2, 4, 7, 9, 0, 11, 12, 13, 14};

    cout << u1.bucket_count() << '\n';
    cout << u1.load_factor() << '\n'; // Prints the no of element's per bucket

    printSet(u1);

    for (int i = 0; i < u1.size(); i++)
    {
        cout << u1.bucket_size(i) << ' ';
    }
    cout << '\n';

    /* ------------ Merge ------------- */

    unordered_set<int> s1 = {1, 2, 3};
    unordered_set<int> s2 = {4, 5, 6, 7, 8, 9};

    s1.merge(s2); // Moving the comtents of s2 into s1

    printSet(s1);
    printSet(s2); // Now empty as all the elements are moved not copied

    eraseElement(s1, 3);
    eraseElement(s1, 10);
    return 0;
}