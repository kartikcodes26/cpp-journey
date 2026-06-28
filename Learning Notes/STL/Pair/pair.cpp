#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    using students_t = pair<string, double>;
    vector<students_t> students;

    for(int i = 0; i < 5; i++)
    {
        pair<string, double> student("Kartik", i);
        students.push_back(student);
    }

    for(auto element : students)
    {
        cout << element.first << " , " << element.second << '\n';
    }

    string name = "Foxy";
    auto me = make_pair(ref(name), 17.0f);  // Sending name by reference
    name = "Rahul";
    //cout << me.first << " , " << me.second << '\n';

    cout << get<float>(me);
    // pair <string, double> student("Mathematics", 91.56);
    // cout << student.first << '\n';
    // cout << student.second << '\n';
    return 0;
}