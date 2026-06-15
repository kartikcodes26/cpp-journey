#include <iostream>
using namespace std;

void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }

    cout << "\n\n";
}

void mirrorPyramid(int n)
{
    int temp = n;
    for (int i = 0; i < n; i++)
    {
        for (int z = temp - 1; z > 0; z--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {

            cout << "*";
        }
        temp--;

        cout << "\n";
    }
    cout << "\n\n";
}

void invertedPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << '\n';
    }

    cout << "\n\n";
}

void centeredPyramid1(int n)
{
    int temp = n;
    for (int i = 0; i < n; i++)
    {
        for (int z = temp - 1; z > 0; z--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {

            cout << "* ";
        }
        temp--;

        cout << "\n";
    }
    cout << "\n\n";
}

void centeredPyramid2(int n)
{
    int temp = 1;
    for (int i = 0; i < n; i++)
    {
        for (int z = 0; z < n - i - 1; z++)
        {
            cout << " ";
        }
        for (int j = 0; j < temp; j++)
        {
            cout << "*";
        }
        temp = temp + 2;
        cout << '\n';
    }
}

void invertedcenteredpyramid2(int n)
{
    int temp = n + (n - 1);
    for (int i = 0; i < n; i++)
    {
        for (int z = i; z > 0; z--)
        {
            cout << " ";
        }
        for (int j = 0; j < temp; j++)
        {
            cout << "*";
        }
        temp = temp - 2;
        cout << '\n';
    }
}

int main()
{
    // pyramid(4);
    // mirrorPyramid(8);
    // centeredPyramid1(6);
    // invertedPyramid(8);
    // centeredPyramid2(9);
    invertedcenteredpyramid2(8);
    return 0;
}