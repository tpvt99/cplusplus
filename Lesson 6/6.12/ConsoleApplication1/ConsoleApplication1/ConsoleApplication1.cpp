// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>

void printArray(std::array<int, 10> & myArray) {
	using index_t = std::array<int, 10>::size_type;
	for (index_t i = 0; i < myArray.size(); ++i) {
		std::cout << myArray[i] << " ";
	}
	std::sort(myArray.begin(), myArray.end());
	std::cout << "\n";
	for (auto& i : myArray)
		std::cout << i << " ";
}

int main()
{
	std::vector<int> myVector;
	myVector = { 1,2,3 };
	myVector.resize(5);
	myVector[4] = 10;
	for (auto& x : myVector)
		std::cout << x << " ";
}
