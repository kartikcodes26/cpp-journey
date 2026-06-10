#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;



class Student
{
    public:
        string name;
        char gender; // M / F / O
        int age;
        bool disabilities;
        

        Student(string n, char g, int a, bool d)
        {
            id = 10000 + rand() % 90000;  // Randomly generated 5 digit ID;
            name = n;
            gender = g;
            age = a;
            disabilities = d;
        }

        Student(string n, char g, int a, bool d, int id)
        {
            this->id = id;  
            name = n;
            gender = g;
            age = a;
            disabilities = d;
        }

        void display()
        {
            cout << "ID : " << id << '\n';
            cout << "Name : " << name << '\n';
            cout << "Gender : " << gender << '\n';
            cout << "Age : " << age << '\n';
            cout << "Disabilities : ";
            if(disabilities)
            {
                cout << "Yes \n \n";
            }
            else
            {
                cout << "No \n \n";
            }
        }

        int getId()
        {
            return id;
        }

    private:
        int id;
};

vector<Student> students;

void displayAll()
{
    for(Student &s : students)
    {
        s.display();
    }
}

int search(int id)
{
    for(Student &s : students)
    {
        if(s.getId() == id)
        {
            s.display();
            return 0;
        }
    }
    cout << "Student Not found \n";
    return 0;
}

int main()
{
    srand(time(0));


    Student s1("Kartik", 'M', 17, false, 19021);
    Student s2("Aisha", 'F', 16, true, 21001);
    Student s3("Rohan", 'M', 18, false);
    Student s4(s1);
    
    
    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    students.push_back(s4);

    // displayAll();
    search(19021);
    


    return 0;
}