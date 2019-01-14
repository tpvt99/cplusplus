#include <iostream>

using namespace std;

int doubleNumber(int x) {
    return x*2;
}

int main()
{
    cout << "Type a number: ";
    int a;
    cin >> a;
    cout << "Double Number is: " << doubleNumber(a) << endl;
    return 0;
}
