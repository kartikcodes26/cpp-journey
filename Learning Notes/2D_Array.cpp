#include <iostream>
using namespace std;

int main()
{
    //An array of arrays is called a 2D array

    int matrix[2][3]; //matrix[rows][columns]

    /*
    1  2  3
    4  5  6
    
    there are 2 rows and 3 columns
    */

    int matrix1[2][3] = {
        {3, 5, 6},
        {1, 2, 3}
    };

    // cout << matrix1[1][1] << '\n';

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}