#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;


string currentuser;

void signup()
{
    fstream file("Database.txt", ios::in | ios::out | ios::app);
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
    fstream file("Database.txt", ios::in | ios::out | ios::app);

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
        tname = line.substr(0, i);

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
    return 0;
}

void deleteAcc()
{
    fstream file("Database.txt", ios::in | ios::out | ios::app);

    string line;
    string name;
    bool loggedin = false;
    loggedin = login();

    if (loggedin)
    {
        ofstream temp("temp.txt");
        file.clear();
        file.seekg(0);

        while (getline(file, line))
        {
            name = line.substr(0, line.find(','));
            if (name != currentuser)
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

void changepasswd()
{
    fstream file("Database.txt", ios::in | ios::out | ios::app);

    string line;
    string name;
    string npasswd;
    string temp;
    bool loggedin = false;
    loggedin = login();

    if(loggedin)
    {
        file.clear();
        file.seekg(0);
        cout << "Set your password : ";
        cin >> temp;
    }
    else
    {
        cout << "Login Failed \n";
        return;
    }
    

    while (true)
    {
        cout << "Re-enter your password : ";
        cin >> npasswd;

        if (temp != npasswd)
        {
            cout << "Passwords didnt match \ntry again\n";
        }
        else
        {
            break;
        }
    }
    ofstream tempobj("temp.txt");

    while(getline(file, line))
    {
        name = line.substr(0, line.find(','));
        if(name == currentuser)
        {
            tempobj << name + ',' + npasswd << '\n';
        }
        else
        {
            tempobj << line << '\n';
        }
    }

    file.close();
    tempobj.close();
    remove("Database.txt");
    rename("temp.txt", "Database.txt");

    cout << "Password Changed Successfully \n";
    currentuser = "";
}

int main()
{
    int choice;
    bool running = true;

    while (running)
    {
        cout << "\n 1) Signup \n 2) Login \n 3) Delete Account\n 4) Change Password\n 5) Exit\n";
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
            changepasswd();
            break;

        case 5:
            cout << "\nThanks for using our system\n";
            running = false;
            break;

        default:
            cout << "Invalid Input \n";
        }
    }
    return 0;
}
