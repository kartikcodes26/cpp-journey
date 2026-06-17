#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] > vec[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5, 6};
    cout << checkSorted(vec1);
    return 0;
}