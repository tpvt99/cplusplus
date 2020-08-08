// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

using namespace std;


void love(int x = 10) {
	cout << x << endl;
}

void love(float y) {
	cout << y << endl;
}

int main()
{
	love(10.3f);
}


