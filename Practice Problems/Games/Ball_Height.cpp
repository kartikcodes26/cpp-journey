#include <iostream>
using namespace std;

double g { 9.8 };

float heightin()
{
    float h{};
    cout << "Enter the Height of the tower : ";
    cin >> h;

    return h;
}

bool bottomHeight(float h, int time)
{
    
    double topHeight { 0.5 * g * time * time };
    double bottomHeight = h - topHeight;

    if(bottomHeight <= 0)
    {
        cout << "At time " << time << " Ball is on ground \n";
        return true;
    }
    
    cout << "Height of the ball from the bottom at time " << time << " s" << " is " << bottomHeight << " m \n";

    return false;
}
int main()
{
    double height { heightin() };
    for(int i = 0; ; i++)
    {
        if(bottomHeight(height, i))
        {
            break;
        }
    }

    return 0;
}