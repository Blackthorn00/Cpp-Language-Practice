#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

struct Words
{
    vector<string> words = {"apple", "banana", "orange", "grape", "pineapple"};
    string wordToGuess;
    string guessedWord;
    int incorrectGuesses = 0;
};

class Hangman
{
private:
    Words w;
public:
    void initialize()
    {
        Words w;
        srand(time(nullptr));
        w.wordToGuess = w.words[rand() % w.words.size()];
        w.guessedWord = string(w.wordToGuess.length(), '_');
        w.incorrectGuesses = 0;
    }
    void displayHangman()
    {
        switch (w.incorrectGuesses)
        {
        case 0:
            cout << " ____" << endl;
            cout << " |  |" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << "_______" << endl;
            break;
        case 1:
            cout << " ____" << endl;
            cout << " |  |" << endl;
            cout << " |  O" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << "_______" << endl;
            break;
        case 2:
            cout << " ____" << endl;
            cout << " |  |" << endl;
            cout << " |  O" << endl;
            cout << " |  |" << endl;
            cout << " |" << endl;
            cout << "_______" << endl;
            break;
        case 3:
            cout << " ____" << endl;
            cout << " |  |" << endl;
            cout << " |  O" << endl;
            cout << " | /|" << endl;
            cout << " |" << endl;
            cout << "_______" << endl;
            break;
        case 4:
            cout << " ____" << endl;
            cout << " |  |" << endl;
            cout << " |  O" << endl;
            cout << " | /|\\" << endl;
            cout << " |" << endl;
            cout << "_______" << endl;
            break;
        case 5:
            cout << " ____" << endl;
            cout << " |  |" << endl;
            cout << " |  O" << endl;
            cout << " | /|\\" << endl;
            cout << " | /" << endl;
            cout << "_______" << endl;
            break;
        case 6:
            cout << " ____" << endl;
            cout << " |  |" << endl;
            cout << " |  O" << endl;
            cout << " | /|\\" << endl;
            cout << " | / \\" << endl;
            cout << "_______" << endl;
            break;
        }
    }

    bool isGuessCorrect(Words &w, char guess)
    {
        bool correctGuess = false;
        for (int i = 0; i < w.wordToGuess.length(); ++i)
        {
            if (w.wordToGuess[i] == guess)
            {
                w.guessedWord[i] = guess;
                correctGuess = true;
            }
        }
        return correctGuess;
    }

    bool isWordGuessed(const Words &w)
    {
        return w.guessedWord == w.wordToGuess;
    }

    void runHangman()
    {
        char guess;
        char playAgain;
        initialize();
        do
        {
            displayHangman();
            cout << "Hangman Game" << endl;
            cout << "Guess the word: " << w.guessedWord << endl;
            do
            {
                cout << "Enter your guess: ";
                cin >> guess;
                if (!isGuessCorrect(w, guess))
                {
                    w.incorrectGuesses++;
                }
                displayHangman();
                cout << "Guessed word so far: " << w.guessedWord << endl;
            } while (!isWordGuessed(w) && w.incorrectGuesses < 6);

            if (isWordGuessed(w))
            {
                cout << "Congratulations! You guessed the word: " << w.wordToGuess << endl;
            }
            else
            {
                cout << "Sorry, you couldn't guess the word. It was: " << w.wordToGuess << endl;
            }
            cout << "Do you want to play again? (y/n): ";
            cin >> playAgain;
        } while (playAgain == 'y' || playAgain == 'Y');
        cout << "Thanks for playing Hangman!" << endl;
    }
};

int main()
{
    Hangman h;
    h.runHangman();
    return 0;
}