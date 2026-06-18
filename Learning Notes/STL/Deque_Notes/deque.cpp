#include <iostream>
#include <deque>
using namespace std;


/*
Deque (Double Ended Queue) : 
1) It is like a queue where data can be added and removed from the front and back
2) Insertion at the front and back occurs at const time O(1)
3) It is like a doubly linked list
*/

// ! begin()  ---> first element
// ! end()    ---> one past the last element (NOT the last element)

void printDeque(const deque<int> &d1)
{
    cout << "================================ \n";
    for(const auto &element : d1)
    {
        cout << element << ' ';
    }
    cout << '\n';
}

int main()
{
    deque<int> deq = {1,2,3,4,5,6};

    auto it = deq.begin();
    advance(it, 3);

    deq.insert(it, 10);

    printDeque(deq);

    it = deq.begin();
    int dist = distance(it, deq.end() - 1); //Gets the distance between the current iterator and the end (refer warning)

    advance(it, dist);
    cout << *it << '\n';  //this should print the end element

    deq.push_front(5);
    deq.push_back(15);

    return 0;
}