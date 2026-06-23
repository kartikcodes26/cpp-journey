#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void printvector(const vector<string> &vec)
{
    for (auto element : vec)
    {
        cout << element << ' ';
    }
    cout << '\n';
}

void quiz()
{
    string line;
    string question;
    vector<string> answers;
    string answer_index;
    int i;
    int start, end;
    int choice;
    int score = 0;
    int obtained_score = 0;
    ifstream file("Questions.txt");
    

    while(getline(file, line))
    {
        i = line.find(',');
        question = line.substr(0, i);
        start = i+1;
        end = line.find(',');
        for(int j = 1; j < 5; j++)
        {
            end = line.find(',', start);
            answers.push_back(line.substr(start, end-start));
            start = end + 1;
            
        }
        score++;
        answer_index = line.substr(line.find_last_of(',') + 1);

        cout << question << "\n\n";
        printvector(answers);
        cout << "\n\n";
        cout << "Enter your Choice : ";
        cin >> choice;
        if(choice == stoi(answer_index)+1)
        {
            cout << "Correct Answer\n\n";
            obtained_score++;
        }
        else if (choice > 4)
        {
            cout << "Invalid Choice \n\n";
        }
        else
        {
            cout << "Wrong Answer\n\n";
            cout << "Correct Answer : " << answer_index << "\n\n";
        }
        answers.clear();
    }
    cout << "You got " << obtained_score << " / " << score << '\n';

}
int main()
{
    quiz();
    return 0;
}