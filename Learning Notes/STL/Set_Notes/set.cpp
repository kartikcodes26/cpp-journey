#include <iostream>
#include <set>
using namespace std;

/*
Set:
1) Set is an ordered data structre involving only unique elements
2) Data becomes automatically sorted
3) Internally, set is usually implemented using a balanced binary search tree (Red-Black Tree)
4) Searching, insertion, and deletion take O(log n) time
5) Elements can be accessed only through iterators (no indexing like arr[0])
*/


int main()
{
    set<int> s1;
    s1.insert(2);
    s1.insert(3);
    s1.insert(2); // Already inserted, dosent get inserted again

    cout << s1.count(2) << '\n';   //Returns the number of times an element occurs (either 1 or 0 in case of a set)
    //cout << s1.contains(3) << '\n'; //returns a boolean

    auto it = s1.find(2); // Returns an iterator

    if(it != s1.end())
    {
        cout << "Found : " << *it << '\n';
    }
    else
    {
        cout << "Not found \n";
    }

    s1.erase(3);



    /* ========= Printing Range of Elements ========= */

    set<int> s2 = {1,2,3,7,8,9,10,11};
    auto lower = s2.lower_bound(2); // returns an iterator
    auto higher = s2.upper_bound(7);

    for(auto it = lower; it != higher; ++it)
    {
        cout << *it << '\n';
    }

    s2.erase(lower, higher); // erase a range

    
    return 0;
}