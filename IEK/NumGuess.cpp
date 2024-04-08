#include <iostream>

using namespace std;

class NumGuess
{
private:
    int tries = 4, guess;

public:
    bool isGuessCorrect(int x);
};

bool NumGuess::isGuessCorrect(int x)
{
    int *tr = &tries, *g = &guess;
    cout << "Guess the number between 0 and 100: ";
    cin >> *g;
    while (*tr > 0)
    {
        if (*g == x)
            return true;
        cout<< "Tries remaining:"<< *tr<< *g<< endl;
        cout << "Wrong! Try again: ";
        cin >> *g;
        *tr; 
    }
    return false;
}

int main()
{
    NumGuess num;
    int x = (rand() % 100) + 1;
    cout<< x<< endl;
    // int x = rand() % 2;
    if (num.isGuessCorrect(x))
    {
        cout << "Congratulations! Your guess is correct!" << endl;
    }
    else
        cout << "You lose!" << endl;
    return 0;
}