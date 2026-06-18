#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printvector(const vector<int> &vec)
{
    for (const auto &element : vec)
    {
        cout << element << ' ';
    }
    cout << '\n';
}

void DeleteDup(vector<int> &vec)
{
    int index = 0;
    int size = vec.size();

    for (int i = 1; i < size; i++)
    { 
        if (vec[i] != vec[index])
        {
            index++;
            vec[index] = vec[i];
        }
    }
    vec.resize(index + 1);
}
int main()
{
    vector<int> vec1 = {3, 1, 2, 9, 0, 2, 3, 5, 1, 0};
    sort(vec1.begin(), vec1.end());
    DeleteDup(vec1);
    printvector(vec1);
    return 0;
}