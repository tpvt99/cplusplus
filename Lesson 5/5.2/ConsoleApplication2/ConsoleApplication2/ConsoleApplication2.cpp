// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using str = std::string;

enum class Animal {
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH,
};


auto getAnimalName(Animal)->str;
auto printNumberOfLegs(Animal)->void;

int main()
{
	Animal a = Animal::CHICKEN;
	Animal b = Animal::CAT;
	std::cout << "A " << getAnimalName(static_cast<Animal>(10)) << " has";
	printNumberOfLegs(static_cast<Animal>(10));
	std::cout << "A " << getAnimalName(a) << " has"; 
	printNumberOfLegs(a);
	std::cout << "A " << getAnimalName(b) << " has";
	printNumberOfLegs(b);

}

str getAnimalName(Animal a) {
	switch (a) {
	case(Animal::PIG): return "pig";
	case (Animal::CHICKEN): return "chicken";
	case(Animal::GOAT): return "goat";
	case(Animal::CAT): return "cat";
	case(Animal::DOG): return "dog";
	case (Animal::OSTRICH): return "ostrich";
	default:
		return "???";

	}
}

void printNumberOfLegs(Animal a) {
	switch (a) {
	case(Animal::PIG): std::cout << " 4 legs.\n";break;
	case (Animal::CHICKEN): std::cout << " 2 legs.\n";break;
	case(Animal::GOAT): std::cout << " 4 legs.\n";break;
	case(Animal::CAT): std::cout << " 4 legs.\n";break;
	case(Animal::DOG): std::cout << " 4 legs.\n";break;
	case (Animal::OSTRICH): std::cout << " 2 legs.\n";break;
	default: std::cout << "???" << std::endl;break;
	}
}