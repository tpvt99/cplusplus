#include <iostream>
int return7()
{
    return 7;


}

    int return9()
    {
        return 9;
    }
// illegal
int main()
{
    std::cout << return7() + return9() << std::endl;

    return 0;
}
