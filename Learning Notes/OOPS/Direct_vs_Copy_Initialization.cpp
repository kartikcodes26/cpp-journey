#include <iostream>
using namespace std;

class TV
{
    public:
        int resolution;
        int refreshRate;
        
        TV(int res, int refR)
        {
            resolution = res;
            refreshRate = refR;
        }

        //copy constructor
        TV(TV& temp)  //'&' is important
        {
            this->resolution = temp.resolution;
            this->refreshRate = temp.refreshRate;
        }
};

int main()
{
    //Direct copy constructor
    TV lg(1080, 60);
    TV sony(lg);
    cout << sony.resolution << '\n';
    cout << sony.refreshRate << '\n';

    //Copy Initialisation
    TV onn = lg;
    cout << onn.resolution << '\n';
    cout << onn.refreshRate << '\n';
    return 0;
}