// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void problem1() {
	for (int i = 0; i <= 20; i++) {
		std::cout << i << std::endl;
	}
}

void sumTo(int a) {
	int i = 1;
	int sum = 0;
	for (;i <= a;i++) {
		sum += i;
	}
	std::cout << "Sum is: " << sum << std::endl;
	
}

int main()
{
	sumTo(10);
}

