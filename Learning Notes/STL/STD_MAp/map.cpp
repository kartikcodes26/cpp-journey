#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;
/*

Ordered Association: std::map stores key-value pairs sorted automatically by key. It uses a self-balancing Red-Black Tree (a type of Binary Search Tree) internally, ensuring keys are always in ascending order.

Unique Keys: Each key in a map must be unique. If you try to insert a key that already exists, the insertion fails (or overwrites the value if using operator[]).

Time Complexity:
Search, Insert, Delete: $O(\log n)$ because of the tree structure.
Iteration: $O(n)$, but elements are visited in sorted key order.

Memory Overhead: It consumes more memory than std::vector or std::unordered_map because each node requires extra pointers for the tree structure (left, right, parent).

Key vs. Value Access:
Keys are immutable once inserted (you cannot change the key directly; you must erase and re-insert).
Values are mutable and can be updated easily.

Comparison with std::unordered_map:
std::map: Sorted keys, $O(\log n)$ operations.
std::unordered_map: Unsorted keys (hash table), average $O(1)$ operations, but worst-case $O(n)$.

Access Methods:
map[key]: Returns the value associated with key. If key doesn't exist, it creates a new entry with a default-constructed value.
map.at(key): Returns the value but throws an exception if the key is missing (safer for read-only access).
map.find(key): Returns an iterator to the element or end() if not found (efficient for checking existence).

*/
void printMap(const map<string, int> &mymap)
{
    for (const auto &element: mymap)
    {
        cout << element.first << " - " << element.second << '\n';
    }
}
int main()
{
    map<string, int> map1;
    map1.insert(pair<string, int>("Kartik", 17));
    map1.insert(pair<string, int>("Aarav", 13));
    map1.insert(pair<string, int>("Mommy", 40));
    map1.insert(pair<string, int>("Anuj", 13));

    cout << map1["Kartik"] << '\n';
    cout << map1.size() <<'\n'; 
    map1.erase("Anuj");
    printMap(map1);

    map<string, list<string>> map2;
    list<string> l1{"16 GB ram", "Core i5 11th gen", "512 GB SSD"};
    map2.insert(make_pair("Asus Vivobook", l1));

    for(auto &element : map2)
    {
        cout << element.first << " - ";
        for(auto &spec : element.second)
        {
            cout << spec << " , ";
        }
        cout << '\n';
    }
    return 0;
}