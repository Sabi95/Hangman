#include<iostream>

#include<cstdlib>

#include<ctime>

#include <string>

using namespace std;

int main() {
  int maxTries = 5;
  int remainTries = 5;
  char guess;
  string word;
  int wordLength;

  displayGameDetails(maxTries);
  cout << "Random word chosen: " << chooseSecretWord() << "\n";

  return 0;
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
