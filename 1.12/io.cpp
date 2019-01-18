#include <iostream>

int readNumber()
{
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "Sum of 2 numbers is " << x << std::endl;
}
