#include <iostream>
using namespace std;

class light
{
    public:
        int brightness; //in NITS

    public:
        void getBrightness() const
        {
            brightness = 5;  //illegal, const function cannot modify objects
            cout << brightness << '\n';
        }   
};
int main()
{
    light l1;
    l1.brightness = 120;

    l1.getBrightness();
    return 0;
}