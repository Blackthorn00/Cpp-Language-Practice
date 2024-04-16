#include <iostream>

using namespace std;

class NumGuess
{
public:
    int tries = 4, guess;

    // public:
    NumGuess(int t)
    {
        tries = t;
    }
    bool isGuessCorrect(int x)
    {
        cout << "Guess the number between 0 and 100: ";
        cin >> guess;
        while (tries > 0)
        {
            if (guess == x)
                return true;
            cout << "Tries remaining:" << tries << endl;
            cout << "Wrong! Try again: ";
            cin >> guess;
            tries--;
        }
        return false;
    }
};

int main()
{
    NumGuess num(4);
    // int x = (rand() % 100) + 1;
    int x = rand() % 2;
    cout << x << endl;
    if (num.isGuessCorrect(x))
    {
        cout << "Congratulations! Your guess is correct!" << endl;
    }
    else
        cout << "You lose!" << endl;
    return 0;
}