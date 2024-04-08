#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

struct Question
{
    string question;
    vector<string> options;
    char correctOption;
};

void displayQuestion(const Question &q)
{
    for (size_t i = 0; i < q.options.size();, i++)
    {
        cout<< i+1 << q.options[i]<<endl;
    }
}

int runQuiz(const vector<Question>& questions)
{
    score = 0;
    for(const auto& q: questions)
    {
        displayQuestion(q);
        int userChoice;
        cout << "Enter your choice: ";
        cin >> userChoice;
        if(userChoice == q.correctOption)
        {
            cout<< "Correct!"<<endl;
        }
        else
        {
            cout << "Incorrect!" << 
        }
    }
}
