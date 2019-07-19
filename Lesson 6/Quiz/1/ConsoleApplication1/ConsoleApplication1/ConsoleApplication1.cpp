// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum class Items {
	HEALTH,
	TORCHES,
	ARROWS,
	MAX_ITEMS,
};

auto countTotalItems(int (&ref)[static_cast<int>(Items::MAX_ITEMS)]) -> int;
auto countTotalItems2(int* count) ->int;

int main()
{
	int items[static_cast<int>(Items::MAX_ITEMS)] = { 2,5,10 };
	std::cout << "Total items: " << countTotalItems(items) << std::endl;
	std::cout << "Total items: " << countTotalItems2(items) << std::endl;
}

int countTotalItems(int(&ref)[static_cast<int>(Items::MAX_ITEMS)]) {
	int total = 0;
	for (auto& r : ref)
		total += r;
	return total;
}

int countTotalItems2(int* count) {
	int total = 0;
	for (int* c = count; c < count + static_cast<int>(Items::MAX_ITEMS); c++) {
		total += *c;
	}
	return total;
}