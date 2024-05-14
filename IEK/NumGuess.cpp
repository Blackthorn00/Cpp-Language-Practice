#include <iostream>
#include <ctime>
#include <cstdlib>

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
    srand(time(0));
    NumGuess num(4);
    int x = rand() % 101;
    cout << x << endl;
    if (num.isGuessCorrect(x))
    {
        cout << "Congratulations! Your guess is correct!" << endl;
    }
    else
        cout << "You lose!" << endl;
    return 0;
}