#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string openfile()
{
    string fileName;
    bool isOpen = false;
    cout << "Enter the filname you want to open : ";
    getline(cin, fileName);

    ifstream file(fileName);

    if (!file.is_open())
    {
        cout << "File not found \n";
        return "Not_Open";
    }
    cout << "File Opened Successfully \n";
    return fileName;
}

void displayContents()
{
    string fileName = openfile();
    string line;

    if (fileName != "Not_Open")
    {
        ifstream file(fileName, ios::app);
        cout << "\n\n =========================================== Contents of " << fileName << " ===================================== \n\n";
        while (getline(file, line))
        {
            cout << line;
        }
        cout << "\n\n";
    }
}

void editFile()
{
    string fileName = openfile();
    string line;
    string to_write;

    if (fileName != "Not_Open")
    {
        fstream file(fileName, ios::app | ios::in);
        

        cout << "\n\n =========================================== Contents of " << fileName << " ===================================== \n\n";
        while (getline(file, line))
        {
            cout << line;
        }
        cout << ' ';
        getline(cin, to_write);
        file << to_write;
    }
}

int main()
{
    editFile();
    return 0;
}