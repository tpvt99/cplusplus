// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void problem2() {
	int i = 96;
	while (i++ <= 121)
		std::cout << static_cast<char>(i) << " ";
}
void problem3() {
	int counter = 0;
	while (counter < 5) {
		int i = 5-counter;
		while (i >= 1) {
			std::cout << i-- << " ";
		}
		std::cout << "\n";
		counter++;
	}
}

void problem4() {
	int counter = 1;
	while (counter <= 5) {
		int i = 5;
		while (i >= 1) {
			if (i <= counter)
				std::cout << i << " ";
			else
				std::cout << "  ";
			i--;
		}
		std::cout << "\n";
		counter++;
	}
}

int main()
{
	//problem2();
	problem3();
	problem4();
}

