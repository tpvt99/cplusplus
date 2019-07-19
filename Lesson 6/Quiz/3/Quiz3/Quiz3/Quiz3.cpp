// Quiz3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int x = 10;
	int y = 11;
	std::cout << "Before swap: x: " << x << ", y: " << y << std::endl;
	swap(x, y);
	std::cout << "After swap: x: " << x << ", y: " << y << std::endl;
}
