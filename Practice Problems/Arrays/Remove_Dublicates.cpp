#include <iostream>
using namespace std;

bool isin(int arr[], int num, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == num)
        {
            
            return true;
        }
    }
    
    return false;
}
int main()
{
    int list[] = {2, 4, 6, 2, 9, 0, 0};
    int size = sizeof(list) / sizeof(list[0]);

    int temp[size];
    int sizeTemp = 0;
    for(int i = 0; i < size; i++)
    {
        if(!isin(temp, list[i], sizeTemp))
        {
            temp[sizeTemp] = list[i];
            sizeTemp++;
        }
    }
    
    for(int j = 0; j < sizeTemp; j++)
    {
        cout << temp[j] << " , ";
    }
    return 0;
}