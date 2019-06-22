// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "constants.h"

auto getInitialHeight() -> double;
auto calculateHeight(double, int) -> double;
auto printHeight(double, int) -> void;
auto calculateAndPrintHeight(double, int) -> double;

int main()
{
	const double initialHeight = getInitialHeight();
	double currentHeight = initialHeight;
	int secs = 0;
	for (;currentHeight >= 0;secs++) {
		currentHeight = calculateAndPrintHeight(initialHeight, secs);
	}
}

double getInitialHeight() {
	std::cout << "Enter the height of the tower in meters: ";
	double h;
	std::cin >> h;
	return h;
}

double calculateHeight(double initHeight, int secondPassed) {
	double distanceFallen = myConstants::gravity * secondPassed * secondPassed;
	double currentHeight = initHeight - distanceFallen;
	return currentHeight;
}

void printHeight(double height, int secondPassed) {
	if (height > 0.0)
	{
		std::cout << "At " << secondPassed << " seconds, the ball is at height:\t" << height <<
			" meters\n";
	}
	else
		std::cout << "At " << secondPassed << " seconds, the ball is on the ground.\n";
}

double calculateAndPrintHeight(double initialHeight, int secondsPassed)
{
	double height = calculateHeight(initialHeight, secondsPassed);
	printHeight(height, secondsPassed);
	return height;
}