// Quiz4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void printString(const int (&array)[3]) {
	for (const int& e : array)
		std::cout << e << " ";
}

int main()
{
	int x[] = { 1,2,3 };
	printString(x);
}
