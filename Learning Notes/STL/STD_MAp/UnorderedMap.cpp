#include <iostream>
#include <unordered_map>
using namespace std;


void printMap(const unordered_map<string, int> mymap)
{
    for (const auto &element : mymap)
    {
        cout << element.first << " - " << element.second << '\n';
    }
}

int main()
{
    unordered_map<string, int> map1;
    map1.emplace("Vivobook", 16);
    map1.insert(pair<string, int>("Kartik", 17));
    map1.insert(pair<string, int>("Aarav", 13));
    map1.insert(pair<string, int>("Mommy", 40));
    map1.insert(pair<string, int>("Anuj", 13));
    printMap(map1);


    return 0;
}