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

/* ----- Original Approach ----- */

void DeleteAll1(vector<int> &vec, int num)
{
    for (int i = 0; i < vec.size();)
    {
        if (vec[i] == num)
        {
            vec.erase(vec.begin() + i);
        }
        else
        {
            i++;
        }
    }
}

/* ----- Better Approach ------ */

void DeleteAll2(vector<int> &vec, int num)
{
    int index = 0;

    int n = vec.size(); // Calculate once, use forever

    for(int i = 0; i < n; i++)
    {
        if(vec[i] != num)
        {
            vec[index] = vec[i];
            index++;
        }
    }
    vec.resize(index);
}

/* Reason for betterment :

1) conplexity O(n) as compared to O(n^2) in the previous algorithm
2) No shifting occurs better, more memory efficient

*/


int main()
{
    vector<int> vec1 = {4, 2, 1, 0, 9, 2, 4, 1};
    DeleteAll1(vec1, 4);
    DeleteAll1(vec1, 1);
    DeleteAll2(vec1, 2);

    printvector(vec1);

    return 0;
}