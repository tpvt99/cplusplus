// Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>
#include <string>

struct Employee {
	std::string name;
};

int sumTo(const int a) {
	return 10;
}


void minmax(const int a, const int b, int& min, int& max) {
	if (a >= b) {
		min = b;
		max = a;
	}
	else {
		max = b;
		min = a;
	}
}

void nameEmployee(Employee &a) {
	std::cout << a.a;
}


int main()
{
    std::cout << "Hello World!\n";
	int a, b, c, d;
	a = 10;
	b = -10;
	minmax(a, b, c, d);

	std::cout << "Min: " << c << std::endl;
	std::cout << "Max: " << d << std::endl;
}

