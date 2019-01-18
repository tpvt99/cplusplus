#include <iostream>
#include "io.h"

using namespace std;

int main()
{
    int a, b, c;
    a = readNumber();
    b = readNumber();
    c = a + b;
    writeAnswer(c);
    return 0;
}


