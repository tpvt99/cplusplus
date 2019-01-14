#include <iostream>

using namespace std;

int return7()
{
    return 7;
}

int return9()
{
    return 9;
}
// this works, print value 16
int main()
{
    std::cout << return7() + return9() << std::endl;

    return 0;
}
