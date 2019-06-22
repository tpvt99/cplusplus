// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <ctime>
#include <string>
#include <sstream>

int randomGenerator() {
	const int beginNum = 1;
	const int endNum = 100;
	std::mt19937 mersenne(static_cast<std::mt19937::result_type>(std::time(nullptr)));
	std::uniform_int_distribution<> die(beginNum, endNum);

	return die(mersenne);
}

int userGuess(int times) {
	while (true) {
		std::cout << "Guess #" << times << ": ";
		int c;
		std::cin >> c;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else {
			std::cin.ignore(32767, '\n');
			return c;
		}

	}
}

bool userPlayAgain() {
	while (true) {
		std::cout << "Would you like to play again (y/n)? ";
		char c;
		std::cin >> c;
		std::cin.ignore(32767, '\n');
		if (c == 'y') {
			return true;
		}
		else if (c == 'n') {
			return false;
		}
	}
}

int main()
{
	
	do {
		std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is.\n";
		int rand = randomGenerator();
		for (int count = 0; count < 7; count++) {
			int guess = userGuess(count+1);
			if (guess < rand)
				std::cout << "Your guess is too low." << std::endl;
			else if (guess > rand)
				std::cout << "Your guess is too high." << std::endl;
			else {
				std::cout << "Correct! You win!" << std::endl;
				break;
			}
			if (count == 6)
				std::cout << "Sorry, you lose. The correct number was " << rand << ".\n";
		}
	} while (userPlayAgain());
	std::cout << "Thank you for playing.\n";
}

