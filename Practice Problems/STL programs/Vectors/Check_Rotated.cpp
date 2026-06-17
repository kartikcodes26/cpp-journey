#include <iostream>
#include <vector>
using namespace std;

bool checkRotated(vector<int> &vec)
{
    int notPairs = 0;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] > vec[(i + 1) % vec.size()])
        {
            notPairs++;
        }
    }

    if (notPairs >= 2)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    // 1, 2, 4, 7
    vector<int> vec = {4, 7, 1, 2};
    cout << checkRotated(vec);
    return 0;
}