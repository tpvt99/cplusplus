// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

auto askName() -> int;
auto eachName(int)-> std::string*;
auto sortName(std::string*, int) -> void;

int main()
{
	using namespace std;
	std::cout << "Hello World!\n";
	int number = askName();
	string* name = eachName(number);
	sortName(name, number);
	for (string* a = name; a < name + number; a++)
		cout << *a << endl;
}

int askName() {
	using namespace std;
	int c;
	do {
		cout << "How many names would you like to enter? ";
		cin >> c;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else {
			cin.ignore(32767, '\n');
			return c;
		}
	} while (true);
}

std::string* eachName(int number) {
	using namespace std;
	string* name = new string[number];
	for (int i = 0;i < number;i++) {
		cout << "Enter name #" << i+1 << ": ";
		//getline(cin, *(name+i));
		cin >> *(name + i);
		cin.ignore(32767, '\n');
	}
	return name;
}

void sortName(std::string* name, int nameLength) {
	using namespace std;
	for (string* nameA = name; nameA < name + nameLength-1; nameA++) {
		for (string* nameB = nameA + 1; nameB < name + nameLength; nameB++) {
			if (*nameB < *nameA) {
				string temp = *nameB;
				*nameB = *nameA;
				*nameA = temp;
			}
		}
	}
}