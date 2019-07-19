// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstddef>


struct Person {
	int age;
	double weight;
};


int main()
{
	using namespace std;
	int x[] = { 1,2,3,4,5 };
	for (const int &num : x) {
		cout << num << " ";
	}

}