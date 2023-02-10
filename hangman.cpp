#include<iostream>

#include<cstdlib>

#include<ctime>

#include <string>

using namespace std;

void displayGameDetails(int maxTries);
string chooseSecretWord();
void replaceDashes(char guessWord[], int length);
void displayWord(string word, int length);
int isGuessTrue(string secretWord, char guessWord[], char letter);
void displayMan(int remainingGuess);

int main() {
  int maxTries = 5;
  int remainTries = 5;
  char guessLetter;
  string secretWord;
  int wordLength;

  displayGameDetails(maxTries);

  secretWord = chooseSecretWord();
  wordLength = word.length();

  cout << "Random word chosen! \n";

  char guessWord[wordLength];
  replaceDashes(guessWord, wordLength);
  cout << "Your guess word is: ";
  displayWord(guessWord, wordLength);

  return 0;

  while (remainTries != 0) {
    cout << "Guess a letter" << endl;
    cout << "> ";
    cin >> guessLetter;

    int guess = isGuessTrue(secretWord, guessWord, guessLetter);

    if (guess == 0) {

    }
  }
}

void displayGameDetails(int maxTries) {

  cout << "\n"
  "        .-------------------------------------------------------------------------------.\n"
  "        |      _      _                                                                  |\n"
  "        |     | |    | |   __ _    _ __      __ _        /\\/\\      __ _    _ __          |\n"
  "        |     | |----| |  / _  |  |  _ \\    / _` |      /    \\    / _  |  |  _  \\        |\n"
  "        |     | |----| | | (_| |  | | | |  | (_| |     / /\\/\\ |  | (_| |  | | | |        |\n"
  "        |     |_|    |_|  \\_ _ |  |_| |_|   \\__, |     \\/    \\/   \\_ _ |  |_| |_|        |\n"
  "        |                                    |___/                                       |\n"
  "        .--------------------------------------------------------------------------------.\n";

  cout << "The purpose of this game is to guess an animal name, secretly chosen by the application\n\n";
  cout << "You have to guess one letter at a time and you can have " << maxTries << " wrong attempts\n\n";
  cout << "Enter a lower-case letter and don't forget to enter key after each guess\n\n";
  cout << "Let's play the game!\n\n";
}

string chooseSecretWord() {

  string animals[] =
    {"puppy","turtle","rabbit",
      "raccoon","kitten","hamster",
      "sheep","turkey","chicken",
      "horse","chimpanzee","kangaroo",
      "koala", "elephant","leopard","hippopotamus",
      "giraffe","crocodile","alligator",
      "hedgehog"
    };

  srand(time(NULL));
  int randomIndex = (rand() % 20);
  string word = animals[randomIndex];
  return word;

  return "";
}

void replaceDashes(char guessWord[], int length) {
  for (int i = 0; i < length; i++) {
    guessWord[i] = '-';
    guessWord[length] = '\0';
  }
}

void displayWord(string word, int length) {
  for (int i = 0; i < length; i++) {
    cout << word[i];
  }
  cout << endl;
}

int isGuessTrue(string secretWord, char guessWord[], char letter) {
  int flag = 0;
  for (int i = 0; i < secretWord.length(); i++) {
    if (secretWord[i] == letter) {
      if (guessWord[i] == secretWord[i]) {
        flag = 2;
      } else {
        guessWord[i] = secretWord[i];
        flag = 1;
      }
    }
  }
  return flag;
}
