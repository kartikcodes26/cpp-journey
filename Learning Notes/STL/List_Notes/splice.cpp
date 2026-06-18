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
    list<int> l1 = {1, 2, 3};
    list<int> l2 = {4, 5, 6, 7, 8, 9};

    auto it = l2.begin();
    advance(it, 3);

    // syntax : splice(og_list_pos, donor_list, range1(iter), range2(iter));
    l1.splice(l1.end(), l2, l2.begin(), it);

    printList(l1);

    return 0;
}