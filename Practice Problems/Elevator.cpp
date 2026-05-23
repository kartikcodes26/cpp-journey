#include <iostream>
using namespace std;

void up(int &currentFloor, int floor)
{
    cout << "Going Up \n";
    while(floor != currentFloor)
    {
        currentFloor++;
        cout << "Floor : " << currentFloor << '\n';   
    }
    cout << "Reached Floor " << floor << '\n';
}

void down(int &currentFloor, int floor)
{
    cout << "\n Going Down \n \n";
    while(floor != currentFloor)
    {
        currentFloor--;
        cout << "Floor : " << currentFloor << '\n'; 
    }
    cout << "Reached Floor " << floor << '\n';
}
int main()
{
    //Current Floor is default to zero (Ground floor)
    int currentFloor{};
    const int totalFloors = 10;
    int targetFloor{};

    while(targetFloor != -1)
    {
        cout << "Enter the floor you want to go to (Max 10) (-1 to exit) : ";
        cin >> targetFloor;
        if((targetFloor != -1) && (targetFloor < 0 || targetFloor > totalFloors))
        {
            cout << "\nInvalid Floor " << "\n \n";
        }
        else if (targetFloor == currentFloor)
        {
            cout << "You are already on " << currentFloor << "\n \n";
        }
        else if (targetFloor < currentFloor)
        {
            down(currentFloor, targetFloor);
        }
        else if(targetFloor > currentFloor)
        {
            up(currentFloor, targetFloor);
        }
        else if(targetFloor == -1)
        {
            cout << "Hope you have a good day ! \n";
            break;
        }
        
    }
    

    return 0;
}