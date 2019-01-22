#include <iostream>

int main() {
	std::cout << "Enter a number: ";
	int a;
	std::cin >> a;
	if (a == 2) std::cout << "This is digit prime" << std::endl;
	else if (a == 3) std::cout << "This is digit prime" << std::endl;
	else if (a == 5) std::cout << "This is digit prime" << std::endl;
	else if (a == 7) std::cout << "This is digit prime" << std::endl;
	else std::cout << "This is not prime" << std::endl;
}
