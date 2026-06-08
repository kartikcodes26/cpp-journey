#include <iostream>

using namespace std;

class myMobile
{
    public:
        int storage;
        int ram;
        int ppi; 

        char type;
};
int main()
{
    myMobile xiaomi;
    cout << sizeof(xiaomi) << '\n';

    /*Most compilers align data to the largest datatype, this is called data padding
    Thats why it was printinh 16 instead of 13
    */

    myMobile *vivo = new myMobile;
    vivo -> storage = 128; //Remeber
    cout << (*vivo).storage << '\n';
    return 0;
}