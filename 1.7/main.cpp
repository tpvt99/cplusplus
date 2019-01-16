#include <iostream>

using namespace std;

int add(int x, int y);

int main()
{
    cout << "3+4+5 = " << add(3,5) << endl;
    return 0;
}

int add(int x, int y)
{
    return x+y;
}
