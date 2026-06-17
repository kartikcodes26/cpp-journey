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

void rotate(vector<int> &vec, int k)
{
    int n = vec.size();
    vector<int> temp(n);

    if(k == n)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = vec[i];
    }

    vec = temp;
}

int main()
{
    vector<int> vec1 = {2, 1, 9, 0, 7, 3};
    rotate(vec1, 6);
    printvector(vec1);

    return 0;
}