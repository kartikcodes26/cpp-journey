#include <iostream>
using namespace std;

class ssd
{
public:
    int storage;
    int rSpeed;
    int wSpeed;
};

class Array
{
    public:
        
        Array()
        {
            data = new int[10];
            for (int i = 0; i < 10; i++)
            {
                data[i] = i * i * i;
            }
        }

        ~Array()
        {
            delete[] data;
        }

        void PrintArray()
        {
            for (int i = 0; i < 10; i++)
            {
                cout << data[i] << " ";
            }
        }
        
        void setData(int index, int num)
        {
            data[index] = num;
        }

    private:
        int* data;
};
int main()
{
    ssd sandisk;
    sandisk.storage = 512;
    sandisk.rSpeed = 250;
    sandisk.wSpeed = 125;

    ssd samsung = sandisk; // copy-Assignment operator

    cout << samsung.storage << '\n';

    Array arr1;

    arr1.setData(2, 200);

    arr1.PrintArray();
    return 0;
}