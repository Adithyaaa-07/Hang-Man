#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "apple";
    string guessed(word.length(), '_');
    int attempts = 6;
    char guess;
    
    cout << "Welcome to Hangman!" << endl;
    
    while (attempts > 0 && guessed != word) {
        cout << "Word: " << guessed << "\nAttempts left: " << attempts << "\nEnter a letter: ";
        cin >> guess;
        
        bool correct = false;
        for (size_t i = 0; i < word.length(); i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
                correct = true;
            }
        }
        
        if (!correct) attempts--;
    }
    
    if (guessed == word)
        cout << "Congratulations! You guessed the word: " << word << endl;
    else
        cout << "Game Over! The word was: " << word << endl;
    
    return 0;
}
