#include <iostream>
using namespace std;

class B
{
    public:
        int *num;

        B()
        {
            num = new int;
        }      
};
int main()
{

    // EXAMPLE OF SHALLOW COPY
    
    B obj1;
    *obj1.num = 54;  //Dereferencing and assigning
    
    B obj2 = obj1;

    cout << *obj1.num << '\n';
    cout << *obj2.num << '\n';

    *obj1.num = 90;

    cout << *obj1.num << '\n';
    cout << *obj2.num << '\n';

    return 0;
}