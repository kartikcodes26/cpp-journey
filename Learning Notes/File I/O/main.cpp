#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
The class used for File I/O is called fstreambase

1) Ifstream -> Used for Input, derived from fstreambase
2) Ofstream -> Used to output a file content, also derived from fstreambase
*/

/*
There are 2 methods of opening a file
1) Using Constructor of fstreambase
2) Using Member function
*/

int main()
{
    // // syntax : ifstream obj1("Filename.txt");

    // string line;
    // ifstream in("ex1.txt");

    // //getline(obj, string_var);

    // getline(in, line);
    // cout << line << '\n';

    // getline(in, line);
    // cout << line << '\n';

    // getline(in, line);
    // cout << line << '\n';

    //It reads the next line if called once again

    ofstream out("ex2.txt");
    // out << "This line is coming from main.cpp \n C++ is excellent in optimisation and speed";

    string l1;
    cout << "What do you want to say : ";
    getline(cin, l1);

    out << "The user wants to say : " + l1;

    out.close();
    return 0;
}