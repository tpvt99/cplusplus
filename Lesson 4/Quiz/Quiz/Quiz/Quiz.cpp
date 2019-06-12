// Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using str = std::string;

enum class MonsterType {
	ORGE,
	DRAGON,
	ORC,
	GIANT_SPIDDER,
	SLIME,
};

struct Monster {
	MonsterType type;
	std::string name;
	int health;
};

str print_monster_type(MonsterType type) {
	switch (type) {
	case MonsterType::ORGE: return "Ogre";
	case MonsterType::DRAGON: return "Dragon";
	case MonsterType::ORC: return "Orc";
	case MonsterType::GIANT_SPIDDER: return "Giant Spider";
	case MonsterType::SLIME: return "Slime";
	default: return "";
	}
}

void printMonster(Monster monster) {
	std::cout << "This " << print_monster_type(monster.type) << " is named " <<
		monster.name << " and has " << monster.health << " health." << std::endl;
}

int main()
{
	Monster a = { MonsterType::ORGE, "Torg", 145 };
	Monster b = { MonsterType::SLIME, "Blurp", 23 };
	printMonster(a);
	printMonster(b);
	return 1;
}
