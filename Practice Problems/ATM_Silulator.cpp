#include <iostream>
using namespace std;

void withdraw(double &balance, double amount)
{
    if(amount <= 0)
    {
        cout << "\nInvalid Amount \n";
    }
    else if(balance >= amount)
    {
        cout << "\n Withdraw Successful \n";
        balance -= amount;
    }
    
    else
    {
        cout << "\n Withdraw Failed \n";
        cout << "\n Insufficient Funds \n";
    }
    
}

void deposit(double &balance, double amount)
{
    if(amount > 0)
    {
        cout << "\n Deposit Successful \n";
        balance += amount;
    }
    else
    {
        cout << "\nInvalid Amount \n";
    }
    
}

int main()
{
    double balance{};
    double amount{};
    cout << "Enter your initial amount of savings : ";
    cin >> balance;

    int choice = 1;
    while(choice != 0)
    {
        cout << "Select your action : \n 1) Deposit \n 2) Withdraw \n 3) Check Balance \n 0) Exit \n";
        cout << "\n Enter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1 : 
                cout << "\n Enter the amount you want to deposit : ";
                cin >> amount;
                deposit(balance, amount);
                
                cout << "\n Current Balance : " << balance << "\n \n";
                break;
            
            case 2 : 
                cout << "Enter the amount you want to withdraw : ";
                cin >> amount;
                withdraw(balance, amount);
                
                cout << "Current Balance : " << balance << "\n \n";
                break;
            
            case 3 : 
                cout << "\n Current Balance : \n" << balance << "\n \n";
                break;

            case 0 :
                break;

            default :
                cout << "\nInvalid Input\n";
        }
    }
    cout << "Thanks for using our service \n";
    return 0;
}