#include <iostream>
#include <CSTDLIB>
#include <WINDOWS.H>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    cout << "Welcome to the Secret Number game \n \n";
    int secretNumber = rand() % 10 + 1;
    cout << "The secret number between 1 and 10 has been selected \n \n";
    sleep(2000);
    int tries = 1;
    while (true)
    {
        int guess;
        cout << "Enter your guess " << "( try" << tries << " / 3)";
        cin >> guess;
        sleep(1000);
        cout << "Evaluating Result \n \n";
        sleep(3000);
        if (guess == secretNumber)
        {
            cout << "\n🎉 Congratulations! You guessed it in " << attempts << " attempts!\n";
            break;
        }
        else if (guess < secretNumber)
        {
            cout << "Too Low! Try a higher number.\n";
        }
        else
        {
            cout << "Too High! Try a lower number.\n";
        }
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    }
    while (playAgain == 'y' || playAgain == 'Y')
        ;

    cout << "\nThanks for playing! Goodbye 👋\n";

    return 0;
}