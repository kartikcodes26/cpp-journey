#include <iostream>
#include <vector>
using namespace std;

void printvector(const vector<int> &vec)
{
    for (auto element : vec)
    {
        cout << element << ' ';
    }
    cout << '\n';
}

void moveZero(vector<int> &vec)
{
    int index = 0;
    int size = vec.size();

    for (int i = 0; i < size; i++)
    {
        if (vec[i] != 0)
        {
            vec[index] = vec[i];
            index++;
        }
    }

    for(int i = index; i < size; i++)
    {
        vec[i] = 0;
    }
}

int main()
{
    vector<int> vec = {3, 1, 0, 9, 8, 1, 1, 0, 2};
    moveZero(vec);

    printvector(vec);
    return 0;
}