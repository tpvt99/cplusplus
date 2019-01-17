#include <iostream>
#include "add.h"

using namespace std;


int main()
{
    cout << "Type 2 number: ";
    int a, b;
    cin >> a;
    cin >> b;
    cout << "Sum of " << a << " + " << b << " is " << add(a,b) << endl;
    return 0;
}
