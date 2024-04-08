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
    int correctOption;
};

class Quiz
{
private:
    vector<Question> questions;
    int score;

public:
    Quiz() : score(0) {} // Constructor
    
    void addQuestion(string question, vector<string> options, int correctOption)
    {
        Question q;
        q.question = question;
        q.options = options;
        q.correctOption = correctOption;
        questions.push_back(q);
    }

    void displayQuestion(const Question &q)
    {
        cout << q.question << endl;
        for (int i = 0; i < q.options.size(); ++i)
        {
            cout << i + 1 << ". " << q.options[i] << endl;
        }
    }

    void runQuiz()
    {
        score = 0;
        for (const auto &q : questions)
        {
            displayQuestion(q);
            int userChoice;
            cout << "Enter your choice: ";
            cin >> userChoice;
            if (userChoice == q.correctOption)
            {
                cout << "Correct!" << endl;
                score++;
            }
            else
            {
                cout << "Incorrect!" << endl;
            }
        }
        cout << "Quiz completed! Your score: " << score << "/" << questions.size() << endl;
    }
};

int main()
{
    Quiz quiz;
    quiz.addQuestion("What is the capital of France?", {"London", "Paris", "Berlin", "Rome"}, 2);
    quiz.addQuestion("What is the largest planet in our solar system?", {"Venus", "Jupiter", "Mars", "Saturn"}, 2);
    quiz.addQuestion("Who painted the Mona Lisa?", {"Leonardo da Vinci", "Pablo Picasso", "Vincent van Gogh", "Michelangelo"}, 1);
    quiz.runQuiz();
    return 0;
}