// Quiz6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <random>
#include <ctime>

enum class Ranks {
	RANK2,
	RANK3,
	RANK4,
	RANK5,
	RANK6,
	RANK7,
	RANK8,
	RANK9,
	RANK10,
	JACK,
	QUEEN,
	KING,
	ACE,
	MAX_RANKS,
};

enum class Suits {
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES,
	MAX_SUITS,
};

struct Card {
	Ranks rank;
	Suits suit;
};

auto printCard(const Card& ref) -> void;
auto printDeck(const std::array<Card, 52>&) -> void;
auto swapCard(Card&, Card&) -> void;
auto swapCard(Card*, Card*)->void;
auto shuffleDeck(std::array<Card, 52>&) -> void;
auto getCardValue(const Card&) ->int;
auto playBlackjack(std::array<Card, 52>&) -> int;

int main()
{
	using namespace std;
	array<Card, 52> cardDecks;

	using iType = array<Card, 52>::size_type;
	iType counter = 0;
	for (int i = 0; i < static_cast<int>(Ranks::MAX_RANKS); i++) {
		for (int j = 0; j < static_cast<int>(Suits::MAX_SUITS); j++) {
			cardDecks.at(counter).rank = static_cast<Ranks>(i);
			cardDecks.at(counter).suit = static_cast<Suits>(j);
			counter += 1;
		}
	}
	shuffleDeck(cardDecks);
	printDeck(cardDecks);
	int x = playBlackjack(cardDecks);
	if (x == 1)
		cout << "Player win\n";
	else if (x == 0)
		cout << "Player lose\n";
	else
		cout << "Player ties\n";
	
}

int playBlackjack(std::array<Card, 52> & cards) {
	Card* cardPtr = &cards.at(0);
	int playerScore = 0;
	int dealerScore = 0;
	// initialization for player cards
	playerScore += getCardValue(*(cardPtr++));
	if (cardPtr->rank == Ranks::ACE)
		if (playerScore < 11)
			playerScore += getCardValue(*(cardPtr++));
		else
			playerScore += 1;
	else
		playerScore += getCardValue(*(cardPtr++));
	while (true) { // player first
		std::string playerChosen;
		while (true) {
			std::cout << "Current score: " << playerScore << std::endl;
			if (playerScore > 21)
				return false;
			std::cout << "Stand or hit: ";
			std::cin >> playerChosen;
			if (playerChosen == "hit" || playerChosen == "stand") {
				std::cin.ignore(32767, '\n');
				break;
			}
			std::cin.ignore(32767, '\n');
		}
		if (playerChosen == "hit") {
			if (cardPtr->rank == Ranks::ACE) {
				if ((playerScore + 11) < 21)
					playerScore += 11;
				else
					playerScore += 1;
			} else
				playerScore += getCardValue(*(cardPtr++));
		} else
			break;
	}
	if (playerScore > 21) {
		std::cout << "Score of player is: " << playerScore << std::endl;
		return false;
	}

	// initialization for dealer cards
	dealerScore += getCardValue(*(cardPtr++));
	while (true) {
		if (dealerScore >= 17)
			break;
		dealerScore += getCardValue(*(cardPtr++));
	}
	std::cout << "Score of player is: " << playerScore << std::endl;;
	std::cout << "Score of dealer is: " << dealerScore << std::endl;;
	if (dealerScore > 21) {
		return true;
	} else {
		if (playerScore > dealerScore)
			return true;
		else if (playerScore == dealerScore)
			return 2;
		else
			return false;
	}
}

void shuffleDeck(std::array<Card, 52> & card) {
	std::mt19937 mersenne(static_cast<std::mt19937::result_type>(std::time(nullptr)));
	std::uniform_int_distribution<> die(0, 51);
	using iType = std::array<Card, 52>::size_type;
	for (iType i = 0; i < 52; i++) {
		swapCard(card.at(i), card.at(die(mersenne)));
	}
}

void swapCard(Card& c1, Card& c2) {
	Card temp = c1;
	c1 = c2;
	c2 = temp;
}

void swapCard(Card* c1, Card* c2) {
	Card temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

int getCardValue(const Card& card) {
	Ranks r = card.rank;
	int value = 0;
	if (static_cast<int>(r) < 9) {
		value = static_cast<int>(r) + 2;
	}
	else if (static_cast<int>(r) == 12) {
		value = 11;
	}
	else {
		value = 10;
	}
	return value;
}

void printDeck(const std::array<Card, 52>& ref) {
	for (const auto &element : ref) {
		printCard(element);
		std::cout << " ";
	}
	std::cout << std::endl;
}

void printCard(const Card& ref) {
	using namespace std;
	Ranks r = ref.rank;
	Suits s = ref.suit;
	switch (r) {
	case Ranks::RANK2: cout << "2"; break;
	case Ranks::RANK3: cout << "3"; break;
	case Ranks::RANK4: cout << "4"; break;
	case Ranks::RANK5: cout << "5"; break;
	case Ranks::RANK6: cout << "6"; break;
	case Ranks::RANK7: cout << "7"; break;
	case Ranks::RANK8: cout << "8"; break;
	case Ranks::RANK9: cout << "9"; break;
	case Ranks::RANK10: cout << "10"; break;
	case Ranks::JACK: cout << "J"; break;
	case Ranks::QUEEN: cout << "Q"; break;
	case Ranks::KING: cout << "K"; break;
	case Ranks::ACE: cout << "A"; break;
	default: cout << "Error.";
	}

	switch (s) {
	case Suits::CLUBS: cout << "C"; break;
	case Suits::DIAMONDS: cout << "D"; break;
	case Suits::SPADES: cout << "S"; break;
	case Suits::HEARTS: cout << "H"; break;
	default: cout << "Error.";
	}

}
