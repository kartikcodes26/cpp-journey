#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

fstream file("Database.txt", ios::in | ios::out | ios::app);
string currentuser;
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

int login()
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
            cout << "Account found \n";
            found = true;
            tpasswd = line.substr(i + 1);

            int z = 3;
            while (z != 0)
            {
                cout << "Enter password : ";
                cin >> passwd;
                if (passwd == tpasswd)
                {
                    cout << "\nYou're logged in \n\n";
                    currentuser = tname;
                    return 1;
                }
                else
                {
                    z--;
                    cout << "incorrect password. Try again " << z << " tries left \n";
                }
            }
            return 0;
        }
    }

    if (!found)
    {
        cout << "Account not found \n";
        return 0;
    }
}

void deleteAcc()
{
    string line;
    string name;
    bool loggedin = false;
    loggedin = login();

    if(loggedin)
    {
        ofstream temp("temp.txt");
        file.clear();
        file.seekg(0);

        while(getline(file, line))
        {
            name = line.substr(0, line.find(','));
            if(name != currentuser)
            {
                temp << line << '\n';
            }
        }
        file.close();
        temp.close();
        remove("Database.txt");
        rename("temp.txt", "Database.txt");
        cout << "Account Deletion Successful \n";
        currentuser = "";
    }
    else
    {
        cout << "Login Failed, Account deletion cannot proceed further \n";
    }
}

int main()
{
    int choice;
    bool running = true;

    while (running)
    {
        cout << "\n 1) Signup \n 2) Login \n 3) Delete Account\n 4) Exit\n";
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
            deleteAcc();
            break;

        case 4:
            cout << "\nThanks for using our system\n";
            running = false;
            break;

        default:
            cout << "Invalid Input \n";
        }
    }
    return 0;
}

/*todo
1) Delete Account
2) Change Password

*/