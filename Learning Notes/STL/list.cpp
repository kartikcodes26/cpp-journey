#include <iostream>
#include <list>
using namespace std;

void printList(const list<int> &l)
{
    cout << "==================== \n";
    for (const auto &element : l)
    {
        cout << element << " ";
    }
    cout << '\n';
}

int main()
{
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    // Syntax : insert(iterator, Value);
    l1.insert(l1.begin(), 9); // If we know the location where we want to insert, the time complexity is constant

    l1.insert(l1.end(), 10);

    printList(l1);

    /* ------ Iterators ------- */

    // ! l1[3]; ❌ Not allowed because elements are not stored continuously
    auto it = l1.begin();

    // Syntax : next(iterator, no of elements to advance);

    it = next(it, l1.size() / 2); // Advances the iterator from start to the middle

    l1.insert(it, 50); // Inserts 50 exactly at the middle

    printList(l1);

    cout << "The middle is " << *it << '\n';

    /* ---- Reverse Iterator ---- */

    for (auto it = l1.rbegin(); it != l1.rend(); ++it)
    {
        cout << *it << " ";
    }

    /* ----- Merge ----- */

    list<int> l2 = {4, 1, 9, 0};

    l1.merge(l2);

    printList(l1);
    printList(l2); // l2 becomes empty as this involves moving not copying

    return 0;
}