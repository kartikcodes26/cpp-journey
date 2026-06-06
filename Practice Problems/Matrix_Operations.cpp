#include <iostream>
#include <climits>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void printMatrix(int matrix1[][3], int rows, int columns)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << '\n';
    }
}

int sumOfAllElements(int matrix[][3], int rows, int columns) //compiler must know the number of columns
{
    int sum = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int largest(int matrix[][3], int rows, int columns)
{
    int largest = INT_MIN;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }
        }
    }
    return largest;
}

int rowsum(int matrix[][3], int columns, int row)
{
    int sum = 0;
    for(int j = 0; j < columns; j++)
    {
        sum += matrix[row][j];
    }
    return sum;
}

int diagonalSum(int matrix[][3], int rows, int columns)
{
    if(columns != rows)
    {
        cout << "Diagonal sum is not possible as it is not a square matrix";
        return -1;
    }
    int sum = 0;
    for(int i = 0; i < rows; i++)
    {
        sum += matrix[i][i];

    }
    return sum;

}

void transpose(int matrix[][3], int rows, int columns)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(j > i)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    printMatrix(matrix, rows, columns);
}

int main()
{
    int matrix1[3][3] = {
        {3, 5, 6},
        {1, 2, 3},
        {9, 0, 8}
    };

    const int rows = sizeof(matrix1) / sizeof(matrix1[0]);
    const int columns = sizeof(matrix1[0]) / sizeof(matrix1[0][0]);

    cout << "Sum : " << sumOfAllElements(matrix1, rows, columns) << '\n';
    cout << "Largest : " << largest(matrix1, rows, columns) << '\n';
    cout << "Sum of elements in the 0th row : " << rowsum(matrix1, columns, 0) << '\n'; 
    cout << "Diagonal Sum : " << diagonalSum(matrix1, rows, columns) << '\n';
    cout << "Transpose of the matrix is : \n"; transpose(matrix1, rows, columns);

    return 0;
}