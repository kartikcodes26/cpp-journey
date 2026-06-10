/*
Deep copy requires the following things:
1) Constructor
2) Destructor
3) Copy Constructor
4) Overloaded assignment operator
*/

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
        
        //Copy Constructor
        B(B& obj)
        {
            num = new int;  //Allocating an new interer
            *num = *obj.num; // Value of num in new object = Value of num of current object
        }

        ~B()
        {
            delete num;
        }
};
int main()
{

    // EXAMPLE OF Deep COPY
    
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