#include <iostream>
using namespace std;

template<typename T>
class dataStructure
{
    private:
        T *data;

    public:
    static T new_var;
        dataStructure(int N)
        {
            data = new T[N];
        }
        ~dataStructure()
        {
            delete[] data;
        }
};
int main()
{
    dataStructure<int> ds1(10);
    return 0;
}