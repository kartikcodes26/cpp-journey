#include <iostream>
#include <map>
#include <string>
using namespace std;

void printMap(const multimap<string, int> mymap)
{
    for (const auto &element : mymap)
    {
        cout << element.first << " - " << element.second << '\n';
    }
}

int main()
{
    multimap<string, int> map1;
    map1.insert(pair<string, int>("Kartik", 17));
    map1.insert(pair<string, int>("Kartik", 18));
    map1.insert(pair<string, int>("Kartik", 19));
    map1.emplace("Aarav", 10);  // Modern and Faster
    map1.insert(pair<string, int>("Kartik", 20));
    // printMap(map1);

    auto it = map1.begin();
    advance(it, 1);

    map1.erase(it);

    // printMap(map1);
    // map1.erase("Kartik");  // Remove all keys named kartik

    // printMap(map1);


    // Print All kartik and its value
    auto range = map1.equal_range("Kartik");
    for(auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << " - " << it->second << '\n';
    }

    return 0;
}