// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

auto readNumber() -> int;
auto readOperation() -> char;
auto doOperation(int, int, char) -> int;


int main()
{
	int a = readNumber();
	int b = readNumber();
	char op = readOperation();
	

	std::cout << a << " " << op << " " << b << " = " << doOperation(a, b, op) << std::endl;
}

int doOperation(int a, int b, char op) {
	float result = 0.0f;
	switch (op) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	case '%':
		return a % b;
	default:
		std::cout << "Wrong operation. Exit program";
		exit(0);
	}
}
int readNumber() {
	std::cout << "Enter a number: ";
	int a;
	std::cin >> a;
	return a;
}

char readOperation() {
	std::cout << "Enter an operation: ";
	char c;
	std::cin >> c;
	return c;
}