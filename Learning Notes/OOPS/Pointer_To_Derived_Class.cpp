#include <iostream>
using namespace std;

class charger
{
    public:
        int watt;
        int volt;

        void charge()
        {
            cout << "Charging";
        }
};

class pcCharger:public charger
{
    public:
        int pcVolt;
        void charge()
        {
            cout << "Charging Laptop";
        }
};

int main()
{
    charger * charger_ptr;
    pcCharger pc_obj1;
    charger_ptr = &pc_obj1;
    
    charger_ptr -> charge();

    //This is invoke the function of base class only not the derived class. As the pointer is of base class only

    // charger_ptr -> pcVolt = 120;  //Error


    pcCharger * pc_obj2;
    pc_obj2 = &pc_obj1;

    pc_obj2 -> volt = 120;
    pc_obj2 -> watt = 144;
    pc_obj2 ->pcVolt = 110;
    //We are able to acess everything
    return 0;
}