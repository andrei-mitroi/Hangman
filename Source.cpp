#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>



void GameStart() {
	std::cout << "   Welcome to HANGMAN!     " << std::endl;
	std::cout << "__________________________ " << std::endl;
	std::cout << "      _ _ _ _ _            " << std::endl;
	std::cout << "      |       |            " << std::endl;
	std::cout << "      |	     (_)         " << std::endl;
	std::cout << "      |       |            " << std::endl;
	std::cout << "      |      /|\\          " << std::endl;
	std::cout << "      |       |            " << std::endl;
	std::cout << "    __|__    / \\          " << std::endl;
	std::cout << "___/_____\\________________" << std::endl;
	std::cout << "Can you guess the correct word to save your life?" << std::endl;
}

int main() {
	int tries{ 6 };
	char guess;
	bool correctGuess;

	GameStart();

	std::string wordList[50]{ "fire", "mountain", "fireplace", "damage", "fort", "castle", "soap", "cigarette", "story", "dog",
							"cat","dinosaur","pirate", "explorer", "coffee", "exchange", "gold", "wealth", "horse", "animal",
							"book", "blizzard", "axiom", "jigsaw", "bicycle", "queen", "job", "pixel", "piano", "coronavirus",
							"statue", "videogame", "challenge", "headphones", "vacuum", "computer", "poster", "farmer", "ashtray", "monitor",
							"puzzle", "razzberry", "nightclub", "whiskey", "zombie", "legend", "marquis", "luxury", "zodiac", "jazz" };

	srand(time(0));
	std::string word = wordList[(rand() % 50)];

	std::string hiddenWord(word.length(), '*');

	std::cout << "The word you have to guess is " << word.length() << " letters long" << std::endl;


	while (tries >= 0) {

		correctGuess = false;

		std::cout << hiddenWord << std::endl;
		std::cout << "You have " << tries << " tries remaining\n";


		std::cout << "\nYour guess is: ";
		std::cin >> guess;

		for (int i = 0; i < hiddenWord.length(); i++) {
			if (word[i] == guess) {
				hiddenWord[i] = guess;
				correctGuess = true;
			}
		}
		if (correctGuess == false) {
			tries--;
			std::cout << "\nSorry! " << guess << " is not part of the word!\n\n" << std::endl;
		}
		else {
			std::cout << "Congrats! " << guess << " is part of the word\n";
		}
		if (word == hiddenWord) {
			std::cout << "\n\nCongrats! You have guessed the correct word!\n\n" << hiddenWord << std::endl;
			exit(0);
		}

		switch (tries) {
		case 6:
			std::cout << "__________________________ " << std::endl;
			std::cout << "      _ _ _ _ _            " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |	                 " << std::endl;
			std::cout << "      |                    " << std::endl;
			std::cout << "      |                    " << std::endl;
			std::cout << "      |                    " << std::endl;
			std::cout << "    __|__                  " << std::endl;
			std::cout << "___/_____\\________________" << std::endl;
			break;

		case 5:
			std::cout << "__________________________ " << std::endl;
			std::cout << "      _ _ _ _ _            " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |	     (_)         " << std::endl;
			std::cout << "      |                   " << std::endl;
			std::cout << "      |                    " << std::endl;
			std::cout << "      |                    " << std::endl;
			std::cout << "    __|__                  " << std::endl;
			std::cout << "___/_____\\________________" << std::endl;
			break;

		case 4:
			std::cout << "__________________________ " << std::endl;
			std::cout << "      _ _ _ _ _            " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |	     (_)         " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |                    " << std::endl;
			std::cout << "      |                    " << std::endl;
			std::cout << "    __|__                  " << std::endl;
			std::cout << "___/_____\\________________" << std::endl;
			break;

		case 3:
			std::cout << "__________________________ " << std::endl;
			std::cout << "      _ _ _ _ _            " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |	     (_)         " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |      /|            " << std::endl;
			std::cout << "      |                    " << std::endl;
			std::cout << "    __|__                  " << std::endl;
			std::cout << "___/_____\\________________" << std::endl;
			break;

		case 2:
			std::cout << "__________________________ " << std::endl;
			std::cout << "      _ _ _ _ _            " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |	     (_)         " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |      /|\\          " << std::endl;
			std::cout << "      |                    " << std::endl;
			std::cout << "    __|__                 " << std::endl;
			std::cout << "___/_____\\________________" << std::endl;
			break;

		case 1:
			std::cout << "__________________________ " << std::endl;
			std::cout << "      _ _ _ _ _            " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |	     (_)         " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |      /|\\          " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "    __|__    /           " << std::endl;
			std::cout << "___/_____\\________________" << std::endl;
			break;

		case 0:
			std::cout << "__________________________ " << std::endl;
			std::cout << "      _ _ _ _ _            " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |	     (_)         " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "      |      /|\\          " << std::endl;
			std::cout << "      |       |            " << std::endl;
			std::cout << "    __|__    / \\          " << std::endl;
			std::cout << "___/_____\\________________" << std::endl;
			std::cout << "Face the gallows you landlover!" << std::endl;
			tries = -1;
			break;
		}
	}

	return 0;
}






