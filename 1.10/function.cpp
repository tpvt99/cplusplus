#include <iostream>
#include "header.h"

void doNothing()
{
    #ifdef LIKE
    std::cout << "Love";
    #endif // LOVE
    #ifndef LIKE
    std::cout << "Not Love";
    #endif // LOVE
}
