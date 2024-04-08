#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to check if a character is a letter
bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

// Function to initialize the secret word
string chooseWord() {
    vector<string> words = {"hangman", "programming", "computer", "algorithm", "cplusplus", "software", "development"};
    srand(time(nullptr));
    return words[rand() % words.size()];
}

// Function to display the current state of the guessed word
void displayWord(const string& secretWord, const vector<bool>& guessed) {
    for (size_t i = 0; i < secretWord.length(); ++i) {
        if (guessed[i]) {
            cout << secretWord[i] << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int main() {
    const int maxAttempts = 6;
    string secretWord = chooseWord();
    vector<bool> guessed(secretWord.length(), false);
    int attemptsLeft = maxAttempts;

    cout << "Welcome to Hangman!\n";
    cout << "Try to guess the word:\n";

    while (attemptsLeft > 0 && guessed != vector<bool>(secretWord.length(), true)) {
        cout << "Attempts left: " << attemptsLeft << endl;
        displayWord(secretWord, guessed);
        cout << "Enter a letter: ";
        char guess;
        cin >> guess;

        if (!isLetter(guess)) {
            cout << "Please enter a valid letter.\n";
            continue;
        }

        bool found = false;
        for (size_t i = 0; i < secretWord.length(); ++i) {
            if (secretWord[i] == tolower(guess)) {
                guessed[i] = true;
                found = true;
            }
        }

        if (!found) {
            cout << "Incorrect guess!\n";
            --attemptsLeft;
        }
    }

    if (guessed == vector<bool>(secretWord.length(), true)) {
        cout << "Congratulations! You guessed the word: " << secretWord << endl;
    } else {
        cout << "You ran out of attempts! The word was: " << secretWord << endl;
    }

    return 0;
}
