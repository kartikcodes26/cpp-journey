#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream file("Database.txt", ios::in | ios::out | ios::app);
void signup()
{
    string name;
    string passwd;
    string temp;
    string tname;
    string line;

    file.clear();
    file.seekp(0, ios::end);

    cout << "Enter your Username : ";
    cin >> name;

    while (getline(file, line))
    {
        tname = line.substr(0, line.find(','));
        if (tname == name)
        {
            cout << "Username already exists \n\n";
            return;
        }
    }

    cout << "Set your password : ";
    cin >> temp;

    while (true)
    {
        cout << "Re-enter your password : ";
        cin >> passwd;

        if (temp != passwd)
        {
            cout << "Passwords didnt match \n";
        }
        else
        {
            break;
        }
    }

    file.clear();
    file.seekp(0, ios::end);

    file << name << "," << passwd << '\n';

    cout << "Account Creation Sucessful \n \n";
}

void login()
{
    string name;
    string tname;
    string passwd;
    string tpasswd;
    string line;
    bool found = false;
    int i;
    cout << "Enter your username : ";
    cin >> name;

    file.clear();
    file.seekg(0);

    while (getline(file, line))
    {
        i = line.find(',');
        tname = line.substr(0, line.find(','));

        if (name == tname)
        {
            cout << "Accont found \n";
            found = true;
            tpasswd = line.substr(i + 1);

            int z = 3;
            while (z != 0)
            {
                cout << "Enter password : ";
                cin >> passwd;
                if (passwd == tpasswd)
                {
                    cout << "You're logged in \n";
                    return;
                }
                else
                {
                    z--;
                    cout << "incorrect password. Try again " << z << " tries left \n";
                }
            }
            return;
        }
    }

    if (!found)
    {
        cout << "Account not found \n";
    }
}
int main()
{
    int choice;
    bool running = true;
    while (running)
    {
        cout << "\n 1) Signup \n 2) Login \n 3) Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            signup();
            break;

        case 2:
            login();
            break;

        case 3:
            cout << "\nThanks for using out system\n";
            running = false;
            break;

        default:
            cout << "Invalid Input \n";
        }
    }
    return 0;
}